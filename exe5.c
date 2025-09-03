#include <stdio.h>
int main(){
    int nbr,total;
    printf("donner un nombre: ");
    scanf("%d", &nbr);
    total=3*nbr*nbr*nbr*nbr*nbr+2*nbr*nbr*nbr*nbr-5*nbr*nbr*nbr-nbr*nbr+7*nbr-6;
    printf("le resultat est: %d", total);
    return 0;
}
