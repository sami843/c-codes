#include<stdio.h>
int main()
{
    int arr[]={12,4,39,63,74,99};
    int len=sizeof (arr)/sizeof (arr[0]);
    find_small_larger(arr,len);
}
void find_small_larger(int arr[],int n)
{
    int min ,max;
    min=arr[0];
    max=arr[0];
     for(int i=0;i<n;i++)
     {
         if(arr[i]<min)
            min=arr[i];
         if(arr[i]>max)
            max=arr[i];

     }
     printf("maximum:%d and minimum:%d\n",min,max);
}
