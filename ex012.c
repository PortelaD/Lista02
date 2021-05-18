//Aluno: Daniel Portela
// objetivo: Fazer um algoritmo em português estruturado que leia o número de DDD e informe a qual
// cidade pertence.

    #include <stdio.h> //biblioteca de saida e entrada de dados
    #include <string.h>
    #include<locale.h> //biblioteca para uso da acentuação dentro do printf.
    int main(){  //inicio algoritmo
    setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
    int ddd; //declaração de variáveis
    char cidade[35];
    printf(" Digite o DDD da sua cidade: \n"); //solicitar dado
    scanf("%d",&ddd);  //ler dado
		
    switch (ddd){
    
        case 61:
			strcpy(cidade, "Brasília"); // definição da cidade do usuário através do DDD
		break;
		case 71:
			strcpy(cidade, "Salvador");
		case 11:
			strcpy(cidade, "São Paulo");
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
			strcpy(cidade, "Sem idenficação");
    }

    printf("Cidade: %s", cidade);
    return 0;
}

