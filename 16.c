#include<stdio.h>
void new(int a,int b,int c)
{
    if(a==b && b==c && c==a) 
    {
       printf("triangle is equilateral"); 
    }
    
    else if(a==b || b==c || a==c)
    {
        printf("triangle is isosceles");
    }
    else
    {
        printf("triangle is scalane");  
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
