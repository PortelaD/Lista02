// Aluno: Daniel Portela
// Objetivo:  Algoritmo em português estruturado que leia três valores numéricos e encontre qual
// o menor e maior deles.

#include <stdio.h> //biblioteca para entrada e saída de dados
#include<locale.h> //biblioteca para uso da acentuação dentro do printf.
int main() { //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
int a,b,c,menor,maior;
printf("Digite um numero inteiro:\n"); //solicitar dados
scanf("%d",&a); //ler dados
printf("Digite o segundo numero inteiro:\n");
scanf("%d",&b);
printf("Digite o terceiro numero inteiro:\n");
scanf("%d",&c);
menor = a;  //condição para determinar maior e menor número digitado
    if ((b < a)&&(b < c)){
        menor = b;
    }if ((c < a)&&(c < b)){
        menor = c;
    }
maior = a; //assumindo que "a" não é o menor ou maior número, o programa fará por eliminação
    if ((b > a)&&(b > c)) {
        maior = b;
    }if ((c > a)&&(c > b)) {
        maior = c;
    }
    printf(" O maior número: %d \n",maior);
    printf(" O menor número: %d  \n", menor);
}

