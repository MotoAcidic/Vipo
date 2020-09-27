
Debian
====================
This directory contains files used to package vipod/vipo-qt
for Debian-based Linux systems. If you compile vipod/vipo-qt yourself, there are some useful files here.

## vipo: URI support ##


vipo-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install vipo-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your vipo-qt binary to `/usr/bin`
and the `../../share/pixmaps/vipo128.png` to `/usr/share/pixmaps`

vipo-qt.protocol (KDE)

