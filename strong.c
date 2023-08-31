#include <stdio.h>
int main()
{
    int n, r, sum = 0, i = 1, j;
    int temp;
    int ch;
    printf("Enter the range 'n' of the series : ");
    scanf("%d", &n);
    printf("Select option from the menu : \n1---For loop\n2---While loop\n3---do-while loop\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("The strong numbers from 1 to %d using for loop are : \n", n);
        for (i = 1; i <= n; i++)
        {
            temp = i;
            for (temp; temp != 0; temp /= 10)
            {
                r = temp % 10;
                int fact = 1;
                for (j = 1; j <= r; j++)
                {
                    fact = fact * j;
                }
                sum = sum + fact;
            }
            if (sum == i)
            {
                printf("%d ", i);
            }
            sum = 0;
        }
        printf("\n");
        break;
    case 2:
        printf("The strong numbers from 1 to %d using while loop are : \n", n);
        while (i <= n)
        {
            temp = i;
            while (temp != 0)
            {
                r = temp % 10;
                int fact = 1;
                j = 1;
                while (j <= r)
                {
                    fact = fact * j;
                    j++;
                }
                sum = sum + fact;
                temp /= 10;
            }
            if (sum == i)
            {
                printf("%d ", i);
            }
            sum = 0;
            i++;
        }
        printf("\n");
        break;
    case 3:
        printf("The strong numbers from 1 to %d using do-while loop are : \n", n);
        do
        {
            temp = i;
            do
            {
                r = temp % 10;
                int fact = 1;
                j = 1;
                do
                {
                    fact = fact * j;
                    j++;
                } while (j <= r);
                sum = sum + fact;
                temp /= 10;
            } while (temp != 0);
            if (sum == i)
            {
                printf("%d ", i);
            }
            sum = 0;
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

