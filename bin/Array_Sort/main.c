#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             if(*(arr+i)>*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
               *(arr+j)=temp;
            }
        }
    }
    printf("Sorted array : \n");
    for(int x=0;x<n;x++ )
    {
        printf("%d  ", *(arr+x));
    }
}
int main()
{
    int *arr,num;
    printf("Enter the size of array:\n");
    scanf("%d",&num);

    arr=(int *)malloc(num*sizeof(int));

    printf("Enter the Numbers:\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",(arr+i));
    }
    sort( arr,num);
    return 0;
}
