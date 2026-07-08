#include "main.h"

void reverse_array(int *a, int n)
{
    int *left = a;
    int *right = a + n - 1;
    int temp;
    

    int i = 0;

    while (i < n)
    {
        temp = *(a + (n-1));
        *(a + (n-1)) = *(a + i);
        *(a + i) = temp;

        i++;
        n--;
    }
}