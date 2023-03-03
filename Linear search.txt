#include <stdio.h>
int main() 
{
    int i,n,data,f;
    printf(" enter the elements to enter in an array \n");
    scanf("%d",&n);int a[n];
     printf(" enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    printf("\n enter the data element to search ");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            printf("\n item found at %d position ",i);
            break;
        }
    }    
        if(i==n)
        {
            printf(" element not found ");
        }
        
    if(i==0&& i==1)
    {
       f=1; 
    }
    else if (i>=1 && i<n-1)
    {
        f=2;
    }
    if(f==1)
    {
        printf("\n best case");
    }
    else if(f==2)
    {
        printf("\n Average case ");
    }
    else
    {
        printf("\n worst case");
    }
    return 0;
}
