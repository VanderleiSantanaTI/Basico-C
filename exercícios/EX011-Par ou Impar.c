#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int num;
    printf("\n<<< EX011 - Par ou �mpar >>>\n");
    printf("\nDigite um n�mero qualquer: ");
    scanf("%i", &num);
    printf("\nO n�mero que voc� digitou � %s\n", (num%2==0)?"PAR":"�MPAR");
}
