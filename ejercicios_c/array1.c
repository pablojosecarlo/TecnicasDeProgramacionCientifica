/*CTPC 2020 - UNQ*/
#include <stdio.h>

int main(void){
   int N=5; 
   int v[N],m[N][N];
   int i,j;
   for (i = 0; i <=N-1 ; i++){
      v[i]=i;
      printf ("%d ",v[i]); }
   printf("\n\n");
   for (i = 0; i <=N-1 ; i++){
     for (j = 0; j <=N-1 ; j++){
        m[i][j]=i+j;
        printf (" %d  ",m[i][j]); }
      printf("\n");
    }       
   return 0;}