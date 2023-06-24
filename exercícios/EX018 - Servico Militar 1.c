#import <stdio.h>
#import <locale.h>
#include <time.h>  // inclusão da biblioteca time
void main(){
   setlocale(LC_ALL, "portuguese");
   time_t t;  // criação da variável t
   time(&t);  // ativação da variável t
   struct tm*data; // criação da estrutura data apontando p/ tm
   data = localtime(&t); //local time
   int idade, nasc;


   int a = data->tm_year+1900;


   printf("<<< EX18 - EX18 - Serviço Militar >>>\n");
   printf("\nAtualmente estamos no ano de %i.",a);
   printf("\nEm que ano você nasceu? ");
   scanf("%i", &nasc);
   idade = a - nasc;
   printf("------------------------------\n");
   printf("Tua idade atual é %i anos", idade);

   if(idade >= 18){
      printf("\nJá fez 18 anos. Espero sinceramente que você tenha se alistado\n");
   } else {
   printf("\nVocê ainda não tem 18 anos. Não pode se alistar\n");
   }

   system("PAUSE");
   }
