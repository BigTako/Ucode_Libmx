#include "../inc/libmx.h"

char *mx_strtrim(const char *str)
{
  if (!str){
    return NULL;
  } else if (mx_strlen(str) == 0) {
    return mx_strnew(0);
  }
  int e = mx_strlen(str); // end
  int b = 0; // begin
  for (; str[b] != '\0'; b++){
    if (!mx_isspace(str[b])) break;
  };
  for (; e - 1 >= b; e--){
    if (!mx_isspace(str[e - 1])) break;
  }
  if (e - b + 1 >= 0)
  {
    char *res = mx_strnew(e - b + 1);
    res = mx_strncpy(res, str + b, e - b);
    return res;
  }
  return NULL;
}



