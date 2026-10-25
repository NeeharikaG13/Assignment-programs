#include<stdio.h>
int main()
{
  int a,b;
  printf("\n Enter User ID");
  scanf("%d",&a);
  // Here a is User id
  if(a==101)
  { 
    printf("\n Enter the password");
    scanf("%d",&b);
    //Here b is password 
    if(b==4321)
    { 
      printf("\n Login successful");
    } 
    else
    {
      printf("\n Incorrect password");
    } 
  }
  else
  {
    printf("\n User not found");
  }
  printf("\n End of program");
}
