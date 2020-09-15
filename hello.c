/* Prof. Fabrício Valadares
 * Aula 14/09
 * Revisão - comandos C - Princípios
 * Entrada e saída, expressões.
 */


#include <stdio.h>



void helloWorld(){
    printf("Hello World!\n");
    printf("Bem vindo ao maravilhoso mundo "
    		"da programação de computadores.\n\n");
    printf("%i", 10+5);
}

int variaveis(){
	int idade;
	char nome[30];

	printf("\n");
	printf("Por favor, informe o nome completo: ");
//	scanf("%s", nome);
	fgets(nome, sizeof(nome), stdin);

	printf("\nPor favor, informe sua idade: ");
	scanf("%d", &idade);

	printf("\n\n");
	printf("%s tem %d anos de idade\n", nome, idade);

	return 0;
}

void lendHorasCompleta(){
	int hh;
	int mm;
	char temp;

	printf("\n\n");
	printf("Por favor, informe o horário no formato HH:MM:\> ");
	scanf("%d %c %d", &hh, &temp ,&mm);

	printf("\n\n");
	printf("HH: %d\nMM: %d\n\n", hh, mm);
}

int soma (int a, int b) {
	return (a + b);
}

void ehPositivo(){
	int numero;

	printf("\n\n");
	printf("Por favor, informe um número para saber se ele é positivo: ");
	scanf("%d", &numero);
	printf("\n\n");

	// Verifica se o número informado é positivo.
	if(numero > 0 ){
		printf("Parabéns, %d é positivo!\n", numero);
	} else if(numero < 0){
		printf("Que pena, %d é negativo!\n", numero);
	} else {
		printf("O número informado é nulo!\n");
	}

	printf("\n\n");
	printf("Fim do teste de positividade\n");

}

void testeCondicional(){
	char userChoice;

	printf("\n\n\tPesquisa de mercado\n");
	printf("Você gosta de (D)oce ou (S)algado?\nD -- Doce\nS -- Salgado\nInforme sua opção: ");
	scanf("%c", &userChoice);

	if(userChoice == 'D' || userChoice == 'd'){
		printf("\nO usuário gosta de doce!!!\n");
	} else if(userChoice == 'S' || userChoice == 's'){
		printf("\nO usuário gosta de salgado!!!\n");
	} else {
		printf("ERRO: \n\t%c não é uma opção válida, tente novamente.\n", userChoice);
	}

}

int main(){

	/*
	 * Retire o comentário da função que deseja executar!
	 */
	//helloWorld();
//	variaveis();
//	int resultado = soma(10, 5);
//	printf("Desconto de %d%%", resultado);
//	lendHorasCompleta();

//	ehPositivo();
	testeCondicional();



    return 0;
}
