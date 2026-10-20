// DOS (INT 21h) for the recompiled programs (dos.c)
#ifndef OPEN4DBOXING_DOS_H
#define OPEN4DBOXING_DOS_H

#include <stdbool.h>
#include <stdint.h>
#include "types.h"

typedef struct
{
  const char *gameDir;  // the game's files
  const char *writeDir; // where the program's writes go instead (NULL: the game's folder): a file it creates or
                        // opens for writing lives there (a game file copied there first), and is found there first
  // the answers DOS gives from the outside world: 2Ah the date (CX << 16 | DX), 2Ch the time (CX << 16 | DX), 0Bh
  // a character waiting (AL), 07h/08h the next character (AL)
  uint32_t (*answer)(void *ctx, int ah);
  void (*exit)(int code);  // 4Ch
  void *ctx;
} DosHost;

void dos_attach(const DosHost *host);
// INT 21h with the registers in R: true if served
bool dos_int21(void);
// a read's data arrived (name: the file's; seg:off: where; len: how much): the host sees what was loaded where
extern void (*dos_read_hook)(const char *name, u16 seg, u16 off, u16 len);
// the program ended: its files are closed
void dos_close_all(void);

#endif
