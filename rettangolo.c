//Favero Michael 3BII
//Rettangolo Stampato Con Asterischi

#include <stdio.h>

int main(){
	int righe;
	int colonne;
	int cont1;
	int cont2;
	cont1=0;
	cont2=0;

	do{
		printf("Inserire il numero di colonne:");
		scanf("%d", &colonne);
	} 
	while(colonne<=0);

	do{
		printf("Inserire il numero di righe:");
		scanf("%d", &righe);
		printf("\n");
	} 
	while(righe<=0);

	while(cont1<colonne){
		while(cont2<righe){
				printf("*");
				cont2++;
			}
			printf("\n");
			cont2=0;
			cont1++;
		}
	
	return 1;
}
