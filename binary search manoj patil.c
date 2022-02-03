#include<stdio.h>
void main()
{
    int n,i,a[10],key,low,high,mid,flag=0;
    printf("\nEnter the no of Elements");
    scanf("%d",&n);
    printf("\nEnter%d elements in ascending order:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the key Element to Search");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        if(key>a[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    if(flag==1)
    printf("\nSuccessful Search %d at position %d",key,mid+1);
    else
    printf("\nUnsuccessful Search");
        
}

