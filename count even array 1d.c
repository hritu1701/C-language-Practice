//WAP to count total number of even array elements in the given 1D array
#include<stdio.h>
int main()
{

    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count =0;
        for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            count++; }
    }
    printf("%d",count);
    return 0;
}
