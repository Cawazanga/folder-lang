#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void wwkw(const char *keyword) {
    if (strcmp(keyword, "sbuflist") == 0)
        puts("in proccesing\n");
    if (strcmp(keyword, "runsbuf") == 0)
        runoldbuf(sbuf[atoi(fastobjnum)], iv);
    if (strcmp(keyword, "newsbuf") == 0)
        //newsbuf();
        puts("in proccesing\n");
    else
        puts("Error:not found keyword");
}
