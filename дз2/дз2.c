#include <stdio.h>
#include <math.h>

int main() {
long long result;
long long a = 9;
long long b = 7;
long long c = 8;
while(b >= -10){
result = a * 9 + b;
printf("%lld \n", result);
b -= 1;
a = a*10 + c;
c -= 1;
}
return 0;
}