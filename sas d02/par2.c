#include <stdio.h>

int main()
{
    int nbr;
    printf("entrer un entier:");
    scanf("%d", &nbr);
    do{
        printf("%d", nbr % 10);
        nbr /= 10;
    }while (nbr != 0);
    return 0;
}
