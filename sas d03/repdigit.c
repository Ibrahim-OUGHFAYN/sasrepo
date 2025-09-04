#include <stdio.h>
#include <stdbool.h>

bool elem_exist(int tab[10],int n){
    for(int i=0;i<10;i++){
       if(n==tab[i]){
          return true;
       }
    }
    return false;
}

int main()
{
  int tab[10],dejaRepetee[10];
  printf("entrer les elements du tableau: ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &tab[i]);
  }

  int indexForDejaRepeteeTableau=0;
  printf("Chiffre(s) repete(s) :");
  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (tab[i] == tab[j] && !elem_exist(dejaRepetee,tab[i]))
      {
        printf("%d ",tab[i]);
        dejaRepetee[indexForDejaRepeteeTableau]=tab[i];
        indexForDejaRepeteeTableau++;
      }
    }
  }
  return 0;
}