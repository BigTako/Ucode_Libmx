#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) 
{
    size_t cur_size;
    void *ptr_new;
    
    if (ptr == 0) return malloc(size);
    cur_size = malloc_size(ptr);
    
    if (size <= cur_size) return ptr;
    
    ptr_new = malloc(size);
    mx_memcpy(ptr_new, ptr, cur_size);
    free(ptr);
    return ptr_new;
}


