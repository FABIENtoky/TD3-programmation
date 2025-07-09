#include <stdio.h>
#include <stdlib.h>
#define taille 50

int main(){

  int tab[taille], i, n, x, position, compteur = 0;
  
  // saisir la tailledu tableau
  do{
    compteur++;
    if(compteur == 4){
      exit(0);
    }
    printf("Entrer n, la taille du tableau(compris entre 1 et 50) : ");
    scanf("%d", &n);
    if(n < 1 || n > 50){
      printf("Erreur : dimension trop grande ou negative ! \n");
      if(compteur < 3){
        printf("Vous n'avez plus que %d essai(s) ! \n", (3 - compteur));
      }else printf("Vous etes du genre tetu vous, desole mais vous meritez qu'on vous donne une bonne lecon.\n");
    }
  }while(n < 1 || n > 50);
  
  // saisir les elements du tableau
  printf("Entrer la valeur de chaque element du tableau : \n");
  for(i = 0; i < n; i++){
    printf("tab[%d] = ", i + 1);
    scanf("%d", &tab[i]);
  }
  
  // afficher le tableau initial
  printf("tab = [");
  for(i = 0; i < n; i++){
    printf("%d", tab[i]);
    if(i < (n - 1)){
      printf(", ");
    }
  }
  printf("]\n");
  
  // operation
  printf("Entrer l'element que vous voulez inserez : ");
  scanf("%d", &x);
  
  printf("Dans quelle position voulez vous inserez l'element %d ? ", x);
  scanf("%d", &position);
  
  n++;
  for(i = (n - 1); i >= (position - 1); i--){
    tab[i + 1] = tab[i];
  }
  tab[position - 1] = x;
  
  // afficher le tableau final
  printf("tab = [");
  for(i = 0; i < n; i++){
    printf("%d", tab[i]);
    if(i < (n - 1)){
      printf(", ");
    }
  }
  printf("]\n");
  return 0;
}

