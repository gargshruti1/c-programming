#include<stdio.h>
void new(int month)
{
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
       printf("31"); 
    }
    else if(month==2)
    {
        printf("28 / 29 (feb) ");
    }
    else if(month==4 ||month==6 || month==9 || month==11)
    {
        printf("30");
    }
    
    else
    {
        printf("invalid month no.");
    }
}
int main() {
  int month;
  printf("Enter (1-12) Number");
  scanf("%d",&month);
  new(month);
  return 0;
}
