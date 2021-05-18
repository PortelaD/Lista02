// Aluno: Daniel Portela Lourenço
// Objetivo: a partir da leitura da velocidade e placa do carro, avisar ao motorista se ele será¡ multado

#include <stdio.h>
#include<locale.h> //biblioteca para uso da acentuação dentro do printf.

int main(){ // inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
int velocidade; // declaração da variável do tipo inteiro
char placa[8]; // declaração do tipo caractere 
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
