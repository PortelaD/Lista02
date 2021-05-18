//Aluno: Daniel Portela
//objetivo: Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saÌda
//uma das seguintes mensagens: Ol· Ilmo. Sr.ù, para o sexo masculino ou Ol· Ilma. Sra.ù para o sexo
//feminino, acrescentando o nome em seguida.
#include <stdio.h> //biblioteca para entrada e saida de dados
#include <stdlib.h>
#include<locale.h> //biblioteca para uso da acentuaÁ„o dentro do printf.

int main(){ //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentuaÁ„o para o portuguÍs e est· ligada a biblioteca <locale.h>
char nome[15]; //declaraÁ„o de vari·veis
int sexo; // ''	
printf("Qual o seu nome? "); //solicitar dado
scanf("%s", &nome); // ler dado
printf(" sexo M ou F? Digite 1 para feminino e 2 para masculino ");
scanf("%d",&sexo);

	if (sexo == 2) { //condicional para definir pronome de tratamento
		printf("Ola Ilmo. Sr. %s, seja bem-vindo!", nome);
		
	}else{
		printf("Ola Ilma. Sra. %s, seja bem-vinda!", nome);
		
	}
	return 0;
	
	
}
