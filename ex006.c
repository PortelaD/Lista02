// Aluno: Daniel Portela
//Objetivo: Descobrir se o n�mero � par ou �mpar.

#include <stdio.h> //biblioteca para entrada e saída dos dados
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.
int main() {  //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
int n, resultado;  //declara��o das vari�veis
printf("Digite um n�mero inteiro:\n "); //solicitar o dado
scanf("%d", &n); //ler dado
resultado = n % 2; // resto da divis�o
  
    if (resultado == 0) { // se resultado do resto for igual a 0, n�mero � par
        printf("n�mero par");
    }else{ //diferente de zero, n�mero � impar
        printf("n�mero impar");
    }
    return 0;
}
