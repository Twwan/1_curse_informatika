#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  system("chcp 1251");
  float eps = 0.0001;
  float s = 0;
  float x;
  float max = 3.4e38;
  float test = scanf("%f", &x);
  int n = 1;
  double q = ((pow(2*x,2))/(18.0));
  if (test == 1){
    while(eps < q){
      if (n%2==0){
        s = s+q;
      }
      else{
        s = s-q;
      }
    n++;
    q = (q*pow(x,2)*(2*n))/(pow(2*n+1, 2));
    if (q>max){
      printf("%s", "Переполнение");
      return 0;
      }
    }
  }
  printf("%f", s);
  return 0;
}