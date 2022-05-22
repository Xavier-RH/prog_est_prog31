/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022 
	Programa que pida numeros y cuente el numero de entradas positivas, negativas y ceros.
	El programa termina cuando se ingresa el numero 9999
	*/

#include <stdio.h>

int main(){
	int numero, pos=0, neg=0, cero=0;

	do{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		if(numero!=9999){
			if(numero<0){
				neg++;
			}
			else if(numero>0){
				pos++;
			}
			else{
				cero++;
			}
		}
	}while(numero!=9999);
	
	printf("\nSe ingresaron %d numeros positivos\n",pos);
	printf("Se ingresaron %d numeros negativos\n",neg);
	printf("Se ingresaron %d numeros cero",cero);
	
	return 0;
}
