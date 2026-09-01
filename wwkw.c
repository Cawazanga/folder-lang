#include "func.h"
#include <stdio.h>
#include <string.h>
void wwkw(const char *keyword) {
    if (strcmp(keyword, "sbuflist") == 0)
        printf("1: %s\n2: %s\n", sbuf1, sbuf2);
    if (strcmp(keyword, "runsbuf1") == 0)
        runoldbuf(sbuf1, iv);
    if (strcmp(keyword, "runsbuf2") == 0)
        runoldbuf(sbuf2, iv);
}
