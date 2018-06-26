#include "alph.h"

void sort(int n, char A[1200][1200])
{
  int k;
  int i;
  int j;
  char temp[1200];   
  for ( i = 0; i <= n - 2; i++) 
  {
    k = i;
    for( j = i + 1; j <= n - 1; j++)
    {
      if(strcasecmp(A[j], A[k]) < 0)
        k = j;        
    }
    strcpy(temp, A[i]);
    strcpy(A[i], A[k]);
    strcpy(A[k], temp);
  }      
}
