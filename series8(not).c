#include<stdio.h>

int main(){
int n;
int n1=0,n2=1,n3=1;
int sum=n1+n2+n3;
int ch;
int i;
printf("Enter the no of terms to be printed in the series : ");
scanf("%d",&n);
printf("Select option from menu:\n 1---For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
printf("The series upto %d terms is : %d %d %d ",n,n1,n2,n3);
switch(ch)
{
case 1:
for (i=4;i<=n;i++)
{
printf("%d ",sum);
n1=n2;
n2=n3;
n3=sum;
sum=sum+n1;
}
printf("\n");
break;

case 2:
i=3;
while(i<=n)
{
printf("%d ",sum);
n1=n2;
n2=n3;
n3=sum;
sum=sum+n1;
i++;
}
printf("\n");
break;

case 3:
i=3;
do
{
printf("%d ",sum);
n1=n2;
n2=n3;
n3=sum;
sum=sum+n3;
i++;
}while(i<=n);
printf("\n");

break;

default :
printf("INVALID CHOICE!!!");
break;
}
}
