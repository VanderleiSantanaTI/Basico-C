#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int ano;
    printf("<<< EX019 - Ano Bissexto >>>\n");
    printf("\nDigite um ano qualquer: ");
    scanf("%i", &ano);
    if (ano%4==0 && ano%100!=0 || ano%400==0){
        printf("O ano %i É BISSEXTO.\n", ano);
    } else {
    printf("O ano %i NÃO É BISSEXTO.\n", ano);
    }
    system("PAUSE");
}
