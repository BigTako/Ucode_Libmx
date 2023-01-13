#include "../inc/libmx.h"

static int file_len(const char *file) {
    short fl = open(file, O_RDONLY); // variable for file
    short size = 0;
    int len = 0;
    char buf;
    size = read(fl, &buf, 1);
    while (size > 0) //cycle
    {
        size = read(fl, &buf, 1);
        len++;
    }
    close(fl);
    return len;
}

char *mx_file_to_str(const char *file) {
    int fl = open(file, O_RDONLY);
    int sz = 0;
    int file_size = 0;
    if (fl == -1) {
        close(fl);
        return NULL;
    }
    file_size = file_len(file);
    if (file_size == 0) return NULL;
    char *new_string = mx_strnew(file_size);
    sz = read(fl, new_string, file_size);
    close(fl);
    return new_string;
}



