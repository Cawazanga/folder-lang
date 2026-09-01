#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int runoldbuf(const char *buf, int *intvarspace) {

    char csev[48];

    short reta = check(buf, '<', csev, '>');
    wwv(reta, csev, intvarspace);
    if (buf[0] == 'e') {
        char reta = check(buf, '<', csev, '>');
        return atoi(csev);

    } else if (buf[0] == ':') {
        char reta = check(buf, ':', csev, '\0');

    }
    else {
        short reta = check(buf, '"', csev, '"');
        wwdq(reta, csev, intvarspace);

    }
}
