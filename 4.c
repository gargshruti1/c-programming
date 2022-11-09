#include<stdio.h>
int main() {
    int a;
printf("enter the value of a");
scanf("%d",&a);
if(a%5==0)
printf("a is divisible by 5");
else if(a%11==0)
printf("a is divisible by 11");
else
printf("a is not divisible by 5 nor 11");
return 0;
}
