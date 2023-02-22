#include<stdio.h>
int main()
{
int n,x;
printf("Enter n and x :\n");
scanf("%d%d",&n,&x);

for (int i=1;i<=n;i++)
{
if(i%x==0)
continue;
printf("%d\n",i);
}
return 0;

}

