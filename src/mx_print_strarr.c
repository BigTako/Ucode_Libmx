#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim)
{
    if (arr != NULL && delim != NULL){
        int i = 0;
        for ( ; arr[i + 1]; i++)
        {
            mx_printstr(arr[i]);
            mx_printstr(delim);
        }
        mx_printstr(arr[i]);
        mx_printstr("\n");
    }
}   


