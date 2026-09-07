#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void wwkw(const char *keyword) {
    if (strcmp(keyword, "sbuflist") == 0) {
        puts("In proccesing");
    } else if (strcmp(keyword, "runsbuf1") == 0) {
        runcorbuf(sbuf[1], iv);
    } else {
        printf("Error: Not find this keyword \"%s\"\n", keyword);
    }
}
