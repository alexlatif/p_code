
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int     len;
    int     i;
    char    *res;

    len = 0;
    while (src[len] != '\0')
        len++;
    if (!(res = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while (i < len)
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}