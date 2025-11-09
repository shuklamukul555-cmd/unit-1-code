#include<stdio.h>
int main()
{int n;
int fact=1;
printf("eneter number:");
scanf("%d",&n);
if(n<0)
 printf("Factorial not defined for negative number");
else
 for(int i=1;i<=n;i++)
 {
    fact*=i;
 }
 printf("factorial of %d=%d\n",n,fact);
 return 0;
}