//Aluno: Daniel Portela
/*Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo 
apresente no caso de tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), 
is�sceles (dois lados iguais) ou um outro tri�ngulo qualquer (escaleno). 
Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado.
*/
#include<stdio.h> // biblioteca para entrada e sa�da de dados
#include<string.h>
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf. 
int main(){ //inicio do algoritmo 
setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
int a,b,c, soma1,soma2,soma3; //declara��o de vari�veis 
printf("Digite o valor do primeiro segmento: \n"); // solicitar dados
scanf("%d",&a); //ler dados 
printf("Digite o valor do segundo segmento: \n");
scanf("%d",&b);
printf("Digite o valor do terceiro segmento: \n");
scanf("%d",&c);
soma1 = b + c; 
soma2 = a + c;
soma3 = a + b;
if( (a <=soma1)&&(b <=soma2)&&(c <=soma3) ){ //condi��o para formar os tri�ngulos
    printf("Esses segmentos formam um tri�ngulo!");
if ((a == b)&&(b == c)){  
            printf("\n Tri�ngulo Equilatero! \n  "); //classifica��o
        }
        else if ((a != b)&&(a != c)&&(b != c)){
            printf("\n Tri�ngulo Escaleno! \n  "); //''
        }
        else{
            printf("\n Tri�ngulo Isoceles! ");  // ''      
        }
        
}else{
    printf("Esses segmentos N�o formam um tri�ngulo");
        
        
    }
    return (0);
}
