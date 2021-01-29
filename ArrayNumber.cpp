/*Practicando arreglos*/

#include <iostream>  //biblioteca estandar
#include <conio.h>   //para usar getch y que no se cierre la pantalla

using namespace std;     // para no poder en cada linea stdcin o cout

int main(){
	int numeros[5],i;
	
	for(i=0; i<5; i++){
	cout<<"ingresa numero\n";
	cin>>numeros[i];
	}
	
	cout<<"\nLista de numeros"<<endl;
	
	for(i=0; i<5; i++){
	cout<<numeros[i]<<"\n";
	}
	
	getch();
	return 0;
}