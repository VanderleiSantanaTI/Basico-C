#import <stdio.h>
#import <locale.h>
#include <time.h>  // inclus�o da biblioteca time
void main(){
   setlocale(LC_ALL, "portuguese");
   time_t t;  // cria��o da vari�vel t
   time(&t);  // ativa��o da vari�vel t
   struct tm*data; // cria��o da estrutura data apontando p/ tm
   data = localtime(&t); //local time
   int idade, nasc;


   int a = data->tm_year+1900;


   printf("<<< EX18 - EX18 - Servi�o Militar >>>\n");
   printf("\nAtualmente estamos no ano de %i.",a);
   printf("\nEm que ano voc� nasceu? ");
   scanf("%i", &nasc);
   idade = a - nasc;
   printf("------------------------------\n");
   printf("Tua idade atual � %i anos", idade);

   if(idade >= 18){
      printf("\nJ� fez 18 anos. Espero sinceramente que voc� tenha se alistado\n");
   } else {
   printf("\nVoc� ainda n�o tem 18 anos. N�o pode se alistar\n");
   }

   system("PAUSE");
   }
