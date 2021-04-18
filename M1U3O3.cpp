//M: 2, U: 3, O: 3
//3. Realice en Lenguaje C++ un programa para la implementación 
//de las secuencias con dos pilas.

#include <iostream>
#include "Pila.h" // Definicion de la clase Pila
using namespace std;

int main()
{
	Stack intStack; // Crea la primera pila
	cout << "Se procesa la Pila de Entero" << endl;
	
	// Se introduce datos a la Pila
	for ( int i = 0; i < 3; ++i )
	{
		intStack.push( i );
		intStack.printStack();
	} 
	
	int popInteger; // Se almacena el valor sacado de la pila
	
	// Se saca los enteros de la pila
	while ( !intStack.isStackEmpty() )
	{
		intStack.pop( popInteger );
		cout << popInteger << " Sacado de la Pila" << endl;
		intStack.printStack();
	}
	
	
	
	Stack int2Stack; // Se crea la segunda pila de enteros
	cout << "**********************************" << endl;
	cout << "Se procesa la Segunda Pila de Entero" << endl;
	
	// Se introduce datos a la Pila
	for ( int i = 30; i < 37; ++i )
	{
		int2Stack.push( i );
		int2Stack.printStack();
	} 
	
	int popInteger2; // Se almacena el valor sacado de la pila
	
	// Se saca los enteros de la pila
	while ( !int2Stack.isStackEmpty() )
	{
		int2Stack.pop( popInteger2 );
		cout << popInteger2 << " Sacado de la Pila" << endl;
		int2Stack.printStack();
	}


}










