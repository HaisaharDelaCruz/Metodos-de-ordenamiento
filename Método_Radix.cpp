//Haisahar Hadad
#include <stdlib.h>
#include <stdio.h>
#define n 10
int main()
{
int  j = 1, m = 0, cola[n], temp[n];
int datos[n];//Arreglo o vector
for (int i=0;i<n;i++)
{
datos[i]= rand() % 1000; //aleatoriamente seleccionados
printf(",%i",datos[i]);
}


//M�todo Radix
	for(int i = 0; i < n; i++) {
		if(datos[i] > m) {
			m = datos[i];
		}
	}

	while((m/j) > 0) {
		for (int i = 0; i < n; i++) {
			cola[i] = 0;
		}
		for(int i = 0; i < n; i++) {
			cola[(datos[i] / j) % 10]++;
		}
		for(int i = 1; i < n; i++) {
			cola[i] += cola[i-1];
		}
		for(int i = (n - 1); i >= 0; i--) {
			temp[--cola[(datos[i] / j) % 10]] = datos[i];
		}
		for(int i = 0; i < n; i++) {
			datos[i] = temp[i];
		}
		j *= 10;
	}


printf("\n ******************************* \n");
for (int i=0;i<n;i++)
printf(",%i",datos[i]);
return 1;
}
