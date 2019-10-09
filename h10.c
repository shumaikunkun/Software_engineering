#include <stdio.h>
#include <math.h>
#define PIE 3.14159265
int main(){
  double radius;
  scanf("%lf", &radius);
  printf("The area of a circle with a radius of %f is %f.\n", radius, pow(radius,2)*PIE);
}
