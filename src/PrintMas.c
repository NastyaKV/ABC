#include "alph.h"

void printMas(int n, char A[1200][1200])
{
    int i = 0;
    while(i <= n)
    {
        if(A[i][0] != '\0')
            fputs(A[i], stdout);
        if(i != n)
            printf("\n");
        i++;
    }
}
