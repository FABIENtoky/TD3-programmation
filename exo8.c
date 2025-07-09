#include <stdio.h>
#include <string.h>
#define taille 50

int main(){

    char chaine[taille], bigramme[3];
    int longueur, compteur, i = 0;

    printf("Entrer la chaine de caracteres : ");
    scanf("%s", chaine);
    
    printf("Entrer le bigramme : ");
    for(i = 0; i < 3; i++){
        scanf("%c", &bigramme[i]);
        if(bigramme[i] == '\n'){
            bigramme[i] = '\0';
        }
    }
    //printf("%c et %c", bigramme[1], bigramme[2]);
    longueur = strlen(chaine);
    i = 0;
    compteur = 0;
    do{
        if((chaine[i] == bigramme[1]) && (chaine[i + 1] == bigramme[2])){
            compteur++;
        }
        i++;
    }while(i < (longueur - 1));

    printf("Le nombre d'occurrences du bigramme est %d.\n", compteur);
    return 0;
}