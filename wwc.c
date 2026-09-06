#include <stdio.h>
#include <stdlib.h>
#include "func.h"
void wwc(const char *csev) {
    char fa[3];
    char ta[8];
    if (sscanf(csev, "%2s %7s", fa, ta) != 2) {
        return;
    }
    cycle(fa, atoi(ta));
}
