#include <stdio.h>
int main()
{
    int i;
    //    printf("donner moi le nombers des espaces:");
    //    scanf("%d",&i);
    int nbr =8;
    int j, k;
    for (i = 0; i < nbr + 1; i++)
    {
        for (j = nbr , k = 0; j > 0; j--, k++)
        {
            if (j == i + 1 || k == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}