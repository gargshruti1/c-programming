#include <stdio.h>
int main() {
    char t;
printf("enter a character");
scanf("%c",&t);
if((t>='a' && t<='z')||(t>='A' && t<='Z'))
printf("the char is alphabet");
else 
printf("the char is not alphabet");
return 0;
}