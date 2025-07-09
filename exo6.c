#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define taille 50

int main(){
  
  char chaine[taille];
  int debut, fin;
  printf("Veuillez entrer la chaine de caracteres : ");
  scanf("%s", chaine);
  
  debut = 0;
  fin = strlen(chaine) - 1;
  
  while((debut < fin) && (chaine[debut] == chaine[fin])){
    debut = debut + 1;
    fin = fin - 1;
  }
  
  if(debut >= fin){
    printf("Oui, %s est un palindrome.\n", chaine);
  } else printf("Non, %s n'est pas un palindrome.\n", chaine);
  return 0;
}
