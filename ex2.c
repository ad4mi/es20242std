#include <stdio.h>

int main(){
	
	int maior, menor, x;
	
	printf("primeiro numero: ");
	scanf("%d", &x);
	maior = x;
	menor = x;
	printf("segundo numero: ");
	scanf("%d", &x);
	if(x > maior){
		maior = x;
	}
	if(x < menor){
		menor = x;
	}
	
	printf("terceiro numero: ");
	scanf("%d", &x);
	if(x > maior){
		maior = x;
	}
	if(x < menor){
		menor = x;
	}
	printf("quarto numero: ");
	scanf("%d", &x);
	if(x > maior){
		maior = x;
	}
	
	if(x < menor){
		menor = x;
	}
	
	printf("quinto numero: ");
	scanf("%d", &x);
	if(x > maior){
		maior = x;
	}
	if(x < menor){
		menor = x;
	}
	
	printf("Maior = %d e menor %d",maior,menor);
	return 0;
}
