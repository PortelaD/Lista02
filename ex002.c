//Aluno: Daniel Portela Louren�o
//Objetivo:Efetuar a leitura de um n�mero e apresentar como o seu m�dulo (somente seu valor)
//absoluto) elaborando os cálculos matemáticos para isso.
 
#include <stdio.h> //biblioteca para entrada e sa�da dos dados
#include <math.h>
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.

int main(){ // inicio do algoritmo
	setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
int numero, modulo; // declara��o das vari�veis 
printf("Digite um numero para visualizar seu modulo: \n"); //solicitar o dado
scanf("%d",&numero); // ler o dado

    if (numero < 0) { // se numero for menor que zero, elevar a -1 para mudar o sinal
        modulo =  numero * (-1);
    }else{
        modulo = numero; // se numero for maior que zero, ir� ser mantido.
    }
printf(" O modulo de %d e: \n %d  ", numero, modulo); //imprimir resultado 
    
    return 0;
}


