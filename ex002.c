//Aluno: Daniel Portela Lourenço
//Objetivo:Efetuar a leitura de um número e apresentar como o seu môdulo (somente seu valor)
//absoluto) elaborando os cÃ¡lculos matemÃ¡ticos para isso.
 
#include <stdio.h> //biblioteca para entrada e saída dos dados
#include <math.h>
#include<locale.h> //biblioteca para uso da acentuação dentro do printf.

int main(){ // inicio do algoritmo
	setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
int numero, modulo; // declaração das variáveis 
printf("Digite um numero para visualizar seu modulo: \n"); //solicitar o dado
scanf("%d",&numero); // ler o dado

    if (numero < 0) { // se numero for menor que zero, elevar a -1 para mudar o sinal
        modulo =  numero * (-1);
    }else{
        modulo = numero; // se numero for maior que zero, irá ser mantido.
    }
printf(" O modulo de %d e: \n %d  ", numero, modulo); //imprimir resultado 
    
    return 0;
}


