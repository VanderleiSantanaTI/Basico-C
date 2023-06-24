#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "portuguese");
    char nome[20];
    float nota1, nota2, media;
    printf("\n<<< EX009 - Média do Aluno >>>\n");
    printf("\nNome do aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("O alnuno %s tirou a nota %.1f e %.1f.\nA média final foi de %.1f.\n",nome,nota1,nota2,media);
}
