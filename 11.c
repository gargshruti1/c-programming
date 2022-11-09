#include<stdio.h>
void new(int week)
{
    if(week==1)
    {
       printf("MONDAY"); 
    }
    else if(week==2)
    {
        printf("TUESDAY");
    }
    else if(week==3)
    {
        printf("WEDNESDAY");
    }
    else if(week==4)
    {
        printf("THRUSDAY");
    }
    else if(week==5)
    {
        printf("FRIDAY");
    }
    else if(week==6)
    {
        printf("SATURDAY");
    }
    else if(week==7)
    {
        printf("SUNDAY");
    }
    else
    {
        printf("invalid week no.");
    }
}
int main() {
  int week;
  printf("Enter (1-7) Number");
  scanf("%d",&week);
  new(week);
  return 0;
}
