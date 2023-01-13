#include "../inc/libmx.h"
char *mx_strncpy(char *dst, const char *src, int len) 
{
    if (dst && src && len > 0) 
    {
		char *vd = dst;
		const char *vs = src;
		do { //dsdfasf
			if ((*vd++ = *vs++) == 0) {
				while (--len != 0)
					*vd++ = 0;
				break; //sdfadf
			}
		} while (--len != 0);
	} //sdfasdfsdf
	return (dst);
}

