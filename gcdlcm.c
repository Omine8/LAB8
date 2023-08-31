#include<stdio.h>
int main(){
int n1,n2;
int i,j;
int gcd,lcm;
printf("Enter the 1st number : ");
scanf("%d",&n1);
printf("Enter the 2nd number : ");
scanf("%d",&n2);
for(i=1;i<=n1;i++)
{
if(n1%i==0 && n2%i==0)
{
gcd=i;
}
}
printf("GCD OF %d and %d is : %d\n",n1,n2,gcd);
lcm = (n1*n2)/gcd;
printf("LCM OF %d and %d is : %d\n",n1,n2,lcm);
}

