#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int num;
    printf("\n<<< EX011 - Par ou Ímpar >>>\n");
    printf("\nDigite um número qualquer: ");
    scanf("%i", &num);
    printf("\nO número que você digitou é %s\n", (num%2==0)?"PAR":"ÍMPAR");
}
