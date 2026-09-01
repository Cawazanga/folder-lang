#ifndef FUNC_H
#define FUNC_H


short check(const char *buf, char from, char *var, char doas);
int runoldbuf(const char *buf, int *intvarspace);
void wwv(int modenum, const char *csev, int *intvarspace);
void wwdq(int modenum, const char *csev, int *intvarspace);
void wwkw(const char *keyword);

int iv[1024];

char sbuf1[1024];
char sbuf2[1024];
#endif
