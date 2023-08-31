#include <stdio.h>
int main()
{
    int n;
    int ch;
    int j, i;
    printf("Enter the range 'n' of the series : ");
    scanf("%d",&n);
    printf("Select option from the menu : \n1---For loop\n2---While loop\n3---do-while loop\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("The pronic numbers from 1 to %d are : \n", n);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i / 2; j++)
            {
                if (j * (j + 1) == i)


                    printf("%d ", i);
            }
        }
        printf("\n");
        break;


    case 2:
        i = 1;
        printf("The pronic numbers from 1 to %d are : \n", n);
        while (i <= n)
        {
            j=1;
            while (j <= i)
            {
                if (j * (j + 1) == i)
                {
                    printf("%d ", i);
                }
                j++;
            }
            i++;
        }
        printf("\n");
        break;


    case 3:
        i = 1;
        printf("The pronic numbers from 1 to %d are : \n", n);
        do
        {
            j=1;
            do
            {
                if (j * (j + 1) == i)
                {
                    printf("%d ", i);
                }
                j++;
            } while (j <= i);
            i++;
        } while (i <= n);
        printf("\n");
        break;


    default:
        printf("INVALID CHOICE");
        printf("\n");
        break;
    }
}

