//Aluno: Daniel Portela
// Objetivo: Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.

#include <stdio.h> // biblioteca para entrada e saida de dados
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.

int main(){ //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
float n1, n2, diferenca; // declara��o de vari�veis
printf("Digite o primeiro valor n�merico: \n");
scanf("%f",&n1);
printf("Digite o segundo valor n�merico: \n");
scanf("%f", &n2);
   
	if(n1 >= n2){ //condicional para determinar o maior valor 
		diferenca = n1 - n2;
	}else{
		diferenca = n2 - n1;
	}
	
printf("A diferenca entre os n�meros %.1f e %.1f e de %.1f", n1, n2, diferenca);
return 0;
}    
        




