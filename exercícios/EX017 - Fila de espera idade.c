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


   printf("<<< EX16 - EX17 - Fila de Banco >>>\n");
   printf("\nEm que ano voc� nasceu? ");
   scanf("%i", &nasc);
   idade = a - nasc;
   printf("------------------------------\n");
   printf("Voc� tem %i anos, certo?", idade);
   printf("\nSaja bem-vindo(a) ao Bando Estudonauta!");
   if(idade >= 65){
      printf("\n=== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL! ===");

   }
   printf("\n------------------------------\n");
   }
