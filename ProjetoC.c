#include <stdio.h>
#include <stdlib.h>  //apenas duas bibliotecas são necessárias para a realização do programa

//declaração das variáveis globais

float real, dolar, euro, libra, iene, peso, franco, boliv, yuan, won, dirham, riyal, rublo, baht, moeda, result;
char nome;

// método que executará os cálculos realizados por esse programa

void menuInicial(){
	int i, op;
	
//o laço o while permite a manipulação das opções do programas, para que ele possa funcionar mais de uma vez	
	while(0==0){
	system("cls");   //o comando system("cls") permite limpar o menu inicial quando o usuário terminar o uso de uma função e quiser utilizar outra
	setbuf(stdin,NULL); //função responsável por limpar o buffer do teclado		
		
//execução do menu inicial	
		printf("\n Ola amigo viajante bem-vindo ao programa de conversao de moedas !");
		printf("\n");
		printf("\n Escolha sua opcao !!          |  Pais:                       ");
		printf("\n                               | "); 
		printf("\n                               |");
		printf("\n1 -  Dolar                     | 1  -  EUA");
		printf("\n2 -  Euro                      | 2  -  Europa");
		printf("\n3 -  Libra                     | 3  -  Reino Unido");
		printf("\n4 -  Iene                      | 4  -  Japao");
	    printf("\n5 -  Peso                      | 5  -  Argentina");
	    printf("\n6 -  Franco                    | 6  -  Franca");
	    printf("\n7 -  Boliviano                 | 7  -  Bolivia");
	    printf("\n8 -  Yuan                      | 8  -  China");
	    printf("\n9 -  Won                       | 9  -  Coreia do Sul");
	    printf("\n10 - Dirham                    | 10 -  Marrocos");
	    printf("\n11 - Riyal                     | 11 -  Catar");
	    printf("\n12 - Rublo                     | 12 -  Russia");
	    printf("\n13 - Baht                      | 13 -  Tailandia");
	    printf("\n14 - Outra moeda               |         ");
	    printf("\n15 - Sair do sistema           |          ");
		printf("\n");
		scanf("%d", &op);
//execução das funções utilizadas no programa		
		if(op==1){
		op = 0;	
		printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do dolar: ");
		scanf("%f", &dolar);
		result = real/dolar;
		printf("\nO valor de reais em dolar: %0.2f\n", result);
		}
		
	    if(op==2){
	    op = 0;		
		printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do euro: ");
		scanf("%f", &euro);
		result = real/euro;
		printf("\nO valor de reais em euro: %0.2f\n", result);
	    }
	    
        if(op==3){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual da libra: ");
		scanf("%f", &libra);
		setbuf(stdin,NULL);
		result = real/libra;
		printf("\nO valor de reais em libra: %0.2f\n", result);
	    }
	    
	    if(op==4){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do iene: ");
		scanf("%f", &iene);
		result = real/iene;
		printf("\nO valor de reais em iene: %0.2f\n", result);
	    }
	    
	    if(op==5){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do peso: ");
		scanf("%f", &peso);
		result = real/peso;
		printf("\nO valor de reais em peso: %0.2f\n", result);
	    }
	    
	    if(op==6){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do franco: ");
		scanf("%f", &franco);
		result = real/franco;
		printf("\nO valor de reais em franco: %0.2f\n", result);
	    }
	    
	    if(op==7){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do boliviano: ");
		scanf("%f", &boliv);
		result = real/boliv;
		printf("\nO valor de reais em boliviano: %0.2f\n", result);
	    }
	    
	    if(op==8){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do yuan: ");
		scanf("%f", &yuan);
		result = real/yuan;
		printf("\nO valor de reais em yuan: %0.2f\n", result);
	    }
	    
	    if(op==9){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do Won: ");
		scanf("%f", &won);
		result = real/won;
		printf("\nO valor de reais em won: %0.2f\n", result);
	    }
	    
	    if(op==10){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do Dirham: ");
		scanf("%f", &dirham);
		result = real/dirham;
		printf("\nO valor de reais em dirham: %0.2f\n", result);
	    }
	    
	    if(op==11){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do Riyal: ");
		scanf("%f", &riyal);
		result = real/riyal;
		printf("\nO valor de reais em riyal: %0.2f\n", result);
	    }
	    
	    if(op==12){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do Rublo: ");
		scanf("%f", &rublo);
		result = real/dirham;
		printf("\nO valor de reais em rublo: %0.2f\n", result);
	    }
	    
	    if(op==13){
        op = 0;		
    	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual do Baht: ");
		scanf("%f", &baht);
		result = real/dirham;
		printf("\nO valor de reais em baht: %0.2f\n", result);
	    }
        if(op==14){
        op = 0;		
        printf("\nDigite o nome da moeda que deseja converter: ");
        scanf("%s", &nome);
       	printf("\nDigite quantos reais deseja converter: ");
		scanf("%f", &real);
		printf("\nDigite a cotacao atual da moeda que deseja converter: ");
		scanf("%f", &moeda);
		result = real/moeda;
		printf("\nO valor em reais:  %0.2f\n", result);
	    }
	    
	    if(op==15){
	    op = 0;	
	    printf("\nPrograma encerrado !!!!");
	    exit(0);
		}
	    system("pause");   //a variável system("pause") encerra o programa
    }
//fim da execução de todas as funções do programa	
	    
}

//função main "limpo" 
int main(){ 
	menuInicial();
	return 0;
}
