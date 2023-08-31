#include <stdio.h>
int main()
{
    int n;
    int i, j;
    int sum = 0;
    int ch;
    printf("Enter range n of the perfect number series : ");
    scanf("%d", &n);
    printf("Select option from the menu : \n1---For loop\n2---While loop\n3---do-while loop\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        for (i = 1; i <= n; i++)
        {
            sum = 0;
            for (j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    sum = sum + j;
                }
            }
            if (sum == i)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
        break;
    case 2:
        i = 1;
        while (i <= n)
        {
            sum = 0;
            j = 1;
            while (j < i)
            {
                if (i % j == 0)
                {
                    sum = sum + j;
                }
                j++;
            }
            if (sum == i)
            {
                printf("%d ", i);
            }
            i++;
        }
        printf("\n");
        break;
    case 3:
        i = 1;
        do
        {
            sum = 0;
            j = 1;
            do
            {
                if (i % j == 0)
                {
                    sum = sum + j;
                }
                j++;
            } while (j < i);
            if (sum == i && i != 1)
            {
                printf("%d ", i);
            }
            i++;
        } while (i <= n);
        printf("\n");
        break;
    default:
        printf("INVALID CHOICE!!!");
        printf("\n");
        break;
    }
}

