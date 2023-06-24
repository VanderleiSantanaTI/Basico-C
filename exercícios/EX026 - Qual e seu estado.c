#import <stdio.h>
#include <time.h>  // inclusão da biblioteca time
#import <locale.h>
void main() {
    setlocale(LC_ALL, "portuguese");
    char est[3];
    printf("<<< EX026 - Qual é seu Estado? >>>\n");
    printf("\nEm que estado do Brasil você nasceu? ");
    scanf("%s", &est);

    if (strcmp(strupr(est), "RN") == 0)
        printf("Nascendo em RN você é POTIGUAR");
    else if (strcmp(est, "RJ") == 0)
        printf("Nascendo em RJ você é CARIOCA");
    else if (strcmp(est, "SP") == 0)
        printf("Nascendo em SP você é PAULISTA");
    else if (strcmp(est, "MG") == 0)
        printf("Nascendo em MG você é MINEIRO");
    else if (strcmp(est, "BA") == 0)
        printf("Nascendo em BA você é BAIANO");
    else if (strcmp(est, "RS") == 0)
        printf("Nascendo em RS você é GAÚCHO");
    else
        printf("Nascendo em %s você é natural da tua cidade, mas ainda não sei como te chamar!", est);

    return 0;
}
