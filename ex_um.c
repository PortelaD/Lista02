// Aluno: Daniel Portela Louren�o
// Objetivo: a partir da leitura da velocidade e placa do carro, avisar ao motorista se ele ser� multado

#include <stdio.h>
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.

int main(){ // inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
int velocidade; // declara��o da vari�vel do tipo inteiro
char placa[8]; // declara��o do tipo caractere 
printf(" Em qual velocidade voce estava andando? \n"); //solicitar dado
scanf("%d",&velocidade); // ler dado
printf(" Placa do seu carro: \n");
scanf("%s",&placa);
    if (velocidade > 80) {
        printf("MULTADO! voce excedeu o limite de 80km/h permitido."); // se velo for maior que 80,
    }                                                                   // motorista multado
printf("\n Motorista da placa %s, dirigindo a uma velocidade de %d km/h tenha um bom dia. Dirija com seguranca!",placa,velocidade);
    return 0;
}                                                           
