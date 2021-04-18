//M: 1, U: 2, O: 2

#ifndef LISTA_H
#define LISTA_H

#include <iostream>

class ListNode
{
	public:
		explicit ListNode( const int &info ) // constructor
		: data( info ), nextPtr( nullptr )
		{
			// Cuerpo Vacio
		} 
		
		int getData() const  // retorna la data
		{
			return data;
		} 
		
		int data; // datos
		ListNode *nextPtr; // proximo nodo
		
}; 


class List
{
	public:
		// default constructor
		List()
		: firstPtr( nullptr ), lastPtr( nullptr )
		{
			// Vacio
		} 
		
		// destructor
		~List()
		{
			if ( !isEmpty() ) //La lista no esta Vacia
			{
				std::cout << "Destruyendo los Nodos ...\n";		
				
				ListNode *currentPtr = firstPtr;
				ListNode *tempPtr = nullptr;
				
				while ( currentPtr != nullptr ) // Borra los nodos restantes
				{
					tempPtr = currentPtr;
					std::cout << tempPtr->data << " Borrado\n";
					currentPtr = currentPtr->nextPtr;
					delete tempPtr;
				} 
			} 	
		
			std::cout << "Todos los nodos Fueron destruidos\n\n";
			
		}

		// Inserta el Nodo al Inicio
		void insertAtFront( const int &value )
		{
			ListNode *newPtr = getNewNode( value ); 
			
			if ( isEmpty() ) // Si la lista esta vacia
				firstPtr = lastPtr = newPtr; // Solo hay un nodo
			else // La lista no esta Vacia
			{
				newPtr->nextPtr = firstPtr; // Apunta el nuevo nodo al 1er Antiguo
				firstPtr = newPtr; // Asigna el nuevo nodo como primero
			}
		} 
		
		
		// Borra el nodo de la lista
		bool removeFromFront( int &value )
		{
			if ( isEmpty() ) // Lista es Vacia
				return false; 
			else
			{
				ListNode *tempPtr = firstPtr; // Item a borrar
				if ( firstPtr == lastPtr )
					firstPtr = lastPtr = nullptr; // No hay mas Nodos
				else
					firstPtr = firstPtr->nextPtr; // Apunta al segundo nodo
					value = tempPtr->data; // Recupero data a ser removida
					delete tempPtr; // Elimina el nodo
					return true; // delete successful
			} 
		} 
		
		
		// Lista Vacia?
		bool isEmpty() const
		{
			return firstPtr == nullptr;
		} 
		
		
		// Muestra el contenido de la Lista
		void print() const
		{
			if ( isEmpty() ) // Lista Vacia?
			{
				std::cout << "La lista esta Vacia\n\n";
				return;
			} 
			
			ListNode *currentPtr = firstPtr;
			std::cout << "La Lista es: ";
			
			while ( currentPtr != nullptr ) // Obtiene la Data
			{
				std::cout << currentPtr->data << ' ';
				currentPtr = currentPtr->nextPtr;
			}
			
			std::cout << "\n\n";
		}
		
		
		// Imprime la media de la pila
		double printMedia( )
		{
			if ( isEmpty() ) // Lista Vacia
			{
				std::cout << "La lista esta vacia\n\n";
			} 
			
			ListNode *currentPtr = firstPtr;
			int n=0 , suma=0;
			
			while ( currentPtr != nullptr ) // Obtiene la data
			{
				suma+= currentPtr->data ;
				n+=1;
				currentPtr = currentPtr->nextPtr;
			} 
	
			return (double) suma/n;
			
		} 
		
		
		// Busqueda de un Nodo
		void finding( const int &value )
		{
						
			if ( isEmpty() ) // Si la lista esta vacia
				std::cout << "La lista esta vacia\n\n";
			else // La lista no esta Vacia
			{
				ListNode *currentPtr = firstPtr;
				int valorBuscado;
				
				while ( currentPtr != nullptr ) // Obtiene la data
				{
					valorBuscado= currentPtr->data;
					
					if (value == valorBuscado)
						std::cout << "El Valor "<< value << " Esta ubicado en " << currentPtr << std::endl;
										
					currentPtr = currentPtr->nextPtr;
				} 
				
			} 
		} 
		
		
	private:
		ListNode *firstPtr; // Apuntador al primer nodo
		ListNode *lastPtr; // Apuntador al ultimo nodo
		
		// Funcion para agregar un nodo nuevo
		ListNode *getNewNode( const int &value )
		{
			return new ListNode( value );
		}
}; 

#endif


