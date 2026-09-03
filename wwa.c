#include <stdio.h>
#include "func.h"
void wwa(const char *buf, short cost) {
    char csev[96];
    check(buf, '[', csev, ']');
    if (cost == 0 || cost == 1) {
        char arg1[8];
        if (sscanf(csev, "%7s", arg1) != 1) {
            return;
        }
        snprintf(argsu[0], sizeof argsu[0], "%s", arg1);
    } else if (cost == 2) {
        char arg1[8];
        char arg2[8];
        if (sscanf(csev, "%7s %7s", arg1, arg2) != 2) {
            return;
        }
        snprintf(argsu[0], sizeof argsu[0], "%s", arg1);
        snprintf(argsu[1], sizeof argsu[1], "%s", arg2);
    } else if (cost == 3) {
        char arg1[8];
        char arg2[8];
        char arg3[8];
        if (sscanf(csev, "%7s %7s %7s", arg1, arg2, arg3) != 3) {
            return;
        }
        snprintf(argsu[0], sizeof argsu[0], "%s", arg1);
        snprintf(argsu[1], sizeof argsu[1], "%s", arg2);
        snprintf(argsu[2], sizeof argsu[2], "%s", arg3);
    } else if (cost >= 4) {
        char arg1[8];
        char arg2[8];
        char arg3[8];
        char arg4[8];
        if (sscanf(csev, "%7s %7s %7s %7s", arg1, arg2, arg3, arg4) != 4) {
            return;
        }
        snprintf(argsu[0], sizeof argsu[0], "%s", arg1);
        snprintf(argsu[1], sizeof argsu[1], "%s", arg2);
        snprintf(argsu[2], sizeof argsu[2], "%s", arg3);
        snprintf(argsu[3], sizeof argsu[3], "%s", arg4);
    } else {
        puts("in proccesing\n");
    }


}
