#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	cout<<"Por favor, ingresa las 10 edades"<<endl;
	
	int edades[10];
	for(int i=0; i<10; i++){
		cin>>edades[i];
	}
	for(int m=0; m<10; m++){
		cout<<edades[m]<<" ";
	}	
	int aux;
	for(int k=0; k<10; k++){
		for(int j=0; j<10; j++){
		
		if(edades[j]>edades[j+1]){
			aux=edades[j];
			edades[j]=edades[j+1];
			edades[j+1]=aux;
			
	}
	}
	}
	
	cout<<endl;
	cout<<"vector ordenado"<<endl;
	for(int a=0; a<10; a++){
	cout<<edades[a]<<" ";
	}
	
	getch();
	
	return 0;
}
