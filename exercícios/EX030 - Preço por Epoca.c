#import <stdio.h>
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  float n1;
  int op;
  printf("<<< EX030 - Preço por Época >>>\n");
  printf("  digite o preço de um produto R$");
  scanf("%f", &n1);
  printf("          ESCOLHA UM PERÍODO\n");
  printf("          ======================\n");
  printf("          1         Carnaval [+10]\n");
  printf("          2         Férias Escolares [+20]\n");
  printf("          3         Dia das Crianças [+5]\n");
  printf("          4         Black Friday [-30]\n");
  printf("          5         Natal [-5]\n");
  printf("          ======================\n");
  printf("          Digite  sua opção => ");
  scanf("%i", &op);

  printf("\n---------------------------------------------\n");
  switch (op) {

  case 1:
        printf("Na época de CARNAVAL, o preço do produto vai para R$%.2f.",n1*1.1);
        break;
  case 2:
        printf("Na época de FÉRIAS ESCOLARES, o preço do produto vai para R$%.2f.",n1*1.2);
        break;
  case 3:
        printf("Na época de DIA DAS CRIANÇAS, o preço do produto vai para R$%.2f.",n1*1.05);
        break;
  case 4:
        printf("Na época de BLACK FRIDAY, o preço do produto vai para R$%.2f.",n1*0.7);
        break;
  case 5:
        printf("Na época de NATAL, o preço do produto vai para R$%.2f.",n1*0.95);
        break;
  default:
         printf("Em épocas assim, mantenha o preço do produto em R$%.2f",n1);
         break;
  }
  printf("\n---------------------------------------------\n");
  printf("VOLTE SEMPRE\n");
  system("PAUSE");
}
