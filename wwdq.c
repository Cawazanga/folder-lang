#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include <string.h>
void wwdq(int modenum, const char *csev, int *intvarspace) {
    char mininumbuf[9];
    if (csev[0] == '(') {
        check(csev, '(', mininumbuf, ')');
        switch (modenum) {
            case 1:
                printf("%d\n", intvarspace[atoi(mininumbuf)]);
                break;
            case 2:
                printf("%d", intvarspace[atoi(mininumbuf)]);
                break;
        }
    }
    else {
        switch (modenum) {
            case 1:
                printf("%s", csev);
                break;
            case 2:
                printf("%s\n", csev);
                break;
            case 3:
                printf("%d", strlen(csev));
                break;
            default:
                printf("%s\n", csev);
        }
    }
}
