#include<stdio.h>
int main ()
{
  int a;
  printf("\n Enter age ");
  scanf("%d",&a);
  // Here a is age
  if (a>=18)
  {
    printf("\n Eligible to vote");
  }
  else 
  {
    // if the age is below 18
    printf("\n  Not Eligible to vote");
  }
  printf("\n End of the program");
  return 0;
}
