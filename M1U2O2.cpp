//M: 1, U: 2, O: 2
//2. Implemente en Lenguaje C++ un programa haciendo uso de listas para eliminar elemento
//al inicio, insertar al inicio, imprimir promedio y búsqueda de elemento.

#include <iostream>
#include <string>
#include "Lista.h" // Definicion de la Clase
using namespace std;

// Funcion que muestra las instrucciones del programa
void instructions()
{	
	cout << "Escoja una opcion:\n"
	<< " 1 Insertar al inicio de la Lista\n"
	<< " 2 Eliminar al Inicio de la Lista\n"
	<< " 3 Imprimir el Promedio de la Lista\n"
	<< " 4 Busqueda en la Lista\n"
	<< " 5 Finalizar\n";
} 


// Funcion para Probar la Lista
void testList( List &listObject , const string &typeName )
{
	int choice=0; // Almacena escogencia
	int value=0; // Valor de objeto de la Lista
	
	cout << "Prueba de la Lista de Valores " << typeName << "\n";
	

	do // Realiza el Menu de Opciones
	{
		bool val;
		
		//Validacion de la entrada del usuario
		do { 
		
			instructions(); // Se muestra el menu
			cout << "? ";
			cin >> choice;
		
			if ((choice < 1) || (choice > 5))
				val=false;
			else 
				val=true;
		
		}while (val == false);
			
	
		switch ( choice )
		{
			case 1: 
				cout << "Introducir " << typeName << ": ";
				cin >> value;
				listObject.insertAtFront( value );
				listObject.print();
			break;
			case 2: 
				if ( listObject.removeFromFront( value ) )
				cout << value << " Removido de la Lista\n";
				listObject.print();
				
			break;
			case 3: 
				cout << "El promedio de los Valores es: ";
				cout << listObject.printMedia()<<endl;
				listObject.print();
				
			break;
			
			case 4: 
				cout << "Introducir Valor Buscado: ";
				cin >> value;
				listObject.finding( value );
				listObject.print();
			break;
			
		} // fin switch
		
	} while ( choice < 5 ); 
	
	cout << "Fin del programa de Prueba\n\n";
	
} 


//Llamado del programa principal
int main()
{	
	//Llamado de la funcion de prueba de la Lista y Creacion de la Lista
	List integerList;
	testList( integerList, "entero" );
	
} 



















