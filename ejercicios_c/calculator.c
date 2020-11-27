/*CTPC 2020 - UNQ*/
#include "stdio.h"

float sum(float x, float y);
float product(float x, float y);
float division(float x, float y);

int main(int argc, char** argv) {
  float res, res2, res3;
  res = sum(2, 3);
  res2 = product(3, 5);
  res3 = division(15, 4);
  printf("%f, %f, %f\n", res, res2, res3);
  return 0;
} 

float sum(float x, float y) {
  float res;
  res = x + y;
  return res;}
float product(float x, float y) {
  float res = x * y;
  return res;}
float division(float x, float y) {
  return x/y;}