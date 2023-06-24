#import <stdio.h>
#import <locale.h>
void main(){
  setlocale(LC_ALL, "portuguese");
  float n1;
  int op;
  printf("<<< EX029 - Seu peso nos Planetas v1.0 >>>\n");
  printf("  Seu peso Terra (kg) = ");
  scanf("%f", &n1);
  printf("          ESCOLHA UM PLANETA\n");
  printf("          ======================\n");
  printf("          1         Mercúrio\n");
  printf("          2         Vênus\n");
  printf("          3         Marte\n");
  printf("          4         Júpiter\n");
  printf("          5         Saturno\n");
  printf("          6         Urano\n");
  printf("          ======================\n");
  printf("          Digite  sua opção => ");
  scanf("%i", &op);

  printf("\n---------------------------------------------\n");
  switch (op) {

  case 1:
        printf("NO planeta Mercúrio seupeso seria %.2f kg.",n1*0.37);
        break;
  case 2:
        printf("NO planeta Vênus seupeso seria %.2f kg.",n1*0.88);
        break;
  case 3:
        printf("NO planeta Marte seupeso seria %.2f kg.",n1*0.38);
        break;
  case 4:
        printf("NO planeta Júpiter seupeso seria %.2f kg.",n1*2.64);
        break;
  case 5:
        printf("NO planeta Saturno seupeso seria %.2f kg.",n1*1.15);
        break;
  case 6:
        printf("NO planeta Urano seupeso seria %.2f kg.",n1*1.18);
        break;
  default:
         printf("Seu peso não pode ser calculado para outros planetas. Tente novamente.");
         break;
  }
  printf("\n---------------------------------------------\n");
  printf("VOLTE SEMPRE\n");
  system("PAUSE");
}
