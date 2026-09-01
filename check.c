#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include <stdbool.h>
#include <string.h>
short check(const char *buf, const char from, char *var, const char doas)
{
    bool start = false;
    int j = 0;
    char prestartsyb;
    char preprestartsyb;
    char afterchar;

    for (int i = 0; buf[i] != '\0'; i++) {
        if (start == false && buf[i] == from) {
            if (i > 0)
                prestartsyb = buf[i - 1];
            if (i > 1)
                preprestartsyb = buf[i - 2];
            printf("%c", preprestartsyb);
            start = true;
            continue;
        }

        if (start == true && buf[i] == doas) {

            break;
        }

        if (start == true) {
            var[j] = buf[i];
            j++;
        }
    }

    var[j] = '\0';

    switch (preprestartsyb) {
        case 'v':
            switch (prestartsyb) {
                case '=':
                    return 14;
                    break;
                case '+':
                    return 15;
                    break;
                case '-':
                    return 16;
                    break;
            }
            break;
    }

    switch(prestartsyb) {
        case 'a':
            return 1;
            break;
        case 'n':
            return 2;
            break;
        case 'l':
            return 3;
            break;
        case 'i':
            return 1;
            break;
        case 's':
            return 9;
        case '=':
            return 4;
            break;
        case '+':
            return 5;
            break;
        case '-':
            return 6;
            break;
        default:
            return 0;
    }
}
