#include <stdio.h>
#include <locale.h>

int NumPrimo (int num, int primo) {
	int i;
	primo = 0;
	
	for(i = 1; i <= num; i++){
		if (num % i == 0){
			primo += 1;
		}
	}
	return primo;
}

int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	
	int n, x, y, p, i, j;
	
	printf("\t\t\t\t\t\t------------------------------\n");
	printf("\t\t\t\t\t\t    CONJECTURA DE GOLDBACH\n");
	printf("\t\t\t\t\t\t------------------------------\n");
	printf("\nDigite um número par, inteiro e maior do que dois:\n");
	scanf("%d", &n);
	
	while(n != 0){
		if (n % 2 == 1 || n <= 2){
			printf("\n------------------------------------------------------------------------------------------\n");
			printf("\nO número digitado NÃO é VÁLIDO! Digite somente números inteiros, pares e maiores do que 2:\n");
			printf("\n------------------------------------------------------------------------------------------\n");
		}
		else{
			for(i = 1; i <= n; i++){
				if (NumPrimo(i, p) == 2) {
					x = i;
				}
				for(j = 1; j <=n; j++){
					if (NumPrimo(j, p) == 2) {
						y = j;	
					}
					if (x + y == n) {
						break;	
					}
				}
			if (x + y == n) {
				break;
			}
			}
			printf("\n--------------------------------------------------------------------------------------------\n");
			printf("\nNúmero \t Decomposição:\n");
			printf("%d \t %d + %d\n", n, x, y);
			printf("\n--------------------------------------------------------------------------------------------\n");	
		}
		printf("\nPara encerrar digite 0 || Para continuar digite outro número par, inteiro e maior do que dois: \n");
		scanf("%d", &n);	
	}
	return 0;
}
