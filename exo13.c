#include <stdio.h>
#define taille 50

int main(){

  int n, i, j, tab[taille][taille];
  printf("Veillez entrer le degre n : ");
  scanf("%d", &n);
  
  //faconner le triangle
  for(i = 0; i <= n; i++){
    tab[i][0] = 1;
    tab[i][i] = 1;
    for(j = 1; j < i; j++){
      tab[i][j] = tab[i - 1][j - 1] + tab[i - 1][j];
    }
  }
  
  //affichage
  for(i = 0; i <= n; i++){
    printf("%d : ", i);
    for(j = 0; j <= i; j++){
      printf("%d ", tab[i][j]);
    }
    printf("\n");
  }
  return 0;
}
