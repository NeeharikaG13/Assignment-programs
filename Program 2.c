#include<stdio.h>
int main ()
{
  int a,b;
  float n,p;
  printf("\n enter a,b");
  // a,b are sides of rectangle
  scanf("%d%d",&a,&b);
  // area of the rectangle formula
  n=a*b;
  printf("\n area of rectangle is %f",n);
  // perimeter of rectangle formula 
  p =a+b;
  printf("\n perimeter of rectangle is %f", p);
  return 0;
}
