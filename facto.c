#include <stdio.h>
int main()
{
    int n, fact = 1;
    int ch;
    int i = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Select option from the menu : \n1---For loop\n2---While loop\n3---do-while loop\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        for (; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("The factorial of %d using for loop is : %d\n", n, fact);
        break;
    case 2:
        while (i <= n)
        {
            fact = fact * i;
            i++;
        }
        printf("The factorial of %d usnig while loop is : %d\n", n, fact);
        break;
    case 3:
        do
        {
            fact = fact * i;
            i++;
        } while (i <= n);
        printf("The factorial of %d using do-while loop is : %d\n", n, fact);
        break;


    default:
        printf("INVALID CHOICE\n");
        break;
    }
}

