#import <stdio.h>
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  int n1, n2;
  char op;
  printf("<<< EX028 - Super Calculadora >>>\n");
  printf("valor 1 = ");
  scanf("%i", &n1);
  fflush(stdin);
  printf("valor 2 = ");
  scanf("%i", &n2);
  fflush(stdin);
  printf("======================\n");
  printf("+         Adi��o     \n");
  printf("-         Subtra��o    \n");
  printf("*         Multiplica��o\n");
  printf("/         Divis�o      \n");
  printf("======================\n");
  printf("Digite  sua op��o => ");
  scanf("%c", &op);

  printf("---------------------------------------------\n");
  switch (op) {

  case '+':
        printf("O resultado de %i + %i � igual a %i.",n1,n2,n1+n2);
        break;
  case '-':
        printf("O resultado de %i - %i � igual a %i.",n1,n2, n1-n2);
        break;
  case '*':
        printf("O resultado de %i x %i � igual a %i.",n1,n2, n1*n2);
        break;
  case '/':
        printf("O resultado de %i / %i � igual a %.2f.",n1,n2,(float)n1/n2);
        break;
  default:
         printf("N�o foi poss�vel fazer a opera��o. Tente novamente.");
         break;
  }
  printf("\n---------------------------------------------\n");
  printf("VOLTE SEMPRE\n");
  system("PAUSE");
}
