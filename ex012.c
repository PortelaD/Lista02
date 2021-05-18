//Aluno: Daniel Portela
// objetivo: Fazer um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual
// cidade pertence.

    #include <stdio.h> //biblioteca de saida e entrada de dados
    #include <string.h>
    #include<locale.h> //biblioteca para uso da acentua��o dentro do printf.
    int main(){  //inicio algoritmo
    setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
    int ddd; //declara��o de vari�veis
    char cidade[35];
    printf(" Digite o DDD da sua cidade: \n"); //solicitar dado
    scanf("%d",&ddd);  //ler dado
		
    switch (ddd){
    
        case 61:
			strcpy(cidade, "Bras�lia"); // defini��o da cidade do usu�rio atrav�s do DDD
		break;
		case 71:
			strcpy(cidade, "Salvador");
		case 11:
			strcpy(cidade, "S�o Paulo");
		break;
		case 21:
			strcpy(cidade, "Rio de Janeiro");
		break;
		case 32:
			strcpy(cidade, "Juiz de Fora");
		break;
		case 19:
			strcpy(cidade, "Campinas");
		break;
		case 27:
			strcpy(cidade, "Vitoria");
		break;
		case 31:
			strcpy(cidade, "Belo Horizonte");
		break;
		default:
			strcpy(cidade, "Sem idenfica��o");
    }

    printf("Cidade: %s", cidade);
    return 0;
}

