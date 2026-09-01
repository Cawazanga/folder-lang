#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"


struct chararr {
    int n;
    char *arr;
};
struct intarr {
    int n;
    int *arr;
};

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

        snprintf(oldbuf, sizeof oldbuf, "%s", buf);
    }
    return 1;
}
