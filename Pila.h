//Pila.h
// Definicion de clase.
#ifndef STACK_H
#define STACK_H
#include "Lista.h" // Se va a reutilizar la Clase lista y sus procedimientos

class Stack : private List  {
	public:
		// Llama la funcion push de la funcion insertar de la lista
		void push( const int &data )
		{
			this -> insertAtFront( data );
		} 
		
		// Llama la funcion pop de la funcion borrar de la lista
		bool pop( int &data )
		{
			return this -> removeFromFront( data );
		} 
		
		// La funcion verifica que esta vacia la pila
		bool isStackEmpty() const
		{
			return this->isEmpty();
		} 
		
		// Se imprime la pila
		void printStack() const
		{
			this->print();
		} 
		
}; 
#endif


