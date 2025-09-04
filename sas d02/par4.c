#include <stdio.h>

int main()
{
    int m1, j1, a1, m2, j2, a2;
    printf("entrer le premier date de format mm/jj/aa:");
    scanf("%d/%d/%d", &m1, &j1, &a1);
    printf("entrer le deuxiem date de format mm/jj/aa:");
    scanf("%d/%d/%d", &m2, &j2, &a2);
    if (a2 > a1)
    {
        printf("%d/%d/%d est plus tôt que %d/%d/%d", m1, j1, a1, m2, j2, a2);
    }
    else if (a1 > a2)
    {
        printf("%d/%d/%d est plus tôt que %d/%d/%d", m2, j2, a2, m1, j1, a1);
    }
    else
    {
        if (m2 > m1)
        {
            printf("%d/%d/%d est plus tôt que %d/%d/%d", m1, j1, a1, m2, j2, a2);
        }
        else if (m1 > m2)
        {
            printf("%d/%d/%d est plus tôt que %d/%d/%d", m2, j2, a2, m1, j1, a1);
        }
        else
        {
            if (j2 > j1)
            {
                printf("%d/%d/%d est plus tôt que %d/%d/%d", m1, j1, a1, m2, j2, a2);
            }
            else if (j1 > j2)
            {
                printf("%d/%d/%d est plus tôt que %d/%d/%d", m2, j2, a2, m1, j1, a1);
            }
        }
    }
}