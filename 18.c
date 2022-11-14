#include<stdio.h>
#include<math.h>
void new(float cp, float sp)
{
    if(sp>cp)
    {
      printf("profit");  
    }
    else if(cp>sp)
    {
        printf("loss");
    }
    else
    {
        printf("NO PROFIT NO LOSS");
    }    
}
int main()
{
  float cp,sp;
  printf("Enter cost price");
  scanf("%f",&cp);
  printf("Enter selling price");
  scanf("%f",&sp);
  new(cp,sp);
  return 0;
}