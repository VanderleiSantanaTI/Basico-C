#import <stdio.h>
#import <locale.h>
void main(){
setlocale(LC_ALL, "portuguese");
int n, d, dr, df;

printf("<<< EX014 - Operadores de Deslocamento >>>\n");
printf("\nDigite um n�mero: ");
scanf("%i",&n);
printf("Digite o deslocamento: ");
scanf("%i",&d);

dr = n >> d;
df = n << d;

printf("------ OPERA��ES SHIFT ------");
printf("\nCalculando %i >> %i � igual a %i.\n", n, d, dr);
printf("Calculando %i << %i � igual a %i.\n", n, d, df);

}
