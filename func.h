#ifndef FUNC_H
#define FUNC_H


short check(const char *buf, char from, char *var, char doas);
int runcorbuf(const char *buf, int *intvarspace);
void wwv(int modenum, const char *csev, int *intvarspace);
void wwdq(int modenum, const char *csev, int *intvarspace);
void wwkw(const char *keyword);
void cycle(char numsbuf, short count);
void wwc(const char *csev);
void wwa(const char *buf, short cost);
void wwvif(int *intvarspace, char opcheck, short fvar, short svar, short numrbuf, short numrelsebuf);
// void newsbuf(void);

char fastobjnum[3];

int iv[1024];
char sbuf[96][1024];
char argsu[5][8];
#endif
