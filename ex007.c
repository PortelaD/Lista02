//Aluno: Daniel Portela
// Objetivo: Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.

#include <stdio.h> // biblioteca para entrada e saida de dados
#include<locale.h> //biblioteca para uso da acentuação dentro do printf.

int main(){ //inicio do algoritmo
setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
float n1, n2, diferenca; // declaração de variáveis
printf("Digite o primeiro valor númerico: \n");
scanf("%f",&n1);
printf("Digite o segundo valor númerico: \n");
scanf("%f", &n2);
   
	if(n1 >= n2){ //condicional para determinar o maior valor 
		diferenca = n1 - n2;
	}else{
		diferenca = n2 - n1;
	}
	
printf("A diferenca entre os números %.1f e %.1f e de %.1f", n1, n2, diferenca);
return 0;
}    
        




