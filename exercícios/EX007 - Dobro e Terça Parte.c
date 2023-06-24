#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    int num, dob;
    float ter;
    printf("\n<<< EX007 - Dobro e Terça Parte >>>\n");
    printf("\nDigite um número: ");
    scanf("%i", &num);

    dob = num*2;
    ter = (float)num/3;

    printf("\nAnalisando o número %d, seu dobro é %d e sua terça parte é %.2f.\n",num,dob,ter);
}
