// The game's sound drivers (*.DRV: raw binaries with a table of near jumps at their start, one per entry), each
// recompiled from its machine code (drv_*.c). The game loads the chosen one into a block of its own and calls its
// entries through far pointers; here NAME_seg is that block's segment and NAME_slot(k) runs entry k with the
// caller's far return address on the stack.
#ifndef OPEN4DBOXING_DRIVERS_H
#define OPEN4DBOXING_DRIVERS_H
#include "asm2c.h"
extern u16 pc15_seg;
void pc15_slot(int slot);
bool pc15_run(u16 off);  // any routine of the driver by its offset (a callback it registered): false if none
#endif
