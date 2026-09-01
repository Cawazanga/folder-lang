#ifndef FUNC_H
#define FUNC_H

short check(const char *buf, char from, char *var, char doas);

void wwv(int modenum, const char *csev, int *intvarspace);
void wwdq(int modenum, const char *csev, int *intvarspace);

char oldbuf[1024];

#endif
