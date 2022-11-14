
#include<stdio.h>
#include<math.h>
void new(int unit)
{
    int rs;
    if(unit<=50)
    {
      rs= unit*0.50;
      printf("rupee,%d",&rs);
    }
    else if(50<unit<=150)
    {
      rs= 25+(unit-50)*0.75;
      printf("rupee,%d",&rs);
    }
     else if(150<unit<=250)
    {
      rs= 100+(unit-150)*1.20;
      printf("rupee,%d",&rs);  
    }
    else if(unit>250)
   {
      rs= 220+(unit-250)*1.20;
      printf("rupee,%d",&rs);  
    }   
      return rs;

}
int main()
{
  int unit,rs;
  printf("Enter units");
  scanf("%d",&unit);
    new(unit);
  return rs;
}