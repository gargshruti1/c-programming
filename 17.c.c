#include<stdio.h>
#include<math.h>
void new(float a,float b,float c,float d,float root1,float root2,float real,float img)
{
    if(d>0)
    {
      root1 = (-b + sqrt(d))/(2*a);
      root2 = (-b - sqrt(d))/(2*a);
      printf("1st distinct real root exists %f\n",&root1);
      printf("2nd distinct real root exists %f\n",&root2);  
      }
    else if(d=0)
    {
        root1=root2= -b/(2*a);
        printf("1st equal real root exists %f\n",&root1);
        printf("2nd equal real root exists %f\n",&root2);
    }
    else
    {
          root1=root2= -b/(2*a);
          img = sqrt(-d)/(2*a);
          printf("1st distinct img root %f\n",&root1);
          printf("2nd distinct img root %f\n",&root2);
    }
}
int main() 
{
  float a,b,c,d,root1,root2,real,img;
  printf("Enter the value of a");
  scanf("%f",&a);
  printf("Enter the Value of b");
  scanf("%f",&b);
  printf("Enter the value of c");
  scanf("%f",&c);
  new(a,b,c,d,root1,root2,real,img);
  return 0;
}