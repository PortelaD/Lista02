//Aluno: Daniel Portela
// Objetivo: Fa�a algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso �
// Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou.

#include <stdio.h> //biblioteca para entrada e sa�da de dados
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.

int main(){ //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
char nome[20]; //declara��o de vari�veis
float valorbasico, valorextra, horas;
printf("Qual o seu nome: \n"); //solicitar dados
scanf("%s",&nome); //ler dados
printf("Por quantas horas voc� acessou � internet? \n");
scanf("%f",&horas);
valorbasico = 30; // c�lculo para saber quanto o usu�rio pagar� pelo acesso � internet 
valorextra =  30 +((horas - 20)*3);
    if ( horas <= 20 ) {
        printf(" %s, o valor ser� de R$%.2f reais",nome,valorbasico);
    }else{
        printf(" %s, o valor ser� de R$%.2f reais",nome,valorextra);
    }
    return 0;
}

