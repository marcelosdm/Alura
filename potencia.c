#include <stdio.h>

void inicio(){

	printf("************************************\n");
	printf("*      Calculadora de Potência     *\n");
	printf("************************************\n");

}

int potencia(int a, int b){

	int resultado = 1;
	for (int i = 0; i < b; i++)
		resultado = resultado * a;

	return resultado;
	//int calculo = m ^ n;
}

int main(){

	int x;
	int y;

	inicio();

	printf("Digite o número:\n");
	scanf("%d", &x);
	printf("Digite a potência número:\n");
	scanf("%d", &y);

	int mostraresuldado;

	mostraresuldado = potencia(x,y);

	printf("O resultado deste cálculo é: %d\n", mostraresuldado);
}