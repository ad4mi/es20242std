#include <stdio.h>

int main(){
	
	int x;
	if(true){
	printf("Digite um numero: \n");
	scanf("%d", &x);
	if (x%5 == 0){
		printf("Caraca! o numero %d ser divisivel por 5!!: ", x);
	}
	else
	{
		printf("nananinanao, vc ser um fracasso ;-;", x);
	}	 
	}
	else{
		printf("INUTIL")
	}
		return 0;
}
