
#include<stdio.h>
#include<math.h>
void new(int bs)
{
    float hra,da,gross;
    if(bs<=10000)
    {
      hra= bs*0.2;
      da= bs*0.8;
    }
    else if(bs<=20000)
    {
      hra= bs*0.25;
      da= bs*0.9; 
    }
     else 
    {
      hra= bs*0.3;
      da= bs*0.95;  
    }
        
}
int main()
{
  int bs,gross,hra,da;
  printf("Enter basic salary");
  scanf("%d",&bs);
  gross=bs+hra+da;
    new(bs);
  return bs+hra+da;
}