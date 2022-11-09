#include<stdio.h>
void new(int a,int b,int c)
{
    if((a+b>c) && (b+a>c) && (c+a>b))
    {
       printf("triangle is valid"); 
    }
    
    else
    {
        printf("triangle is invalid");
    }
}
int main() {
  int a,b,c;
  printf("Enter the value of a");
  scanf("%d",&a);
  printf("Enter the Value of b");
  scanf("%d",&b);
  printf("Enter the value of c");
  scanf("%d",&c);
  new(a,b,c);
  return 0;
}
