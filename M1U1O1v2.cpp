//M: 1, U: 1, O: 1
//Implemente en Lenguaje C++ una función que permita obtener la parte izquierda de una
//cadena de caracteres definida por el número de caracteres que la forman.


#include <iostream>
using namespace std;

//Determina el tamano de la cadena
int getLength(char* str){
	int s=0;
	for(int i=0;str[i];i++){
		s++;
	}
	return s;
}

//Imprime la cadena
void show(char* str){
	
	//se calcula el tamano de la cadena de caracteres dentro del arreglo.
	int n=getLength(str);
	
	for(int k=0;k<=(n-1);k++){
		cout<<str[k]<<"-";
	}
	
	cout<<endl;
}


// El programa principal
int main(){
	
	
	// Un arreglo de Caracteres
	char txt[] = ("The C++ programing language");
	
	//Se imprime la cadena Original para comparacion
	
	cout << "Cadena Original es: The C++ programing language" << endl;
	
	// Se pasa la cadena de texto a la funcion show que imprime el arreglo
	show(txt);
	
	return 0;
}





