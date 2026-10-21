The game's disks go here: disk1.img and disk2.img, the images of 4D Sports Boxing's two 720 KB floppies (README.md's
"Getting the game" gives the SHA1s of the images Open4DBoxing was checked with). They are not included: you need your
own copy of the game. They may also go next to the program.

The Roland MT-32's ROMs go here too: a control ROM and a PCM ROM, as files of any names (they are recognized by their
contents; an original MT-32's, versions 1.04 to 1.07, is the sound the game was made for; a later MT-32's or a
CM-32L's also work). They are not included: they are Roland's, and you need your own.

Then choose the MT-32 in the game's menu (F4, GENERAL, Sound: mt32) or Open4DBoxing.ini (sound = mt32), or start the
game with the driver: open4dboxing GAMEDIR n mt15.drv d (GAMEDIR: this folder, or wherever the disks are)

The ROMs are also looked for in the folder the OPEN4DBOXING_MT32ROMS environment variable names, the one
Open4DBoxing.ini's mt32_roms names, and next to the program. Without them, the Sound Blaster's sound plays instead.
