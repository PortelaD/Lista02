//Aluno: Daniel Portela
// Objetivo: Contar quantos dias o usuário já viveu.
#include <stdio.h>
#include<locale.h> //biblioteca para uso da acentuação dentro do printf.

int main() {
setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>	
int nasc,ano,dias,idade,vida;
char nome[30];
printf("Qual o seu nome? \n");
scanf("%s",&nome);
printf("Em que ano você nasceu? \n");
scanf("%d",&nasc);
printf("Em que ano estamos? \n");
scanf("%d",&ano);
idade = ano - nasc;
vida = idade * 365;
printf(" %s, você tem %d anos e já viveu %d dias!", nome,idade,vida);
return 0;
}




