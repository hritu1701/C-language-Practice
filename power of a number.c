#include<stdio.h>
#include<math.h>
int main(){
    int n,p;
printf("Enter the number: ");
scanf("%d",&n);
printf("Enter the power: ");
scanf("%d",&p);

int s =pow(n,p); //Using math library
printf("The value is : %d",s);
return 0;
}

