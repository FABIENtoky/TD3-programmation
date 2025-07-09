#include <stdio.h>
#include <stdlib.h>
#define taille 50

int main(){

  int tab1[taille], tab2[taille], i, j, k, n, m, compteur1 = 0, compteur2 = 0, compteur = 0;
  
  // saisir la taille du tableau tab1
  do{
    compteur1++;
    if(compteur1 == 4){
      exit(0);
    }
    printf("Entrer n, la taille du tableau tab1 (compris entre 1 et 50) : ");
    scanf("%d", &n);
    if(n < 1 || n > 50){
      printf("Erreur : dimension trop grande ou negative ! \n");
      if(compteur1 < 3){
        printf("Vous n'avez plus que %d essai(s) ! \n", (3 - compteur1));
      }else printf("Vous etes du genre tetu vous, desole mais vous meritez qu'on vous donne une bonne lecon.\n");
    }
  }while(n < 1 || n > 50);
  
  // saisir les elements du tableau tab1
  printf("Entrer la valeur de chaque element du tableau tab1 : \n");
  for(i = 0; i < n; i++){
    printf("tab1[%d] = ", i);
    scanf("%d", &tab1[i]);
  }
  
  // afficher le tableau tab1
  printf("tab1 = [");
  for(i = 0; i < n; i++){
    printf("%d", tab1[i]);
    if(i < (n - 1)){
      printf(", ");
    }
  }
  printf("]\n");
  
  // saisir la taille du tableau tab2
  do{
    compteur2++;
    if(compteur2 == 4){
      exit(0);
    }
    printf("Entrer m, la taille du tableau tab2 (compris entre 1 et 50) : ");
    scanf("%d", &m);
    if(m < 1 || m > 50){
      printf("Erreur : dimension trop grande ou negative ! \n");
      if(compteur2 < 3){
        printf("Vous n'avez plus que %d essai(s) ! \n", (3 - compteur2));
      }else printf("Vous etes du genre tetu vous, desole mais vous meritez qu'on vous donne une bonne lecon.\n");
    }
  }while(m < 1 || m > 50);
  
  // saisir les elements du tableau tab2
  printf("Entrer la valeur de chaque element du tableau tab2 : \n");
  for(j = 0; j < m; j++){
    printf("tab2[%d] = ", j);
    scanf("%d", &tab2[j]);
  }
  
  // afficher le tableau tab2
  printf("tab2 = [");
  for(j = 0; j < m; j++){
    printf("%d", tab2[j]);
    if(j < (m - 1)){
      printf(", ");
    }
  }
  printf("]\n");
  
  // operation
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      if(tab1[i] == tab2[j]){
        compteur++;
      }
    }
  }
  
  do{
  for(j = 0; j < m; j++){
    for(i = 0; i < n; i++){
      if(tab1[i] == tab2[j]){
        for(k = i; k < (n - 1); k++){
          tab1[k] = tab1[k + 1];
        }
        n--;
      }
    }
  }
  compteur--;
  }while(compteur != 0);
  
  //afficher le tableau final
  printf("\ntab1 = [");
  for(i = 0; i < n; i++){
    printf("%d", tab1[i]);
    if(i < (n - 1)){
      printf(", ");
    }
  }
  printf("]\n");
  return 0;
}
