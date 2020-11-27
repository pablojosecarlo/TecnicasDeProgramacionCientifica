/*CTPC 2020 - UNQ*/
#include <stdio.h>
void swap(int *n1, int *n2);
int main()
{   int num1 = 5, num2 = 10;
    printf("Num1 inicial = %d\n", num1);
    printf("Num2 inicial= %d\n\n", num2);
    swap( &num1, &num2);
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);
    return 0;}

void swap(int * n1, int * n2)
{   int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;}