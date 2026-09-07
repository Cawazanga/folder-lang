#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int runcorbuf(const char *buf, int *intvarspace) {

    char csev[48];


    if (buf[0] == 'i' && buf[1] == 'f') {
        wwa(buf, 5);
        wwvif(iv, argsu[0][0], atoi(argsu[1]), atoi(argsu[2]), atoi(argsu[3]), atoi(argsu[4])); //
    }
    if (buf[0] == '{') {

        char reta = check(buf, '{', csev, '}');
        char retd = check(buf, '}', fastobjnum, '\0');
        snprintf(sbuf[atoi(fastobjnum)], sizeof sbuf[atoi(fastobjnum)], "%s", csev);
    } else {
        short reta = check(buf, '<', csev, '>');
        wwv(reta, csev, iv);

        if (buf[0] == 'e') {
            char reta = check(buf, '<', csev, '>');
            return atoi(csev);

        }
        if (buf[0] == 'c') {
            check(buf, '<', csev, '>');
            wwc(csev);
        }
        else if (buf[0] == ':') {
            char reta = check(buf, ':', csev, '\0');
            wwkw(csev);
        }
        else {
            short reta = check(buf, '"', csev, '"');
            wwdq(reta, csev, iv);
        }
    }

}
