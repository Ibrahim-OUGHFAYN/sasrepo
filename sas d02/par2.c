#include <stdio.h>

int main() {
    int nbr;
    printf("entrer un entier:");
    scanf("%d", &nbr);
    while (nbr!= 0) {
        printf("%d", nbr % 10);
        nbr/=10;
    }
    return 0;
}
