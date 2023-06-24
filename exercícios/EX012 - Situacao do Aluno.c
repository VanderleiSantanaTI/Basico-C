#import <stdio.h>
#import <locale.h>
#import <string.h>
void main(){
    setlocale(LC_ALL, "portuguese");
     float n1, n2;
     char situacao[10];
     printf("\n<<< EX012 - Situação do Aluno >>>\n");
     printf("\nPrimeira nota:" );
     scanf("%f", &n1);
     printf("Segunda nota: ");
     scanf("%f", &n2);
     float media = (n1 + n2)/2;
     strcpy(situacao,(media>=7)?"APROVADO":"REPROVADO");
     printf("A média do aluno foi %.1f\n",media);
     printf("A sua situação é %s\n",situacao);
     system("PAUSE");
    }
