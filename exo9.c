#include <stdio.h>
#include <string.h>
#define taille 50

int main(){
  
  char chaine[taille];
  int longueur, moitie, i, estCarre;
  
  printf("Entrer une chaine de caracteres : ");
  scanf("%s", chaine);
  
  longueur = strlen(chaine);
  printf("La longueur est : %d\n", longueur);
  
  if(longueur % 2 != 0){
    printf("La chaine '%s' n'est pas un carre.\n", chaine);
  } else {
    moitie = longueur / 2;
    for(i = 0; i < moitie; i++){
      if(chaine[i] == chaine[moitie + i]){
        estCarre = 1;
      } else estCarre = 0;
    }
  }
  
  if(estCarre == 1){
    printf("La chaine '%s' est un carre.\n", chaine);
  } else printf("La chaine '%s' n'est pas un carre.\n", chaine);
  return 0;
}
