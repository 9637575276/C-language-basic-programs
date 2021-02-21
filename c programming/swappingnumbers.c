#include<stdio.h>
int main ()
{
  int a,b,c;
  printf("Enter number a");
  scanf("%d,",a);
  printf("Enter number b");
  scanf("%d",b);
  c=a;
  a=b;
  b=c;
  printf("numbers after swapping\n",a);
  printf("numbers after swapping\n",b);
  return 0;
  
}