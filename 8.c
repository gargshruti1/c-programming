#include<stdio.h>
int main() {
    char t;
printf("enter a character");
scanf("%c",&t);
if ((t=='a'|| t=='e'|| t=='i'|| t=='o'|| t=='u')||(t=='A'|| t=='E'|| t=='I'|| t=='O'|| t=='U'))
printf("the char is vowel");
else
printf("the char is not vowel");
return 0;
}
