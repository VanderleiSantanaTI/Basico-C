#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    float n1, n2, m;

    printf("<<< EX15 - Bons alunos  merecem parabéns >>>\n");
    printf("\nDigite a sua primeira nota: ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    fflush(stdin);
    m = (n1 + n2)/2;
    printf("------------------------------\n");
    if (m >= 7 ){
        printf("MEUS PARABÉNS! ");
    }
    printf("A sua média final foi %.2f", m);
    printf("\n------------------------------\n");
   }
