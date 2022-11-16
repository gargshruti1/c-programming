#include <stdio.h>
#define MAX_SIZE 100  // Maximum array size
int main()
{
   int i,j,arr[MAX_SIZE],size,count;
   
   printf("Input the size of the array :");
   scanf("%d",&size);
   printf("enter the elements in array");
   
      for(i=0;i<size;i++)
      {
	  scanf("%d",&arr[i]);
	  }
      
   printf("The values store into the array are : \n");
   for(i=0;i<size;i++)
     {
	   printf("%d",arr[i]);
	 }
 
   for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}