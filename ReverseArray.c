#include"stdio.h"
void main()
{
    int n,i,j=0;
    printf("Enter number of elements of array:");
    scanf("%d",&n);
    int array[n],a[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter %d element:",i+1);
        scanf("%d",&array[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        a[j]=array[i];
        j++;
    }

     for(i=0;i<n;i++)
    {
        array[i]=a[i];
    }

    printf("\nReverse array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}
