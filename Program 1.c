#include<stdio.h>
int main()
{
  int a;
  printf("\n enter a number");
  scanf("%d",&a);
  if(a>0)
    printf("\n Given no.is positive");
  else if(a<0)  
    printf("\n Given no.is negative");
  else
    printf("\n Given no.is zero");
    
  printf("\nEnd of program");
    return 0;
}
