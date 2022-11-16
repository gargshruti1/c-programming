#include <stdio.h>
int main() {
  int i,n,arr[100],max,min;
  printf("Enter the number of elements (1 to 100)");
  scanf("%d", &n);

  for (int i = 0; i < n;i++) {
    printf("Enter the elements in array");
    scanf("%d", &arr[i]);
  }

  for (int i = 1; i < n; i++) {
    {
        if(arr[i]>max)
          max=arr[i];
        if(arr[i]<min)
          min=arr[i];
    }
      printf("MAX is %d ",arr[i]);
      printf("Min is %d ",arr[i]);
    }

 return i;
}