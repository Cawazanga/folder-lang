#include <stdio.h>
#include <stdlib.h>
#include "func.h"
void wwc(const char *csev) {
    char fa[2];
    char ta[8];
    if (sscanf(csev, "%1s %7s", fa, ta) != 2) {
        return;
    }
    cycle(fa[0], atoi(ta));
}
