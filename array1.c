#include<stdio.h>
int main()
{
    int i,n;
    printf(" Enter the size of the array\n ");
    scanf("%d",&n);
    int a[n];
    printf(" Enter the elements of array\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" Displaying elements\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\n ",a[i]);
    }
     return 0;
}
