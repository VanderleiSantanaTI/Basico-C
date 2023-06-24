#import <stdio.h>
#import <locale.h>
#include <time.h>  // inclusão da biblioteca time
void main(){
   setlocale(LC_ALL, "portuguese");
   time_t t;  // criação da variável t
   time(&t);  // ativação da variável t
   struct tm*data; // criação da estrutura data apontando p/ tm
   data = localtime(&t); //local time
   int idade, nasc, falta,a, pas;
   a = data->tm_year+1900;


   printf("<<< EX25 - EX25 - Serviço Militar 2 >>>\n");
   printf("\nAtualmente estamos no ano de %i.",a);
   printf("\nEm que ano você nasceu? ");
   scanf("%i", &nasc);

   idade = a - nasc;
   falta = 18-idade;
   pas = idade-18;

   printf("------------------------------\n");
   printf("Tua idade atual é %i anos", idade);

   if(idade>18) printf("\nSeu alistamento foi em %i. Já se passaram %i anos. ",a-pas,pas);
   else if (idade<18) printf("\nSeu alistamento será %i. Ainda faltam %i anos.",a+falta,falta);
   else if (idade==18) printf("\nVocê  comleta 18 anos exatamente em %i. Vá se alistar.",a);
   printf("\n------------------------------\n");

   system("PAUSE");
}
