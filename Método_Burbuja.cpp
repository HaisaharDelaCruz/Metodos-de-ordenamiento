//Metodo de ordenamiento burbuja
//De la Cruz Elizondo Haisahar Hadad
#include <iostream>
using namespace std;
int main(){
	int numeros[] = {4,1,2,3,5};  //Arreglo de numeros.
	int i,j,aux; //Iteradores y variable aux.
	
	//El siguiente codigo seria un ordenamiento del metodo burbuja.
	for(i=0;i<5;i++){ 
		for(j=0;j<5;j++){
			if(numeros[j] > numeros[j+1]){  //Numero actual es igual a numero siguiente.
				aux = numeros[j]; //Si se cumple hace el intercambio entre valores.
				numeros[j] = numeros[j+1]; //Numero actual va hacer igual al numero siguiente.
				numeros[j+1] = aux; //Numero siguiente va hacer igual al auxiliar.
			}
		}
	}
		
	cout<<"Ordenamiento Ascendente"<<endl;
	 for(i=0;i<5;i++){
		cout<<numeros[i];  //Se imprime nuestro arreglo de numeros de forma Ascendente.
	}
	cout<<"\n"<<endl;
	
	cout<<"Ordenamiento Descendente"<<endl;
	 for(i=4;i>=0;i--){  
		cout<<numeros[i];  //Se imprime nuestro arreglo de numeros de forma Descendente.
	}	
	
	return 0;
}

