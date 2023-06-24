#import <stdio.h>
#include <time.h>  // inclusão da biblioteca time
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  int n1, n2, n3;
  printf("<<< EX027 - Três valores em ordem >>>\n");
  printf("Diga-me três números e eu colocarei\nem ordem pra você.\n");
  printf("\nPrimeiro número: ");
  fflush(stdin);
  scanf("%i", &n1);
  printf("Segundo número: ");
  fflush(stdin);
  scanf("%i", &n2);
  printf("terceiro número: ");
  fflush(stdin);
  scanf("%i", &n3);
  printf("------------------------------\n");
  if(n1>n2 && n2>n3) printf("Maior: %i\nINTERMEDIÁRIO: %i\nMENOR: %i ",n1, n2,n3);
   else if (n1>n3 && n3>n2) printf("Maior: %i\nINTERMEDIÁRIO: %i\nMENOR: %i ",n1, n3,n2);
   else if (n2>n1 && n1>n3) printf("Maior: %i\nINTERMEDIÁRIO: %i\nMENOR: %i ",n2, n1,n3);
   else if (n2>n3 && n3>n1) printf("Maior: %i\nINTERMEDIÁRIO: %i\nMENOR: %i ",n2, n3,n1);
   else if (n3>n1 && n1>n2) printf("Maior: %i\nINTERMEDIÁRIO: %i\nMENOR: %i ",n3, n1,n2);
   else if (n3>n2 && n2>n1) printf("Maior: %i\nINTERMEDIÁRIO: %i\nMENOR: %i ",n3, n2,n1);


}
