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
    printf("<<< EX022 - D� pra ver o filme? >>>\n");
    printf("Hor�rio do filme : ");
    scanf("%i", &h_filme);
    printf("\n============== CINEMA ESTUDONAUTA =============\n");
    printf("HOR�RIO DO FILME: %i h - PRE�O DO INGRESSO: R$20", h_filme);
    printf("\n------------------------------------------------\n");
    printf("Qanto dinheiro voc� tem? R$");
    scanf("%f", &val);
    if (val>=20 && h_atual<=h_filme){
        printf("Agora s�o %i horas\n", h_atual);
        printf("Voc� consegue comprar o engresso!\n");
    } else {
        printf("Infelismente n�o � poss�vel comprar o ingresso!\n");
    }
    system("PAUSE");
}
