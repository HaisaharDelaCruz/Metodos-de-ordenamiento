//Haisahar Hadad
#include <iostream>
#include <conio.h>
using namespace std;


int Arreglo[100];
void LeerArreglo(int Numero);
void EscribeArreglo(int Numero);
void Shell(int Numero);

int main(){
	int Num;
	
	cout<<"Ingrese el numero de elementos"<<endl;
	cin>>Num;
	
	LeerArreglo(Num);
	Shell(Num);
	cout<<"\n"<<endl;
	EscribeArreglo(Num);
	getch();
}

void LeerArreglo(int Numero){
	
	int i;
	for(i=1;i<=Numero;i++){
		cout<<"Arreglo ["<<i<<"] = ";
		cin>>Arreglo[i];
	}
}

void EscribeArreglo(int Numero){
	cout<<"Ordenamiento ShellSort"<<endl;
	int i;
	for(i=1;i<=Numero;i++){
		cout<<"Arreglo ["<<i<<"] = "<<Arreglo[i]<<endl;
	}
}

void Shell(int Numero){
	
	int i,j,ksaltos,aux;   //Estas 4 variables nos permitira realizar el ordenamiento. i y j nos permitiran recorrer el arreglo, la variable guardara una casilla del arreglo para no perderla 
						   //y ksaltos nos permitira crear un subarreglo no permanente para reducir el problema 
						   
	ksaltos = Numero/2;  //Esta funcion debes de dividirlo entre 2 para obtener sucesivamente nuevos subvalores de k dividirlos entre dos hasta llegar a 1.
	
	while(ksaltos>0){ //Este bucle estara al pendiente de calcular k y dejarnos salir despues de que k sea 1.
		for(i=ksaltos+1;i<=Numero;i++){   //Este bucle se encargara de encontrar los k subarreglos.
			j=i-ksaltos;
			while(j>0){		//Compara cada elemento seleccionado con los anteriores subarreglos para encontrar el lugar entre ellos
				if(Arreglo[j]>=Arreglo[j+ksaltos]){  
					aux = Arreglo[j];
					Arreglo[j] = Arreglo[j+ksaltos];
					Arreglo[j+ksaltos] = aux;
				}
				else{
					j=0;
				}
				j=j-ksaltos;
			}
		}
		ksaltos =ksaltos/2;
	}
}
