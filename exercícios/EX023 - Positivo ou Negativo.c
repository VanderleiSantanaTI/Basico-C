#import <stdio.h>
#include <time.h>  // inclusão da biblioteca time
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  int n1, n2;
   printf("<<< EX024 - Ordemem dois números >>>\n");
   printf("Diga-me um números e eu te direi se\nele é POSITIVO NEGATIVO ou NULO.\n");
  printf("\nDigite um número: ");
  fflush(stdin);
  scanf("%i", &n1);

  if(n1>0) printf("O volor %i é POSITIVO ",n1);
   else if (n1 < 0) printf("O %i é NEGATIVO",n1);
   else if (n1==0) printf("O valo %i é NULO", n1);
}
