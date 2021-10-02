#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *tab[2];// tab is int ** !!
  int *p = (int*)malloc(6*sizeof(int));
  
  p[0] = 11;
  p[1] = 12;
  p[2] = 13;
  p[3] = 21;
  p[4] = 22;
  p[5] = 23;
  
  tab[0] = &p[0]; // *(p+i)
  tab[1] = &p[3]; // tab[][]
  
  printf("%d %d %d\n", tab[0][0], tab[0][1], tab[0][2]); //11 12 13
  printf("%d %d %d\n", tab[1][0], tab[1][1], tab[1][2]); //21 22 23
   
  free(p);
}
