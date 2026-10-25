#include<stdio.h>
int main()
{
  char ch;
  printf("\n Enter alphabet");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    printf("\n Vowel");
  }  
  else
  {
    printf("\n Not a vowel");
  }   
  printf("\n End of program");
}
