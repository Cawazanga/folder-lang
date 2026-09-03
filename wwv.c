#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include <string.h>
void wwv(int modenum, const char *csev, int *intvarspace)
{
    char varnumarr[3] = {0};
    char valuenumarr[8] = {0};
    int varnum;
    int valuenum;
    if (sscanf(csev, "%2s %7s", varnumarr, valuenumarr) != 2) {
        return;
    }
    varnum = atoi(varnumarr);
    valuenum = atoi(valuenumarr);
    switch (modenum) {
        case 4:
            intvarspace[varnum] = valuenum;
            break;
        case 5:
            intvarspace[varnum] = intvarspace[varnum] + valuenum;
            break;
        case 6:
            intvarspace[varnum] = intvarspace[varnum] - valuenum;
            break;
        case 14:
            intvarspace[varnum] = intvarspace[valuenum];
            break;
        case 15:
            intvarspace[varnum] = intvarspace[varnum] + intvarspace[valuenum];
            break;
        case 16:
            intvarspace[varnum] = intvarspace[varnum] - intvarspace[valuenum];
            break;
    }
}
void wwvif(int *intvarspace, char opcheck, short fvar, short svar, short numrbuf) {
    switch (opcheck) {
        case '=':
            if (intvarspace[fvar] == intvarspace[svar]) {
                runcorbuf(sbuf[numrbuf], intvarspace);
            }
            break;
        case '!':
            if (intvarspace[fvar] != intvarspace[svar]) {
                runcorbuf(sbuf[numrbuf], intvarspace);
            }
            break;
        case '<':
            if (intvarspace[fvar] < intvarspace[svar]) {
                runcorbuf(sbuf[numrbuf], intvarspace);
            }
            break;
        case '>':
            if (intvarspace[fvar] > intvarspace[svar]) {
                runcorbuf(sbuf[numrbuf], intvarspace);
            }
            break;
        default:
            puts("Invalid Operator");
            exit(2);
    }
}
