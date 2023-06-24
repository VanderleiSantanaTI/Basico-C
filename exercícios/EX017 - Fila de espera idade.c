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


   printf("<<< EX16 - EX17 - Fila de Banco >>>\n");
   printf("\nEm que ano você nasceu? ");
   scanf("%i", &nasc);
   idade = a - nasc;
   printf("------------------------------\n");
   printf("Você tem %i anos, certo?", idade);
   printf("\nSaja bem-vindo(a) ao Bando Estudonauta!");
   if(idade >= 65){
      printf("\n=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL! ===");

   }
   printf("\n------------------------------\n");
   }
