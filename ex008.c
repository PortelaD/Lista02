// Aluno: Daniel Portela
//objetivo:Modificar o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o
// peso ideal da pessoa.

#include <stdio.h> //biblioteca para entrada e saída de dados
#include <stdlib.h>
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.

int main(){ //inicio do algoritmo
	setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
char nome[15]; //declara��o de vari�veis
int sexo; // declara��o do sexo        
float peso,altura; // declara��o do peso e altura	
printf("Qual o seu nome? "); //solicitar dado
scanf("%s", &nome); //ler dado
printf(" sexo M ou F? Digite 1 para feminino e 2 para masculino ");
scanf("%d",&sexo);
printf("Quanto voce tem de altura?");
scanf("%f",altura);
	
    if (sexo == 2) { //condi��o de masculino ou feminino para declarar peso
        printf("Ola Ilmo. Sr. %s, seja bem-vindo!", nome);
	    peso = (72.5 * altura) - 58;
	}else{
		printf("Ola Ilma. Sra. %s, seja bem-vinda!", nome);
		peso = (62.1 * altura) - 44.7;
	}
	
    printf("\nO seu peso ideal e de %.2fkg", peso); 
    return 0;
}
