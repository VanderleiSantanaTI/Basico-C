#import <stdio.h>
#include <time.h>  // inclus�o da biblioteca time
#import <locale.h>
void main() {
    setlocale(LC_ALL, "portuguese");
    char est[3];
    printf("<<< EX026 - Qual � seu Estado? >>>\n");
    printf("\nEm que estado do Brasil voc� nasceu? ");
    scanf("%s", &est);

    if (strcmp(strupr(est), "RN") == 0)
        printf("Nascendo em RN voc� � POTIGUAR");
    else if (strcmp(est, "RJ") == 0)
        printf("Nascendo em RJ voc� � CARIOCA");
    else if (strcmp(est, "SP") == 0)
        printf("Nascendo em SP voc� � PAULISTA");
    else if (strcmp(est, "MG") == 0)
        printf("Nascendo em MG voc� � MINEIRO");
    else if (strcmp(est, "BA") == 0)
        printf("Nascendo em BA voc� � BAIANO");
    else if (strcmp(est, "RS") == 0)
        printf("Nascendo em RS voc� � GA�CHO");
    else
        printf("Nascendo em %s voc� � natural da tua cidade, mas ainda n�o sei como te chamar!", est);

    return 0;
}
