#include <stdio.h>
int main()
{
    int n;
    int c = 1;
    int ch;
    int i=2,j=2;
    printf("Enter the range 'n' of the series : ");
    scanf("%d", &n);
    printf("Select option from the menu : \n1---For loop\n2---While loop\n3---do-while loop\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    printf("The prime numbers from 1 to %d using for loop are : \n\n", n);
        for (i = 2; i <= n; i++)
        {
            j=2;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    c = 0;
                    break;
                }
            }
            if (c != 0)
            {
                printf("%d ", i);
            }
            c = 1;
        }
        printf("\n");
        break;
    case 2:
    printf("The prime numbers from 1 to %d using while loop are : \n\n", n);
        while (i <= n)
        {
            j = 2;
            while (j < i)
            {
                if (i % j == 0)
                {
                    c = 0;
                    break;
                }
                j++;
            }
            if (c != 0)
            {
                printf("%d ", i);
            }
            c = 1;
            i++;
        }
        printf("\n");
        break;
    case 3:
    printf("The prime numbers from 1 to %d using do-while loop are : \n\n", n);
    if(n>=2)
    {
        printf("2 ");
    }
        do
        {
            j = 2;
            do
            {
                if (i % j == 0)
                {
                    c = 0;
                    break;
                }
                j++;
            }while (j <+ i);
            if (c != 0)
            {
                printf("%d ", i);
            }
            c = 1;
            i++;
        }while (i <= n);
        printf("\n");
        break;
        default:
        printf("INVALID CHOICE!!!");
        printf("\n");
        break;
    }
}

