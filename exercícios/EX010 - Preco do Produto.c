#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    char Produto[20];
    float prec, desc;
    printf("\n<<< EX010 - Preço do produto >>>\n");
    printf("\nProduto: ");
    gets(Produto);
    printf("Preço do(a) %s: R$",Produto);
    scanf("%f", &prec);
    printf("Desconto: (%%) ");
    scanf("%f", &desc);

    float novopreco = prec - (prec*desc) / 100;
    printf("O produto %s custava R$%.2f, mas com %.2f%% de deconto, passa a custar  R$%.2f.\n",Produto,prec,desc,novopreco);
}
