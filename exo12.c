#include <stdio.h>

int main(void){
	
	int carre[3][3], somme[6], i, j, k;
	int sommeLignes, sommeColonnes, estCarreMagique = 1;
	
	// saisir les elements du carre
	printf("Entrer les elements du carre : \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("carre[%d][%d] = ", i + 1, j + 1);
			scanf("%d", &carre[i][j]);
		}
	}
	
	// afficher le carre
	printf("\n");
	for(i = 0; i < 3; i++){
          for(j = 0; j < 3; j++){
            printf("%d ", carre[i][j]);
          }
          printf("\n");
        }
	
	// calculer et assigner les sommes des lignes dans le tableau somme[]
	for(i = 0; i < 3; i++){
		sommeLignes = 0;
		for(j = 0; j < 3; j++){
			sommeLignes += carre[i][j];
		}
		somme[i] = sommeLignes;
	}
	
	// calculer et assigner les sommes des colonnes dans le tableau somme[]
	for(j = 0; j < 3; j++){
		sommeColonnes = 0;
		for(i = 0; i < 3; i++){
			sommeColonnes += carre[i][j];
		}
		somme[3 + j] = sommeColonnes;
	}
	
	// afficher le tableau somme[] pour assurer que les sommes sont egales ou non
	printf("\nsomme[] = [");
        for(i = 0; i < 6; i++){
        	printf("%d", somme[i]);
        		if(i < 5){
        			printf(", ");
        		}
        }
        printf("]\n");
	
	// assurer que les elements de sommes sont tous egaux
	//compteur = 0;
	for(i = 0; i < 5; i++){
		if(somme[i] != somme[i + 1]){
		        estCarreMagique = 0;
		        break;
		}
	}
	//if(somme[5] == somme[0]){
	  //      compteur++;
	//}
	
	// afficher l'affirmation si le carre est magique ou non 
	if(estCarreMagique == 0){
		printf("Non, ce carre n'est pas magique.\n");
	} else printf("Oui, ce carre est magique.\n");
	return 0;
}
// fini
