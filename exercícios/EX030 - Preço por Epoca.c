#import <stdio.h>
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  float n1;
  int op;
  printf("<<< EX030 - Pre�o por �poca >>>\n");
  printf("  digite o pre�o de um produto R$");
  scanf("%f", &n1);
  printf("          ESCOLHA UM PER�ODO\n");
  printf("          ======================\n");
  printf("          1         Carnaval [+10]\n");
  printf("          2         F�rias Escolares [+20]\n");
  printf("          3         Dia das Crian�as [+5]\n");
  printf("          4         Black Friday [-30]\n");
  printf("          5         Natal [-5]\n");
  printf("          ======================\n");
  printf("          Digite  sua op��o => ");
  scanf("%i", &op);

  printf("\n---------------------------------------------\n");
  switch (op) {

  case 1:
        printf("Na �poca de CARNAVAL, o pre�o do produto vai para R$%.2f.",n1*1.1);
        break;
  case 2:
        printf("Na �poca de F�RIAS ESCOLARES, o pre�o do produto vai para R$%.2f.",n1*1.2);
        break;
  case 3:
        printf("Na �poca de DIA DAS CRIAN�AS, o pre�o do produto vai para R$%.2f.",n1*1.05);
        break;
  case 4:
        printf("Na �poca de BLACK FRIDAY, o pre�o do produto vai para R$%.2f.",n1*0.7);
        break;
  case 5:
        printf("Na �poca de NATAL, o pre�o do produto vai para R$%.2f.",n1*0.95);
        break;
  default:
         printf("Em �pocas assim, mantenha o pre�o do produto em R$%.2f",n1);
         break;
  }
  printf("\n---------------------------------------------\n");
  printf("VOLTE SEMPRE\n");
  system("PAUSE");
}
