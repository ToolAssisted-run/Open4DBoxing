// Open4DBoxing.ini: the frontend's settings (see the file itself for every option). The parser and the defaults use no
// SDL. Every default is what Open4DBoxing does without the file; the command line's arguments (the game's own) win
// over the file's.
#ifndef OPEN4DBOXING_SETTINGS_H
#define OPEN4DBOXING_SETTINGS_H

#include <stdint.h>

enum { SCALING_SHARP, SCALING_FUZZY, SCALING_BLURRY };
// the game's sound drivers, in the menu's order; their files (the game's argument): PC15.DRV, AD15.DRV, SB15.DRV,
// TD15.DRV, MT15.DRV
enum { SOUND_SPEAKER, SOUND_ADLIB, SOUND_SB, SOUND_TANDY, SOUND_MT32, SOUND_COUNT };
// the game's builds, in the menu's order: the MCGA/VGA, EGA, CGA and Tandy programs (4DBMCGA.EXE, 4DBEGA.EXE, ...)
enum { VIDEO_MCGA, VIDEO_EGA, VIDEO_CGA, VIDEO_TANDY, VIDEO_COUNT };
extern const char *const settings_video_files[VIDEO_COUNT];
extern const char *const settings_sound_files[SOUND_COUNT];

typedef struct os_settings
{
  // [General]
  int start_fullscreen;
  int window_width, window_height;  // 0: auto
  int use_correct_aspect_ratio;     // 1: 4:3 (mode 13h on a monitor of the time)
  int use_integer_scaling;
  int scaling_type;                 // SCALING_*
  int sound;                        // SOUND_*: the sound driver the game loads (at the start)
  int video;                        // VIDEO_*: the build that runs (at the start): the card it draws for
  int volume;                       // 0..15
  char mt32_roms[256];              // the MT-32's ROMs' folder ("": the default places)
  // [Controller]
  int enable_joystick;              // a joystick or game controller is the game's joystick (at the start)
  // (SDLPoP2's random seed option, kept for the menu code's sake; not an option of this game)
  int random_seed_clock;
  uint64_t random_seed;
} os_settings;

void settings_defaults(os_settings *s);
// warn: called with a message for each unknown section, key or bad value
typedef void (*settings_warn_fn)(const char *msg);
int settings_load(os_settings *s, const char *path, settings_warn_fn warn);  // 0: the file could not be read
int settings_parse_text(os_settings *s, const char *text, const char *origin, settings_warn_fn warn);  // -> warnings

#endif
