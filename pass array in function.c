#include<stdio.h>
void f(int a[])
{
a[1]=3;
int i=0;
for(i=0;i<3;i++)
printf("%d",a[i]);



}
void main()
{int a[3]={0,0,0};
f(a);
}
