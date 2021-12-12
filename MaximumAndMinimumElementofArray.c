#include"stdio.h"
void main()
{
    int n,i,max,min;
    printf("\nEnter number of elements of array:");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nMaximum element of array is %d\n",max);
    printf("\nMinimum element of array is %d\n",min);
}
