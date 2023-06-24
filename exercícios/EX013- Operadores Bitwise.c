#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL,"portuguese");
    int n1, n2, r1, r2, r3;
    printf("\n<<< EX013 - Operadores Bitwise >>>\n");
    printf("\nDigite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    r1 = n1 & n2;
    r2 = n1 | n2;
    r3 = n1 ^ n2;
    printf("------ OPERACOES BITWISE ------\n");
    printf("Calculando %i & %i é igual a %i",n1, n2, r1);
    printf("\nCalculando %i | %i é igual a %i",n1, n2, r2);
    printf("\nCalculando %i ^ %i é igual a %i\n",n1, n2, r3);
    system("PAUSE");
}
