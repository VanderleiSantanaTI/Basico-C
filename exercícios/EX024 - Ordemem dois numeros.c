#import <stdio.h>
#include <time.h>  // inclus�o da biblioteca time
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  int n1, n2;
  printf("<<< EX024 - Ordemem dois n�meros >>>\n");
  printf("Diga-me dois n�meros e eu colocarei\nos dois em ordem cascente.\n");
  printf("\nPrimeiro n�mero: ");
  fflush(stdin);
  scanf("%i", &n1);
  printf("Segundo n�mero: ");
  fflush(stdin);
  scanf("%i", &n2);

  if(n1>n2) printf("Os n�meros em ordem s�o %i e %i ",n2, n1);
   else if (n1<n2) printf("Os n�meros em ordem s�o %i e %i ",n1,n2);
   else if (n1==n2) printf("Os n�meros %i e %i s�o igual",n1,n2);
}
