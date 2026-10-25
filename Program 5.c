#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter your age");
  scanf("%d",&a);
  // Here a is age
  if(21<=a && a<=60)
  {
    printf("Enter your salary");
    scanf("%d",&b);
    // Here b is salary
    if(b>=25000)
    {
      printf("Enter your credit score");
      scanf("%d",&c);
      // Here c is credit score
      if(c>=700)
        printf("Loan approved");
      else
        printf("Loan rejected: credit score below 700");
    }
    else
      printf("Loan rejected: salary below ₹25000");
  }
  else
    printf("Loan rejected: age is not 21 to 60");
  printf("\n End of program");
}
