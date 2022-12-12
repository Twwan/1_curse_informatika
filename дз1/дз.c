#include <stdio.h>
#include <math.h>

int main() {
  int i = 1, x = 10;
  float j;
  for (j=0; j<10; j+=2.3){
    printf("i = %d \n", i);
    i++;
    printf("j = %f\n", j);
  }
  printf("j = %f\n", j);
}
