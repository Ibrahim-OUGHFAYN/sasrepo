#include <stdio.h>
int length_n(int num)
{
    int c = 0;
    if(num == 0) return 1;
    while (num != 0)
    {
        c++;
        num = num / 10;
    }
    return c;
}
int main()
{
    int GSI;
    int ID_G;
    int Code_ed;
    int Numero_article;
    int chiffre_c;
    int s;
    while (1)
    {
        printf("Veuillez Saisir l'ISBN Format(978-0-393-97950-3) : ");
        scanf("%d-%d-%d-%d-%d", &GSI, &ID_G, &Code_ed, &Numero_article, &chiffre_c);
        s=length_n(GSI) + length_n(ID_G) + length_n(Code_ed) + length_n(Numero_article) + length_n(chiffre_c);
        if ((GSI == 978 || GSI == 979) && s!=13 )
            break;
        printf("le gsi doit etre 978 OU 979 ou le nobre de chifre doit etre 13 \n");
    }
    
    printf("Prefixe GS1 : %d\n", GSI);
    printf("Identifiant de groupe : %d\n", ID_G);
    printf("Code de l editeur: %d\n", Code_ed);
    printf("Numero d article : %d\n", Numero_article);
    printf("Chiffre de controle %d\n:", chiffre_c);

    return 0;
}