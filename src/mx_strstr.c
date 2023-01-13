#include "../inc/libmx.h"
//#include "stdio.h"

char*mx_strstr(const char *haystack, const char *needle)
{ 
    int ned_len = mx_strlen(needle);
    if (!ned_len || !haystack) return (char*)haystack;
    char * res = (char*)haystack;
    while (mx_strchr(res, needle[0]) != 0) {
        res = mx_strchr(res, needle[0]);
        if (mx_strncmp(res, needle, ned_len) == 0) {
            return res;
        }
        res++;
    }
    return 0;
}


