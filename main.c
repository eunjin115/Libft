#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char *s2 = "\x12\x02";
    printf("%d \n", strncmp(s1, s2,6));
    int i1 = ((strncmp(s1, s2, 6) > 0) ? 1 : ((strncmp(s1, s2, 6) < 0) ? -1 : 0));
}