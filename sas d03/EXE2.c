#include <stdio.h>

int main()
{
    int nbrs[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int number;
    printf("donner moi un nbr:");
    scanf("%d", &number);
    printf("Chiffres : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", nbrs[i]);
    }
    printf("\n");
    printf("Ocurences: ");
    int tab[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if (number == 0)
    {
        tab[0]++;
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            int last_digit = number % 10;
            int h = number;
            while (h != 0)
            {
                int dig = h % 10;
                if (dig == last_digit)
                {
                    tab[i]++;
                }
                h /= 10;
            }
            number /= 10;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]);
    }
}