#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int num;
    printf("<<< EX021 - Inverso ou oposto >>>\n");
    printf("Digit um n�mero: ");
    scanf("%i", &num);
    if (num<0){
        printf("O oposto de %i � igual a %i\n", num, num*(-1));
    } else{
        printf("O inverso de %i � igual a %.2f\n", num,(float)1/num);
    }
     system("PAUSE");
}
