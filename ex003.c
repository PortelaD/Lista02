// Aluno: Daniel Portela Loutenço
// Objetivo: Dado trés valores, verificar se eles podem constituir os lados de um triângulo

#include <stdio.h> // biblioteca para entrada e saída de dados
#include<locale.h> //biblioteca para uso da acentuação dentro do printf. 
int main(){ //inicio do algoritmo 
setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
int a,b,c, soma1,soma2,soma3; //declaração de variáveis
printf("Digite o valor do primeiro segmento:"); // solicitar dados
scanf("%d",&a); //ler dados 
printf("Digite o valor do segundo segmento:");
scanf("%d",&b);
printf("Digite o valor do terceiro segmento:");
scanf("%d",&c);
soma1 = b + c; 
soma2 = a + c;
soma3 = a + b;
    if( (a <=soma1)&&(b <=soma2)&&(c <=soma3) ){ //condição para formar os triangulos
        printf("Esses segmentos formam um triângulo!");
    }else{ 
        printf("Esses segmentos NÃO formam um triângulo!");
    }
    return 0;
}
