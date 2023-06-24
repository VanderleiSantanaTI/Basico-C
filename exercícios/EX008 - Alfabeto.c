#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    char L;
    printf("\n<<< EX008 - Alfabeto >>>\n");
    printf("\nDigite uma letra: ");
    L = getchar();
    char ant = L - 1;
    char dep = L + 1;
    printf("Antes da leta %c temos a letra %c. Depois temos a letra %c.\n", L, ant, dep);
}
