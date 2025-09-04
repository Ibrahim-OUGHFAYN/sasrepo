#include <stdio.h>
int main()
{
    int note;
    printf("entrer un note");
    scanf("%d", &note);

    if (note < 0 || note > 100)
    {
        printf("la notre doit etre enter 0 et 100");
    }
    else
    {

        switch (note / 10)
        {
        case 9:
            printf("\nNote littérale : A");
            break;
        case 8:
            printf("\nNote littérale : B");
            break;
        case 7:
            printf("\nNote littérale : c");
            break;
        case 6:
            printf("\nNote littérale : D");
            break;
        default:
            printf("\nNote littérale : F");
            break;
        }
    }
}