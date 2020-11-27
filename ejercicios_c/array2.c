/*CTPC 2020 - UNQ*/
#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, *ptr, sum = 0;
    int N=5;
    ptr = (int*) malloc(N * sizeof(int));  
    if(ptr == NULL){
        printf("Error! no se pudo hacer reserva de memoria");
        exit(0);    }
    printf("Ingrese los elementos del vector: ");
    for(i = 0; i < N; ++i)   {
        scanf("%d", ptr + i);
        sum += *(ptr + i);    }
    printf("Sum = %d", sum);
    free(ptr);
    return 0;}