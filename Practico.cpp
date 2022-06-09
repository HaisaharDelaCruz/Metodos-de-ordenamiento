//Haisahar Hadad
#include <iostream>
#include<windows.h>
using namespace std;

void introducirDatos(int datos[], int n);
void OrdenInsercion(int datos[],int n);
void OrdenSeleccion(int datos[],int n);
void OrdenShell(int datos[],int n);
void OrdenBurbuja(int datos[], int n);
void OrdenRadix(int datos[], int n);


int main(){ 
	srand(time(NULL));
	int opc;
	int datos[100000];
	srand(time(NULL));

	
	do{
		cout<<"Opciones de Tamano \n"<<endl;
		cout<<"1) Prueba de 10"<<endl;
		cout<<"2) Prueba de 100"<<endl;
		cout<<"3) Prueba de 1000"<<endl;
		cout<<"4) Prueba de 10000"<<endl;
		cout<<"5) Prueba de 100000"<<endl;
		cout<<"6) Salir"<<endl;
		
		cin>>opc;
		cout<<"\n"<<endl;
		system("CLS()");
		switch(opc){

			case 1: cout<<"Prueba de 10 \n"<<endl;
						introducirDatos(datos,10);
						cout<<"\n"<<endl;
						OrdenInsercion(datos,10);
						cout<<"\n"<<endl;
						OrdenSeleccion(datos,10);
						cout<<"\n"<<endl;
						OrdenShell(datos,10);
						cout<<"\n"<<endl;
						OrdenBurbuja(datos,10);
						cout<<"\n"<<endl;
						OrdenRadix(datos,10);
						cout<<"\n"<<endl;		
					system("PAUSE()");
					system("CLS()");				
				break;
				
			case 2: cout<<"Prueba de 100 \n"<<endl;
						introducirDatos(datos,100);
						cout<<"\n"<<endl;
						OrdenInsercion(datos,100);
						cout<<"\n"<<endl;
						OrdenSeleccion(datos,100);
						cout<<"\n"<<endl;
						OrdenShell(datos,100);
						cout<<"\n"<<endl;
						OrdenBurbuja(datos,100);
						cout<<"\n"<<endl;
						OrdenRadix(datos,100);
						cout<<"\n"<<endl;
					system("PAUSE()");
					system("CLS()");				
				break;	

			case 3: cout<<"Prueba de 1000 \n"<<endl;
						introducirDatos(datos,1000);
						cout<<"\n"<<endl;
						OrdenInsercion(datos,1000);
						cout<<"\n"<<endl;
						OrdenSeleccion(datos,1000);
						cout<<"\n"<<endl;
						OrdenShell(datos,1000);
						cout<<"\n"<<endl;
						OrdenBurbuja(datos,1000);
						cout<<"\n"<<endl;
						OrdenRadix(datos,1000);
						cout<<"\n"<<endl;
					system("PAUSE()");
					system("CLS()");				
				break;	
											
			case 4: cout<<"Prueba de 10000 \n"<<endl;
						introducirDatos(datos,10000);
						cout<<"\n"<<endl;
						OrdenInsercion(datos,10000);
						cout<<"\n"<<endl;
						OrdenSeleccion(datos,10000);
						cout<<"\n"<<endl;
						OrdenShell(datos,10000);
						cout<<"\n"<<endl;
						OrdenBurbuja(datos,10000);
						cout<<"\n"<<endl;
						OrdenRadix(datos,10000);
						cout<<"\n"<<endl;
					system("PAUSE()");
					system("CLS()");				
				break;	

			case 5: cout<<"Prueba de 100000 \n"<<endl;
						introducirDatos(datos,100000);
						cout<<"\n"<<endl;
						OrdenInsercion(datos,100000);
						cout<<"\n"<<endl;
						OrdenSeleccion(datos,100000);
						cout<<"\n"<<endl;
						OrdenShell(datos,100000);
						cout<<"\n"<<endl;
						OrdenBurbuja(datos,100000);
						cout<<"\n"<<endl;
						OrdenRadix(datos,100000);
						cout<<"\n"<<endl;
					system("PAUSE()");
					system("CLS()");				
				break;					
		}				
	
	}while(opc !=6);
	return 0;
}




