#import <stdio.h>
#include <time.h>  // inclus�o da biblioteca time
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  int n1, n2, n3;
  printf("<<< EX027 - Tr�s valores em ordem >>>\n");
  printf("Diga-me tr�s n�meros e eu colocarei\nem ordem pra voc�.\n");
  printf("\nPrimeiro n�mero: ");
  fflush(stdin);
  scanf("%i", &n1);
  printf("Segundo n�mero: ");
  fflush(stdin);
  scanf("%i", &n2);
  printf("terceiro n�mero: ");
  fflush(stdin);
  scanf("%i", &n3);
  printf("------------------------------\n");
  if(n1>n2 && n2>n3) printf("Maior: %i\nINTERMEDI�RIO: %i\nMENOR: %i ",n1, n2,n3);
   else if (n1>n3 && n3>n2) printf("Maior: %i\nINTERMEDI�RIO: %i\nMENOR: %i ",n1, n3,n2);
   else if (n2>n1 && n1>n3) printf("Maior: %i\nINTERMEDI�RIO: %i\nMENOR: %i ",n2, n1,n3);
   else if (n2>n3 && n3>n1) printf("Maior: %i\nINTERMEDI�RIO: %i\nMENOR: %i ",n2, n3,n1);
   else if (n3>n1 && n1>n2) printf("Maior: %i\nINTERMEDI�RIO: %i\nMENOR: %i ",n3, n1,n2);
   else if (n3>n2 && n2>n1) printf("Maior: %i\nINTERMEDI�RIO: %i\nMENOR: %i ",n3, n2,n1);


}
