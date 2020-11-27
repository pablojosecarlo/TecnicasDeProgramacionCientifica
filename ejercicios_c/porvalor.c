/*CTPC 2020 - UNQ*/
#include "stdio.h"

float sum(float x, float y);

int main(int argc, char** argv) {
  float res,x=2.0;
  res = sum(x, 3);
  printf("x=%f, res=%f, %f\n", x, res);
  return 0;
} 

float sum(float x, float y) {
   x = x + y;
  return x;
}