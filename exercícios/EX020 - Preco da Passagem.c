#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    float val, km;

    printf("<<< EX020 - Pre�o de Passagem >>>\n");
    printf("\n======= TABELA DE PRE�O =======\n");
    printf("Viagens at� 200 km       R$0.50/km.\n");
    printf("A partir de 200 km       R$0.35/km.\n");
    printf("-------------------------------\n");
    printf("Dist�ncia total da viagem, em km: ");
    scanf("%f", &km);
    if (km<=200){
        printf("Uma viagem de %.1f km vai custar R$0,50/km.",km);
        printf("\nValor Toral: R$%.2f", km*0.50);
    } else{
        printf("Uma viagem de %.1f km vai custar R$0,35/km.", km);
        printf("\nValor Total: R$%.2f", km*0.35);
    }
    printf("\n-------------------------------\n");
}
