#include <stdio.h>
int main(){
    int nbr,total;
    printf("donner un nombre: ");
    scanf("%d", &nbr);
    total=(3*nbr+2)*(nbr–5)*(nbr–1)*(nbr+7)–(6*nbr);
    printf("le resultat est: %d", total);
    return 0;
}
