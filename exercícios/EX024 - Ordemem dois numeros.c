#import <stdio.h>
#include <time.h>  // inclusão da biblioteca time
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  int n1, n2;
  printf("<<< EX024 - Ordemem dois números >>>\n");
  printf("Diga-me dois números e eu colocarei\nos dois em ordem cascente.\n");
  printf("\nPrimeiro número: ");
  fflush(stdin);
  scanf("%i", &n1);
  printf("Segundo número: ");
  fflush(stdin);
  scanf("%i", &n2);

  if(n1>n2) printf("Os números em ordem são %i e %i ",n2, n1);
   else if (n1<n2) printf("Os números em ordem são %i e %i ",n1,n2);
   else if (n1==n2) printf("Os números %i e %i são igual",n1,n2);
}
