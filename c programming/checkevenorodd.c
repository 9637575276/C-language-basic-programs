#include<stdio.h>
int main()
{
   char c;
   int lowercase,uppercase;
    printf("Enter a character");
    scanf("%c",&c);
    lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lowercase||uppercase)
    printf("%c vowel",c);
    else
    printf("%c consonent",c);
   
    return 0;
    
}