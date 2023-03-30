//WAP to swap the largest and smallest element in the given 1D array and  display the updated array element.
#include<stdio.h>
int main()
{
int arr[10];
for (int i =1;i<10;i++)
{
scanf("%d",&arr[i])
}
int max= arr[0];
for (int i =1;i<10;i++)
{
if (max<arr[i])
{max=arr[i];}
}

    return 0;
}
