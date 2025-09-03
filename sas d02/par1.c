#include <stdio.h>
int main()
{
    int p1,p2,p3,p4,p5;
    printf("Enter ISBN number: ");
    scanf("%d-%d-%d-%d-%d", &p1, &p2, &p3, &p4,&p5);
    while(p1!=978 && p1!=979)
    {
        printf("Invalid Préfixe. entrer : ");
        scanf("%d-%d-%d-%d-%d", &p1, &p2, &p3, &p4,&p5);
    }
    printf("Préfixe GS1 : %d\n", p1);
    printf("Identifiant de groupe : %d\n", p2);
    printf("Code de l'éditeur : %d\n", p3);
    printf("Numéro d'article : %d\n", p4);
    printf("Chiffre de contrôle : %d\n", p5);
    return 0;
}