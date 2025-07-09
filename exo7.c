#include <stdio.h>
#include <string.h>

int main(){
  
  int compteurA = 0, compteurES = 0;
  char caractereActuel, caracterePrecedent;

  while(caractereActuel != '.'){
    printf("Entrez un caractere : ");
    scanf(" %c", &caractereActuel);
    if(caractereActuel == 'a'){
      compteurA++;
    } else if((caractereActuel == 's') && (caracterePrecedent == 'e')){
      compteurES++;
    } else {
      caracterePrecedent = caractereActuel;
    }
  }

  printf("Le nombre d'apparition du caractere 'a' est %d.\n", compteurA);
  printf("Et le nombre d'apparition des caracteres 'es' est %d.\n", compteurES);
  return 0;
}