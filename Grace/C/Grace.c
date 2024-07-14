#include <stdio.h>
/*
	Light my wicked ways if I sin
*/
#define FILENAME "Grace_kid.c"
#define CODE "#include <stdio.h>%c/*%c%cLight my wicked ways if I sin%c*/%c#define FILENAME %cGrace_kid.c%c%c#define CODE %c%s%c%c#define MAIN int main() { FILE *fd = fopen(FILENAME, %cw%c); if (fd == NULL) { return (1); } fprintf (fd, CODE, 10, 10, 9, 10, 10, 34, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10); fclose (fd); return (0); }%cMAIN%c"
#define MAIN int main() { FILE *fd = fopen(FILENAME, "w"); if (fd == NULL) { return (1); } fprintf (fd, CODE, 10, 10, 9, 10, 10, 34, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10); fclose (fd); return (0); }
MAIN
