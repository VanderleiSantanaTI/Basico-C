#import <stdio.h>
#include <time.h>  // inclus�o da biblioteca time
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  int n1, n2;
   printf("<<< EX024 - Ordemem dois n�meros >>>\n");
   printf("Diga-me um n�meros e eu te direi se\nele � POSITIVO NEGATIVO ou NULO.\n");
  printf("\nDigite um n�mero: ");
  fflush(stdin);
  scanf("%i", &n1);

  if(n1>0) printf("O volor %i � POSITIVO ",n1);
   else if (n1 < 0) printf("O %i � NEGATIVO",n1);
   else if (n1==0) printf("O valo %i � NULO", n1);
}
