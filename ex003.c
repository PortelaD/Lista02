// Aluno: Daniel Portela Louten�o
// Objetivo: Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo

#include <stdio.h> // biblioteca para entrada e sa�da de dados
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf. 
int main(){ //inicio do algoritmo 
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
int a,b,c, soma1,soma2,soma3; //declara��o de vari�veis
printf("Digite o valor do primeiro segmento:"); // solicitar dados
scanf("%d",&a); //ler dados 
printf("Digite o valor do segundo segmento:");
scanf("%d",&b);
printf("Digite o valor do terceiro segmento:");
scanf("%d",&c);
soma1 = b + c; 
soma2 = a + c;
soma3 = a + b;
    if( (a <=soma1)&&(b <=soma2)&&(c <=soma3) ){ //condi��o para formar os triangulos
        printf("Esses segmentos formam um tri�ngulo!");
    }else{ 
        printf("Esses segmentos N�O formam um tri�ngulo!");
    }
    return 0;
}
