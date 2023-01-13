#include "../inc/libmx.h"

void mx_printstr(const char *s)
{
	if (!s){
		mx_printstr("(null)");
	}else{
		write(1, s, mx_strlen(s));
	}
}


