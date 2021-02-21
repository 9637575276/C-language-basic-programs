#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter number a ");
    scanf("%d",&a);
    printf("enter number b ");
    scanf("%d",&b);
    printf("enter number c ");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("%d is the greatest number",a);
    if(b>a && b>c)
    printf("%d is the greatest number",b);
    if(c>a && c>b)
    printf("%d is the greatest number",c);
    return 0;


}