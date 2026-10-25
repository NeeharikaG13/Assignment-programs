#include<stdio.h>
int main()
{
  float a,b,c;
  printf("\n Enter weight in kg and height in meters");
  scanf("%f%f",&a,&b);
  // Here a is weight and b is height
  if(a<0 && b<0)
  {
    printf("\n Invalid weight and height");
  }  
  else
  {
    c=a/(b*b);
    // Here c is BMI
    printf("\n BMI is %f",c);
    
    if(c<18.5)
    {
      printf("\n Underweight");
    }
    else if(c>=18.5 && c<25)
    {
      printf("\n Normal");
    }
    else if(c>=25 && c<30)
    {
      printf("\n Overweight");
    }
    else
    {
      // for BMI 30 and above
      printf("\n Obese");
    }
  }  
  printf("\n End of program");
}
