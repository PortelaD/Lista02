// Aluno: Daniel Portela
// Objetivo:  Algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual
// o menor e maior deles.

#include <stdio.h> //biblioteca para entrada e sa�da de dados
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.
int main() { //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
int a,b,c,menor,maior;
printf("Digite um numero inteiro:\n"); //solicitar dados
scanf("%d",&a); //ler dados
printf("Digite o segundo numero inteiro:\n");
scanf("%d",&b);
printf("Digite o terceiro numero inteiro:\n");
scanf("%d",&c);
menor = a;  //condi��o para determinar maior e menor n�mero digitado
    if ((b < a)&&(b < c)){
        menor = b;
    }if ((c < a)&&(c < b)){
        menor = c;
    }
maior = a; //assumindo que "a" n�o � o menor ou maior n�mero, o programa far� por elimina��o
    if ((b > a)&&(b > c)) {
        maior = b;
    }if ((c > a)&&(c > b)) {
        maior = c;
    }
    printf(" O maior n�mero: %d \n",maior);
    printf(" O menor n�mero: %d  \n", menor);
}

