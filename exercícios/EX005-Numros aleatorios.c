#import <stdio.h>
#import <locale.h>
#import <time.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int n = rand() % 5+1; //soma mais um para escolher de 0 a 5
    int n2;
    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual � o numero palpite? ");
    scanf("%d", &n2);
    printf("\nEu pensei no n�mero %d e voc� pensou no %d\n", n, n2);

    if (n == n2){
        printf("Voc� acertou o palpite\n");
    }else{
        printf("Voc� errou o palpite\n");
    }
}
