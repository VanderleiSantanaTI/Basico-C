#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int num, dob;
    float ter;
    printf("\n<<< EX007 - Dobro e Ter�a Parte >>>\n");
    printf("\nDigite um n�mero: ");
    scanf("%i", &num);

    dob = num*2;
    ter = (float)num/3;

    printf("\nAnalisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f.\n",num,dob,ter);
}
