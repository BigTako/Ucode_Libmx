#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right){
    if (!arr) return -1;
    int swaps = 0;
    if (left < right) 
    {
        int i = left;
        int j = right;
        int p_len = mx_strlen(arr[(j + i) / 2]); // pivot
        while (i <= j) {
            while (mx_strlen(arr[i]) < p_len) i++;
            while (mx_strlen(arr[j]) > p_len) j--;
            if (i <= j) 
            {
                if (mx_strlen(arr[j]) != mx_strlen(arr[i])) 
                {
                    char *temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    swaps++;
                }
                j--;
                i++;
            }
        }
        swaps += mx_quicksort(arr, left, j);
        swaps += mx_quicksort(arr, i, right);
    }    
    return swaps;
}