void introducirDatos(int datos[], int n){ //Introduce los numeros aleatorios a nuestros arreglos

	int limite_superior;
	int limite_inferior;
		cout<<"Digite el limite inferior"<<endl;
			cin>>limite_inferior;
		cout<<"Digite el limite superior"<<endl;
			cin>>limite_superior;										
		cout<<"Numeros generados aleatoriamente: "<<endl;		
		for(int i=0;i<n;i++){
			datos[i] = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;	
			cout<<datos[i]<<",";
		}		
}

void OrdenInsercion(int datos[],int n){  //Se ordenan los numeros aleatorios con el metodo de Insercion.
	
	
	int tiempoInicial, tiempoFinal;
	int temp,pos;
	
	tiempoInicial = clock();
		for(int i=0; i<n; i++){
			pos=i;
			temp=datos[i];
		while ( pos>0&& datos[pos-1]>temp){
		
			datos[pos]=datos[pos-1];
			pos--;
		}
			datos[pos]=temp;
		tiempoFinal = clock();
		}		
	cout<<"Metodo Insercion : "<<endl;
	for(int i=0;i<n;i++){
		cout<<datos[i]<<",";
	}
		cout<<"\n"<<endl;
	cout<<"El tiempo es de "<<tiempoFinal - tiempoInicial<<" microsegundos ";
		
}


void OrdenSeleccion(int datos[],int n){	 //Se ordenan los numeros aleatorios con el metodo de Seleccion.
	int tiempoInicial, tiempoFinal;		
	int temp,min;
	
	tiempoInicial = clock();	
	for (int i=0; i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if (datos[j]<datos[min]){
				min=j;
		}
	}		
		temp=datos[i];
		datos[i]=datos[min];
		datos[min]=temp;
		tiempoFinal = clock();
	}					
				
	cout<<"Metodo de Seleccion : "<<endl;						
	for (int i=0;i<n;i++){
		cout<<datos[i]<<",";
	}	
	cout<<"\n"<<endl;
	cout<<"El tiempo es de "<<tiempoFinal - tiempoInicial<<" microsegundos ";	
}

void OrdenShell(int datos[],int n){ //Se ordenan los numeros aleatorios con el metodo de Shellsort.
	int temp;
	int cont,saltos,i; 
	int tiempoInicial, tiempoFinal;
	tiempoInicial = clock();
	for(cont=n/2;cont!=0;cont/=2){
		for(saltos=1;saltos!=0;){
			saltos=0;
			for(i=cont;i<n;i++){
				if(datos[i-cont]>datos[i]){
					temp=datos[i];
					datos[i]=datos[i-cont];
					datos[i-cont]=temp;
					saltos++;
				}
			}
		} 
	tiempoFinal = clock();	
	}
	cout<<"Metodo de Shellsort : "<<endl;
	for (int i=0;i<n;i++){
		cout<<datos[i]<<",";
	}
	cout<<"\n"<<endl;
	cout<<"El tiempo es de "<<tiempoFinal - tiempoInicial<<" microsegundos ";	
}

void OrdenBurbuja(int datos[], int n){  //Se ordenan los numeros aleatorios con el metodo de la Burbuja.
	int temp;
	int tiempoInicial, tiempoFinal;
		tiempoInicial = clock();
		for (int i=0;i<n-1;i++){
			for (int c=0;c<n-1;c++){	//Aqui inicia el metodo burbuja
				if ( datos[c]>datos[c+1]){  //Si es verdadero entonces hacemos un Swap
			 		temp=datos[c] ;
					datos[c]=datos[c+1];
					datos[c+1]=temp;
				}
			}
			tiempoFinal = clock();
		}
	cout<<"Metodo de la Burbuja : "<<endl;	
	for (int i=0;i<n;i++){
			cout<<datos[i]<<",";
	}
	cout<<"\n"<<endl;
	cout<<"El tiempo es de "<<tiempoFinal - tiempoInicial<<" microsegundos ";			
}

void OrdenRadix(int datos[], int n){	//Se ordenan los numeros aleatorios con el metodo de Radix
	int  j = 1, m = 0, cola[n], temp[n];	
	int tiempoInicial, tiempoFinal;
	
	tiempoInicial = clock();
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
	tiempoFinal = clock();	
	}	
	cout<<"Metodo Radix : "<<endl;	
	for (int i=0;i<n;i++){
		cout<<datos[i]<<",";
	}
	cout<<"\n"<<endl;
	cout<<"El tiempo es de "<<tiempoFinal - tiempoInicial<<" microsegundos ";
}

