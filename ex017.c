//Aluno: Daniel Portela
// Objetivo: Contar quantos dias o usu�rio j� viveu.
#include <stdio.h>
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.

int main() {
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>	
int nasc,ano,dias,idade,vida;
char nome[30];
printf("Qual o seu nome? \n");
scanf("%s",&nome);
printf("Em que ano voc� nasceu? \n");
scanf("%d",&nasc);
printf("Em que ano estamos? \n");
scanf("%d",&ano);
idade = ano - nasc;
vida = idade * 365;
printf(" %s, voc� tem %d anos e j� viveu %d dias!", nome,idade,vida);
return 0;
}




