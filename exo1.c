#include<stdio.h>
#include<stdlib.h>
#define taille 50

int main(){
  
  int T[taille], n, i, j, compteur, temp;
  
  compteur = 0;
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
    printf("T[%d] = ", i);
    scanf("%d", &T[i]);
  }
  
  // operation
  for(i = 0; i < n; i++){
    for(j = (i + 1); j < n; j++){
      if(T[j] % 2 == 0){
        temp = T[i];
        T[i] = T[j];
        T[j] = temp;
      }
    }
  }
  
  // afficher le tableau
  printf("T = [");
  for(i = 0; i < n; i++){
    printf("%d", T[i]);
    if(i < (n - 1)){
      printf(", ");
    }
  }
  printf("]\n");
  
  return 0;
}
