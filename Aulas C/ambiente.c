#import <stdio.h>
#include <time.h>  // inclusão da biblioteca time
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  int n1;
  printf("Digite um valor: ");
  fflush(stdin);
  scanf("%i", &n1);

  switch (n1) {

  case 1:
        printf("um");
        break;
  case 2:
        printf("dois");
        break;
  case 3:
        printf("três");
        break;
  case 4:
        printf("quatro");
        break;
  default:
         printf("Erro!");
         break;
  }
  printf("\nACABOU!");
}




