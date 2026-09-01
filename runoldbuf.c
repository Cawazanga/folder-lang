#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int runoldbuf(const char *buf, int *intvarspace) {
    char csev[48];



    int recs = scanf("%255[^\n]", buf);

    if (recs == 1)
        scanf("%*c");
    else if (recs == 0) {
        scanf("%*c");
        buf[0] = '\0';
    }
    short reta = check(buf, '<', csev, '>');
    wwv(reta, csev, intvarspace);
    if (buf[0] == 'e') {
        char reta = check(buf, '<', csev, '>');
        return atoi(csev);

    }
    else {
        short reta = check(buf, '"', csev, '"');
        wwdq(reta, csev, intvarspace);

    }
}
