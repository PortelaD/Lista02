//Aluno: Daniel Portela
/*Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo 
apresente no caso de triângulo o seu tipo: equilátero (todos os lados são iguais), 
isósceles (dois lados iguais) ou um outro triângulo qualquer (escaleno). 
Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado.
*/
#include<stdio.h> // biblioteca para entrada e saída de dados
#include<string.h>
#include<locale.h> //biblioteca para uso da acentuação dentro do printf. 
int main(){ //inicio do algoritmo 
setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
int a,b,c, soma1,soma2,soma3; //declaração de variáveis 
printf("Digite o valor do primeiro segmento: \n"); // solicitar dados
scanf("%d",&a); //ler dados 
printf("Digite o valor do segundo segmento: \n");
scanf("%d",&b);
printf("Digite o valor do terceiro segmento: \n");
scanf("%d",&c);
soma1 = b + c; 
soma2 = a + c;
soma3 = a + b;
if( (a <=soma1)&&(b <=soma2)&&(c <=soma3) ){ //condição para formar os triângulos
    printf("Esses segmentos formam um triângulo!");
if ((a == b)&&(b == c)){  
            printf("\n Triângulo Equilatero! \n  "); //classificação
        }
        else if ((a != b)&&(a != c)&&(b != c)){
            printf("\n Triângulo Escaleno! \n  "); //''
        }
        else{
            printf("\n Triângulo Isoceles! ");  // ''      
        }
        
}else{
    printf("Esses segmentos Não formam um triângulo");
        
        
    }
    return (0);
}
