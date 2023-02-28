#include<stdio.h>
void printTable(int n);

int main(){
    int n;
printf("Enter first number: ");
scanf("%d",&n);

printTable(n);  //Argument/actual parameter


return 0;

}
void printTable(int n){    //Parameter/formal parameter
for(int i=1;i<=10;i++)
    printf("%d\n",i*n);

}


