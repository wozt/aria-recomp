/* Unresolved functions - trap stubs for unanalyzed code */
#include "game.h"
#include <stdio.h>

/* 1 unresolved function targets */

void func_080A1B0A(void) {
    static int warn = 0;
    if (++warn <= 3) {
        fprintf(stderr, "[unresolved] func_080A1B0A called\n");
    }
}

