#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    float val, des, novo_val;

    printf("<<< EX16 - Consumidor ganha desconto >>>\n");
    printf("\nQual foi o lavor total da compra? R$");
    scanf("%f", &val);
    printf("------------------------------\n");
    printf("Voc� comprou R$%.2f na nossa loja.", val);

    des = val*.1;
    novo_val = val - des;

    if (val > 500 ){
        printf("\n========== ATEN��O ==========\n");
        printf("Por fazer mais de R$500,00 em compras, voc� vai receber R$%.2f de desconto", des);
        printf("\nO valor a ser pago � R$%.2f. ", novo_val);
    }
    printf("\nVolte Sempre!");
    printf("\n------------------------------\n");
   }
