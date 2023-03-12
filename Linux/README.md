Höw to install?
1) replace line 307-455 in de.cpp with the contains inside any Neo_snippet_xxx.cpp file (or you could edit them by yourself, also if you choose Neo_snippet_Colemak_DH.cpp you can skip this step)
2) replace the whole content of /usr/share/X11/xkb/symbols/de with that of de.cpp you just edited (noted that the real de has NO file extension, for some reason VS Code think that those files inside /usr/share/X11/xkb/symbols are C++ so I set the file extension as such)
3) if you have not enable Neo2 keyboard layout in ibus daemon settings yet, enable it
4) to refresh the Neo2 layout , switch to another layout then switch back or restart ibus daemon