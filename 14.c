#include<stdio.h>
void new(int sum,int a,int b,int c)
{
    if(sum==180 && a>0 && b>0 && c>0)
    {
       printf("triangle is valid"); 
    }
    
    else
    {
        printf("triangle is invalid");
    }
}
int main() {
  int sum,a,b,c;
  printf("Enter the value of a");
  scanf("%d",&a);
  printf("Enter the Value of b");
  scanf("%d",&b);
  printf("Enter the value of c");
  scanf("%d",&c);
  sum=a+b+c;
  new(sum,a,b,c);
  return 0;
}
