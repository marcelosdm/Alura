#include <stdio.h>

int main(){
	double op, a, b;
	printf("Qual será sua operação? Digite de 1 à 4:\n");
	scanf("%lf", &op);

	printf("Qual será o primeiro número? Digite:\n");
	scanf("%lf", &a);

	printf("Qual será o segundo número? Digite:\n");
	scanf("%lf", &b);


	if (op == 1){
		printf("Resultado da soma: %lf", a + b);
	}
	if (op == 2){
		printf("Resultado da subtração: %lf", a - b);
	}
	if (op == 3){
		printf("Resultado da divisão: %lf", a / b);
	}
	if (op == 4){
		printf("Resultado da multiplicação: %lf", a * b);
	}
}