#include <iostream>
#include <conio.h>

using namespace std;

int main(){ 

int a, b;

int numeros[a];

cout << "Escribe cuantos numeros quiere ingresar: " << endl;

cin >> a;

cout << "ingrese los numeros que quiere ingresar: " << endl;

for(int i = 0; i < a; i++){
	
	cin >> numeros[i];
	
}

// Vector Original
  
  cout << "El vector original es: " << endl;
  
 for(int i = 0; i < a; i++){
 	
 	cout << numeros[i] << " " << endl;
 	
 }

// Vector Inverso
  
  cout << "El vector inverso es: " << endl;
  
 for(int j = a - 1; j >= 0; j--){
 	
 	cout << numeros[j] << " " << endl;
 	
 }

getch();

return 0;

}
