#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

short check(const char *buf, const char from, char *var, const char doas)
{
    bool start = false;
    int j = 0;
    char prestartsyb;
    char preprestartsyb;
    for (int i = 0; buf[i] != '\0'; i++) {
        if (start == false && buf[i] == from) {
            prestartsyb = buf[i - 1];
            preprestartsyb = buf[i - 2];
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
struct chararr {
    int n;
    char *arr;
};
struct intarr {
    int n;
    int *arr;
};
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
    }
}
/*
void wwf(int modenum, const char *fn, const char *ivalue) {
    char buf_namefile[48] = {0};
    char buf_str[2048] = {0};
    if (sscanf(csev, "%47s %7s", buf_namefile, buf_str) != 2) {
        return;
    }
} */
void initintarr(struct intarr *arr) {

}
void initchararr() {

}
int main(void)
{
    int iv[1024];
    FILE *ivf[256];
    iv[2] = 10;
    while (1) {
        char buf[1024];
        char csev[48];

        char iva[1024];
        bool ivb[1024];

        int recs = scanf("%255[^\n]", buf);

        if (recs == 1)
            scanf("%*c");
        else if (recs == 0) {
            scanf("%*c");
            buf[0] = '\0';
        }
        short reta = check(buf, '<', csev, '>');
        wwv(reta, csev, iv);
        if (buf[0] == 'e') {
            char reta = check(buf, '<', csev, '>');
            return atoi(csev);

        }
        else {
            short reta = check(buf, '"', csev, '"');
            wwdq(reta, csev, iv);

        }
    }
    return 1;
}
