#include <stdio.h>
void main()
{
   int i,n,a[5];
   
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   
      for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
   printf("The values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("%d",a[i]);
	 }
 
   printf("\nArray in Reverse Order :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("%d",a[i]);
	  }
   printf("\n");
}