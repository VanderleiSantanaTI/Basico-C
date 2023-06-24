#import <stdio.h>
#import <locale.h>
void main(){
setlocale(LC_ALL, "portuguese");
int n, d, dr, df;

printf("<<< EX014 - Operadores de Deslocamento >>>\n");
printf("\nDigite um número: ");
scanf("%i",&n);
printf("Digite o deslocamento: ");
scanf("%i",&d);

dr = n >> d;
df = n << d;

printf("------ OPERAÇÕES SHIFT ------");
printf("\nCalculando %i >> %i é igual a %i.\n", n, d, dr);
printf("Calculando %i << %i é igual a %i.\n", n, d, df);

}
