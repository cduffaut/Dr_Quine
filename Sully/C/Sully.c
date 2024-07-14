int i = 5;
#include <stdlib.h>
#include <stdio.h>
#define CODE "int i = %c;%c#include <stdlib.h>%c#include <stdio.h>%c#define CODE %c%s%c%c%cint main () { char str[10] = %cSully_X.c%c; i -= 1; str[6] = (i + 48); FILE *fd = fopen(str, %cw%c); if (fd == NULL) { return (1); } fprintf(fd, CODE,  i + 48, 10, 10, 10, 34, CODE, 34, 10, 10, 34, 34, 34, 34, 34, 34, 34, 37, 37, 37, 34, 10); fclose (fd); char cmd[64]; char exec[8] = %cSully_X%c; exec[6] = i + 48; sprintf (cmd, %cgcc -Wall -Wextra -Werror %cs -o %cs && ./%cs%c, str, exec, exec); system(cmd); return (0); }%c"

int main () { char str[10] = "Sully_X.c"; i -= 1; str[6] = (i + 48); FILE *fd = fopen(str, "w"); if (fd == NULL) { return (1); } fprintf(fd, CODE,  i + 48, 10, 10, 10, 34, CODE, 34, 10, 10, 34, 34, 34, 34, 34, 34, 34, 37, 37, 37, 34, 10); fclose (fd); char cmd[64]; char exec[8] = "Sully_X"; exec[6] = i + 48; sprintf (cmd, "gcc -Wall -Wextra -Werror %s -o %s && ./%s", str, exec, exec); system(cmd); return (0); }
