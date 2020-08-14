#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, *arr;
   printf("Enter size of an array");
   scanf("%d",&n);
   arr=(int *)calloc(n,sizeof(int));
   if(arr==NULL)
   {
       printf("out of memory error");
   }
    printf("Enter the numbers \n");
    for (int i = 0; i < n; ++i)
        scanf("%d", arr[i]);
}


