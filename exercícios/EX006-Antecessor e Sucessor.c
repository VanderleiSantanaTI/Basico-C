#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("\n<<< EX006 - Antecesso e Sucesso >>>\n");
    printf("\nDigite um número: ");
    scanf("%d", &num);

    int ant = num - 1;
    int suc = num + 1;

    printf("\nAnalisando o número %d, seu antecessor é %d e seu sucessor é %d.\n",num,ant,suc);
}
