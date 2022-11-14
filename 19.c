#include<stdio.h>
#include<math.h>
void new(int per)
{
    if(per>=90)
    {
      printf("GRADE A");  
    }
    else if(per>=80)
    {
        printf("GRADE B");
    }
     else if(per>=70)
    {
        printf("GRADE C");
    }
    else if(per>=60)
    {
        printf("GRADE D");
    }
     else if(per>=40)
    {
        printf("GRADE E");
    }

    else if(per<40)
    {
        printf("GRADE F");
    }    
}
int main()
{
  int per,physics,chemistry,biology,mathematics,computer;
  printf("Enter marks of physics");
  scanf("%d",&physics);
  printf("Enter marks of chemistry");
  scanf("%d",&chemistry);
  printf("Enter marks of biology");
  scanf("%d",&biology);
  printf("Enter marks of mathematics");
  scanf("%d",&mathematics);
  printf("Enter marks of computer");
  scanf("%d",&computer);
  per=((physics+chemistry+biology+mathematics+computer)*100)/500;
    new(per);
  return 0;
}