//Haisahar Hadad
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std; 

void quicksort(double [20],int, int);
void escribir(double [20],int );

int main(){
	
 int i,nro;   //Se declaran las variables.
 double B[20];

 cout<<"ingrese la diomension del arreglo"<<endl<<endl;  //Se lee la dimension.
 cin>>nro;
 
 cout<<"ORDENAMIENTO POR EL METODO DE QUICKSORT "<<endl<<endl;
 
 cout<<"ingree elementos del arreglo"<<endl<<endl;  //Se ingresa los valores en un for.
 for(i=0;i<nro;i++)
     {
      cout<<"B["<<i<<"]= ";
      cin>>B[i];
     }
     
cout<<"ARREGLO ORIGINAL"<<endl<<endl;  //Se muestra el arreglo original.

for(i=0;i<nro;i++)
     {
      cout<<B[i]<<setw(5);
     }
     
 quicksort(B,0,nro-1);  //Llama a la funcion quicksort.
 escribir(B,nro);  //Llama a la funcion escribir.
 getch();
 
 //delete B;
 return 0;
}


void quicksort(double A[20],int primero,int ultimo){
  int central,i,j;
  double pivote;
  central=(primero+ultimo)/2;
  pivote=A[central];
  i=primero;
  j=ultimo;
  do
  {
    while(A[i]<pivote) i++;
    while(A[j]>pivote) j--;
    if(i<=j)
     {
      double temp;
      temp=A[i];
      A[i]=A[j]; /*intercambia A[i] con A[j] */
      A[j]=temp;
      i++;
      j--;
     }
   }
   while(i<=j);
   if(primero<j)
   quicksort(A,primero,j); /*mismo proceso con sublista izquierda*/
   if(i<ultimo)
   quicksort(A,i,ultimo); /*mismo proceso con sublista derecha*/
}
void escribir(double A[20], int n){

int i;
cout<<endl<<"ARREGLO ASCENDENTE"<<endl<<endl;  //Se escribe el arreglo ordenado.
   for(i=0;i<n;i++)
     {
      cout<<A[i]<<setw(5);
     }
   cout<<endl<<endl;

}

