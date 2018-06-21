#include "alph.h"

void sort(int n, char **A)
{
  int k;
  char temp[1200];   
  for (int i = 0; i <= n - 2; i++) 
  {
    k = i;
    for(int j = i + 1; j <= n - 1; j++)
    {
      if(strcasecmp(A[j], A[k]) < 0)
        k = j;        
    }
    strcpy(temp, A[i]);
    strcpy(A[i], A[k]);
    strcpy(A[k], temp);
  }      
}
