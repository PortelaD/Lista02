//Aluno: Daniel Portela
// Objetivo: Faça algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à 
// Internet, para isso você deverá ler a quantidade de horas que você utilizou.

#include <stdio.h> //biblioteca para entrada e saída de dados
#include<locale.h> //biblioteca para uso da acentuação dentro do printf.

int main(){ //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
char nome[20]; //declaração de variáveis
float valorbasico, valorextra, horas;
printf("Qual o seu nome: \n"); //solicitar dados
scanf("%s",&nome); //ler dados
printf("Por quantas horas você acessou à internet? \n");
scanf("%f",&horas);
valorbasico = 30; // cálculo para saber quanto o usuário pagará pelo acesso à  internet 
valorextra =  30 +((horas - 20)*3);
    if ( horas <= 20 ) {
        printf(" %s, o valor será de R$%.2f reais",nome,valorbasico);
    }else{
        printf(" %s, o valor será de R$%.2f reais",nome,valorextra);
    }
    return 0;
}

