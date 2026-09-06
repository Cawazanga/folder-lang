#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void wwkw(const char *keyword) {
    if (strcmp(keyword, "sbuflist1") == 0)
        printf("%s", sbuf[1]);
    if (strcmp(keyword, "runsbuf1") == 0)
        runcorbuf(sbuf[1], iv);
    if (strcmp(keyword, "newsbuf") == 0)
        puts("in proccesing\n");
    else
        puts("Error:not found keyword");
}
