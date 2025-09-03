#include <stdio.h>

int main(void)
{
    float montant;
    printf("entrer le montant en $: ");
    scanf("%f", &montant);
    float montant_to_add=montant*0.05;
    printf("Le montant total est: %f\n", montant + montant_to_add);
    return 0;
}