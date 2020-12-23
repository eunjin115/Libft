#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    //char str[100] = "abcdefghij";
    int str[10] = {1,2,3,4,5,6,7,8,9};
    int *a = (int *)memmove(str+3, str+0, 4 * 4);
    for(int i = 0; i<6; i++)
        printf("%d \n", a[i]);
}