#include<stdio.h>
int main()
int arr[100],i,j,n,temp,exchanges;
printf("enter the no of elements:");
scanf("%d",&n);
printf("/n enter the elements of array:");
for(i=0;i<n;i++)
scanf("%d",arr[i]);
for(i=0;i<n-1;i++)
{
    exchanges=0;
    for(j=0;j<n-1-j;j++)
    {
        if(arr[i]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            exchanges++;
        }
    }
    if(exchanges==0)
    break;
printf("/n sorted list through bubble sorting is:");
for(i=0;i<n;i++)
printf("%d/n",arr[i]);
printf("/n");
return 0;
}