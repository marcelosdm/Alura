#include <stdio.h>

int main(){

	int a;

	printf("Qual tabuada você deseja aprender?\n");
	scanf("%d", &a);

	for (int i = 1; i <= 10; i++){
		int multiplicacao = a * i;
		printf("%d x %d = %d\n", a, i, multiplicacao);
	}
}