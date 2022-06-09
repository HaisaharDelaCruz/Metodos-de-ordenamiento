//Ordenamiento por Seleccion
//Haisahar Hadad

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {3,4,5,2,1};
	int i,j,aux,min;
	
	//Algoritmo del Ordenamiento por Selecci�n.
	for(i=0;i<5;i++){  //Va a recorrer todo mi arreglo.
		min = i;  //Va a encontrar el numero minimo.
		for(j=i+1;j<5;j++){ //Recorrer nuevamente el arreglo i+1 decimos que el primero es el menor por lo tanto va a recorrer todo lo demas.
			if(numeros[j] < numeros[min]){ //Va a comparar el segundo numero con la posici�n anterior.
				min = j;   //Se intercambia el numero y seguira recorriendo.
			}
		}
		aux = numeros[i]; 
		numeros[i] = numeros[min]; //Se haria el intercambio correspondiente.
		numeros[min] = aux;
	}
	
	
	cout<<"Orden Ascendente: "; //Se ordena de forma Ascendente.
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";  //Se ordena de forma Descendente.
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
