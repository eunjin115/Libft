#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char str[100] = "abcdefghij";
    printf("%s \n", ft_substr(str, 2, 3));
}