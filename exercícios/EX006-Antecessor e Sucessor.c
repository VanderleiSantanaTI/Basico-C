#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("\n<<< EX006 - Antecesso e Sucesso >>>\n");
    printf("\nDigite um n�mero: ");
    scanf("%d", &num);

    int ant = num - 1;
    int suc = num + 1;

    printf("\nAnalisando o n�mero %d, seu antecessor � %d e seu sucessor � %d.\n",num,ant,suc);
}
