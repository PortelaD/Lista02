//Aluno: Daniel Portela
// Objetivo: solicitar nome e altura de 3 usu�rios, depois , exibir o menor com o nome em seguida.
#include <stdio.h> //biblioteca para entrada e sa�da de dados
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.
int main (){
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>	
    struct p {
        char nome[30]; //declara��o de vari�veis 
        float altura; // ''
    };
    p nome1, nome2, nome3, menor;
    printf(" Nome do primeiro usuario:"); // solicitar dados
    scanf("%s",&nome1.nome); // ler dados
    printf("Altura:");
    scanf("%f",&nome1.altura);

    printf(" Nome do segundo usuario:");
    scanf("%s",&nome2.nome);
    printf("Altura:");
    scanf("%f",&nome2.altura);

    printf(" Nome do terceiro usuario:");
    scanf("%s",&nome3.nome);
    printf("Altura:");
    scanf("%f",&nome3.altura);

    if ((nome2.altura < nome1.altura)&&(nome2.altura < nome3.altura)){ // condi��o para encontar menor pessoa e seu nome 
        menor = nome2;
    }if ((nome3.altura < nome1.altura)&&(nome3.altura < nome2.altura)){
        menor = nome3;
	}else{
        menor = nome1;
	}
    printf("A menor pessoa se chama %s e tem %.2f de altura", menor.nome, menor.altura);
    return 0;
}
