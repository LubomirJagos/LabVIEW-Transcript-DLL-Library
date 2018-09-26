#include <vector>
#include <math.h>

void ARRAYfloor1D(double *input, int input_length, int *output){
  int i;

  /* Calculate the floor of the square of each value. */
  for(i = 0; i < input_length; i++)
  {
    output[i] = (int)floor(input[i] * input[i]);
  }
}

void vectorARRAYfloor1D(double* input, int input_length, int* output){
  int i;

  /* Calculate the floor of the square of each value. */
  for(i = 0; i < input_length; i++)
  {
    output[i] = (int)floor(input[i] * input[i]);
  }
}