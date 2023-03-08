#include<stdio.h>
int main()
{
    int i,n,j,temp;
    printf(" Enter the size of the array\n ");
    scanf("%d",&n);
    int a[n];
    printf(" Enter the elements of array\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("Ascending order\n ");
    for(i=0;i<n;i++)
    {
       for (j=0;j<n;j++)
       {
           if(a[i]<a[j])
           {
               temp= a[i];
               a[i]= a[j];
               a[j] = temp;
           }
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     return 0;
}
/*
Enter the size of the array
 5
 Enter the elements of array
 101 22 111 133 12 
 Ascending order
 12 22 101 111 133 
*/
