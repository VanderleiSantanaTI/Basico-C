#import <stdio.h>
#import <locale.h>
#import <time.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    time_t t;
    float val;
    int h_atual, h_filme;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    h_atual = data->tm_hour;
    printf("<<< EX022 - Dá pra ver o filme? >>>\n");
    printf("Horário do filme : ");
    scanf("%i", &h_filme);
    printf("\n============== CINEMA ESTUDONAUTA =============\n");
    printf("HORÁRIO DO FILME: %i h - PREÇO DO INGRESSO: R$20", h_filme);
    printf("\n------------------------------------------------\n");
    printf("Qanto dinheiro você tem? R$");
    scanf("%f", &val);
    if (val>=20 && h_atual<=h_filme){
        printf("Agora são %i horas\n", h_atual);
        printf("Você consegue comprar o engresso!\n");
    } else {
        printf("Infelismente não é possível comprar o ingresso!\n");
    }
    system("PAUSE");
}
