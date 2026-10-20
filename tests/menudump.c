// menudump OUT.ppm: the in-game menu opened headlessly (no window) and composed over a flat picture, written as a
// PPM, to look at (the menu test proper is menutest)
#include <stdio.h>
#include <string.h>
#include <SDL.h>
#include "../frontend/overlay_menu.h"
#include "../frontend/settings.h"
static os_settings S;
static overlay_menu_cheats C;
static void apply(int what) { (void)what; }
static void tap(SDL_Scancode sc)
{
  SDL_Event e;
  memset(&e, 0, sizeof e);
  e.type = SDL_KEYDOWN; e.key.state = SDL_PRESSED; e.key.keysym.scancode = sc; e.key.keysym.sym = SDL_GetKeyFromScancode(sc);
  if (overlay_menu_is_open()) overlay_menu_event(&e); else if (overlay_menu_open_event(&e) == 1) overlay_menu_open();
  e.type = SDL_KEYUP; e.key.state = SDL_RELEASED;
  if (overlay_menu_is_open()) overlay_menu_event(&e);
  overlay_menu_frame(); overlay_menu_frame();
}
int main(int argc, char **argv)
{
  if (argc < 2) return 2;
  SDL_Init(0);
  settings_defaults(&S);
  overlay_menu_host host = { &S, NULL, NULL, apply, NULL, "", &C };
  overlay_menu_init(&host);
  tap(SDL_SCANCODE_F4);
  for (int k = 0; k < 20; k++) overlay_menu_frame();
  if (argc > 2) { tap(SDL_SCANCODE_DOWN); tap(SDL_SCANCODE_RETURN); for (int k = 0; k < 20; k++) overlay_menu_frame(); }
  static uint32_t argb[64000];
  for (int k = 0; k < 64000; k++) argb[k] = 0xFF000000u | (uint32_t)((k / 320 / 10 + k % 320 / 10) % 2 ? 0x404080 : 0x8080C0);
  overlay_menu_compose(argb);
  FILE *f = fopen(argv[1], "wb");
  fprintf(f, "P6 320 200 255\n");
  for (int k = 0; k < 64000; k++) fputc((int)(argb[k] >> 16 & 0xFF), f), fputc((int)(argb[k] >> 8 & 0xFF), f), fputc((int)(argb[k] & 0xFF), f);
  fclose(f);
  int page, dialog; const char *item, *sub, *setting;
  overlay_menu_state(&page, &item, &sub, &setting, &dialog);
  printf("menu open %d page %d item %s sub %s setting %s\n", overlay_menu_is_open(), page, item ? item : "-", sub ? sub : "-", setting ? setting : "-");
  return 0;
}
