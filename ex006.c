// Aluno: Daniel Portela
//Objetivo: Descobrir se o número é par ou ímpar.

#include <stdio.h> //biblioteca para entrada e saÃ­da dos dados
#include<locale.h> //biblioteca para uso da acentuação dentro do printf.
int main() {  //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
int n, resultado;  //declaração das variáveis
printf("Digite um número inteiro:\n "); //solicitar o dado
scanf("%d", &n); //ler dado
resultado = n % 2; // resto da divisão
  
    if (resultado == 0) { // se resultado do resto for igual a 0, número é par
        printf("número par");
    }else{ //diferente de zero, número é impar
        printf("número impar");
    }
    return 0;
}
