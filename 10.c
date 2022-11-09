#include<stdio.h>
int main() {
    char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
printf("the char is lowercase alphabet");
}
else if(ch>='A' && ch<='Z')
{
printf("the char is uppercase alphabet");
}
else
{
printf("the char is not alphabet");
}
return 0;
}
