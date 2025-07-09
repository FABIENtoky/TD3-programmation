#include <stdio.h>
#include <string.h>
#define taille 200

int main(){
	
	char phrase[taille], phraseCryptee[taille];
	int i, j, longueur;

	printf("Entrez la phrase cryptee : ");
	fgets(phraseCryptee, sizeof(phraseCryptee), stdin);

	longueur = strlen(phraseCryptee);
	j = 0;
	for(i = 0; i < (longueur - 1); i++){
		if ((phraseCryptee[i] == 'I') && (phraseCryptee[i + 1] == 'T')){
			i = i + 2;
			phrase[j] = phraseCryptee[i];
			j++;
		} else {
			phrase[j] = phraseCryptee[i];
			j++;
		}
	}

	phrase[j] = '\0';

	printf("%s.\n", phrase);
	return 0;
}
