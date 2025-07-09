#include <stdio.h>
#include <stdlib.h>
#define taille 50

int main(){
  
  int T[taille], n, i, compteur, cible;
  float somme = 0, moyenne, dif, prec;
  
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
    somme = somme + T[i]; // calculer la moyenne des elements du tableau
  }
  moyenne = somme / n;
  printf("La moyenne des elements du tableau est %.2f.\n", moyenne);
  
  cible = T[0]; // considerer T[0] comme etant l'element le plus proche de la moyenne
  for(i = 1; i < n; i++){ // parcourir le tableau
    dif = T[i] - moyenne; // calculer la difference entre T[1] et la moyenne
    prec = cible - moyenne; // calculer la difference entre T[0] et la moyenne
    if(dif < 0) // si la valeur de (T[1]-moyenne) negatif
      dif = (-1) * dif; // multiplier dif par (-1)
    if(prec < 0) // si la valeur de (T[0]-moyenne) negatif
      prec = (-1) * prec; // multiplier prec par (-1)
    if(dif < prec) // comparer dif et prec, si (T[1]-moyenne) < (T[0]-moyenne)
      cible = T[i]; // affecter a cible la valeur de T[1]
    // sinon, cible garde la valeur de T[0]
  } // ainsi de suite
  
  printf("L'element le plus proche de la moyenne est %d.\n", cible);
  return 0;
}
