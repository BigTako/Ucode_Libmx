#include "../inc/libmx.h"

char * mx_strndup( const char * s1, size_t n)
{
    if (s1 != NULL && s1[0] != '\0'){
        char *dup = NULL;
        size_t l = mx_strlen(s1);
        if (n < l) 
        {
            l = n;
        }
        dup = mx_strnew(l);
        mx_strncpy(dup, s1, l);
        return dup;
    }
    return mx_strnew(0);
}


