#include <stdio.h>
void main()
{
   int i,n,a[100],sum=0;
   
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   for(i=0;i<n;i++)
      {
	  printf("element-%d : ",i);
	  scanf("%d",&a[i]);
	  sum= sum+a[100];
	  }
	  printf("Sum = %d\n",sum);
   return 0;
}