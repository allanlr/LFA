#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	int  a, soma;
	int i;
	bool t = true;

	while(t){
		printf("\nInsira um Valor");
		scanf("%i", &a);
		printf("\n%i\n", a);
		if(a == 10 || a == 25 ){
			soma += a;
			if(soma>=45){
				printf("\nCoca cola");
				
				t=false; 
			}else{
				printf("\nInsira mais dim dim");
				printf("\nVocê tem %i", soma);

			}
		}else{
			printf("\nValor invalido favor inserir um valor 25 ou 10");	
		}
		
	} 
}
