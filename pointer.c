#include <stdio.h>
#include <stdlib.h>
int main(){
int i;
int a =5;
int*p=(int*)malloc(40);

for(i=0;i<10;i++)

{
    scanf("%d",&p[i]);
}
for(i=0;i<10;i++)
{
    printf("%d ",p[i]);
}


return 0;
}
