#include <stdio.h>

int main(){
    int Idade = 28;
    int Quantidade = 1;
    float Altura = 1.84;
    double Peso = 97.8;
    char Opção = 'M';
    char Nome[20] = "Marcos";
     // sintaxe scanf
     // scanf("formato1" "formato2", &variavel1, &variavel2, ...);

     printf("Digite a sua idade: ");
     scanf("%d", &Idade);
     printf("A Idade é: %d anos\n", Idade);

     printf("Digite a sua altura: ");
     scanf ("%f", &Altura);
     printf("A Altura é: %.2f m\n", Altura);

     printf("Digite o seu nome: ");
     scanf ("%s", Nome);
     printf("Seu nome é: %s\n", Nome);

     printf("Digite a opção: ");
     scanf (" %c", &Opção);
     printf("A Opção é: %c\n", Opção);


    /*printf("A idade do %s é %d anos\n", Nome, Idade);  
    /*printf("A altura é: %.2f\n", Altura);
    /*printf("A Idade é: %d\n", Idade);
    /*printf("A Opção é: %c\n", Opção);

/*
printf("%formato 1 %formato 2", variavel1, variavel2, variavel3)

%d: Imprime um inteiro no formato decimal.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante no formato de notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres).

scanf("%formato 1 %formato 2", variavel1, variavel2, variavel3)

%d: Imprime um inteiro no formato decimal.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante no formato de notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres).
*/

    
}
