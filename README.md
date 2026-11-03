# Aria of Sorrow — Native C11 Recompilation

Experimental native C11 recompilation of Castlevania: Aria of Sorrow
(USA, A2CE), generated with wozt/gbarecomp.

## Features

- ARM/Thumb code translated to native C11
- SDL2 video output
- Direct Sound audio
- SDL2 gamepad support
- SRAM persistence
- Standalone CMake project

## Building on Debian

Dependencies:

    sudo apt install build-essential cmake ninja-build libsdl2-dev

Build:

    cmake -S . -B build -G Ninja
    cmake --build build -j4

## Running

Supply your own compatible game ROM:

    ./build/A2CE "/path/to/Castlevania - Aria of Sorrow (USA).gba"

## Source generation

Generated using:
https://github.com/wozt/gbarecomp

The generated C project does not require the gbarecomp executable
to compile.

## Important

No original ROM, game save, extracted asset archive or compiled
game binary is included.

Runtime support files copied from gbarecomp are subject to its
MIT license, reproduced in LICENSE.gbarecomp.

Castlevania is the property of its respective rights holders.
