#include<stdio.h>
int main ()
{
  int a,b;
  /*Here a is amount 
    b is membership*/
  printf("\n Enter a and b");
  scanf("%d%d",&a,&b);
  // Here 1 is premium membership 
  // 0 is regular membership
  if (a>=500)
  {
    // no delivery charge for every customer 
      if(b==1)
      {
        printf("\n Final amount to pay is %f",a-(a*0.1));
        // Here 10% discount is given for premium member
      }
      else 
      {
       // Here no discount for regular member 
      printf("\n Final amount to pay is %f",(float)a);
      }
  }  
  else 
  {
   // if amount is less than 500 , every customer must pay delivery charge ₹50 and no discount
    printf("\n Final amount to pay is %f",(float)(a+50));
  }
  printf("\n End of the program");
  return 0;
}
