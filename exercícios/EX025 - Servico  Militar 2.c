#import <stdio.h>
#import <locale.h>
#include <time.h>  // inclus�o da biblioteca time
void main(){
   setlocale(LC_ALL, "portuguese");
   time_t t;  // cria��o da vari�vel t
   time(&t);  // ativa��o da vari�vel t
   struct tm*data; // cria��o da estrutura data apontando p/ tm
   data = localtime(&t); //local time
   int idade, nasc, falta,a, pas;
   a = data->tm_year+1900;


   printf("<<< EX25 - EX25 - Servi�o Militar 2 >>>\n");
   printf("\nAtualmente estamos no ano de %i.",a);
   printf("\nEm que ano voc� nasceu? ");
   scanf("%i", &nasc);

   idade = a - nasc;
   falta = 18-idade;
   pas = idade-18;

   printf("------------------------------\n");
   printf("Tua idade atual � %i anos", idade);

   if(idade>18) printf("\nSeu alistamento foi em %i. J� se passaram %i anos. ",a-pas,pas);
   else if (idade<18) printf("\nSeu alistamento ser� %i. Ainda faltam %i anos.",a+falta,falta);
   else if (idade==18) printf("\nVoc�  comleta 18 anos exatamente em %i. V� se alistar.",a);
   printf("\n------------------------------\n");

   system("PAUSE");
}
