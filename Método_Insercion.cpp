//Haisahar Hadad
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {3,4,2,1,5};
	int i,pos,aux;

	for(i=0;i<5;i++){
		pos = i; //Posici�n.
		aux = numeros[i]; //Esto va a guardar el numero que va a estar nuestro arreglo y no la posicion.
		
		while((pos>0) && (numeros[pos-1] > aux)){  //Se va a comparar la posici�n, siempre y cuando haya algo algo a la izquierda.
													//Y hay que comparar cuando algo no haya nada a su izquierda.
			numeros[pos] = numeros[pos-1];	//Se hace el intercambio de n�meros.
			pos--; //Se dismunuye la posici�n.
		}
		numeros[pos] = aux;
	}
	

	cout<<"Orden Ascendente: "; //Se Arregla de manera Ascendente
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";  //Se Arregla de manera Descendente.
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
