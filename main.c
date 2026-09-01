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
int main(void) {


    FILE *ivf[256];
    iv[2] = 10;

    while (1) {
        //runoldbuf(const char *buf, int *intvarspace)
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
        if (buf[0] == '{' || buf[1] == '{') {
            puts("db::");
            char reta = check(buf, '{', csev, '}');
            if (buf[0] == '{' || buf[0] == '1')
                snprintf(sbuf1, sizeof sbuf1, "%s", csev);
            if (buf[0] == '2')
                snprintf(sbuf2, sizeof sbuf2, "%s", csev);
        } else {
            short reta = check(buf, '<', csev, '>');
            wwv(reta, csev, iv);

            if (buf[0] == 'e') {
                char reta = check(buf, '<', csev, '>');
                return atoi(csev);

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
    return 1;
}
