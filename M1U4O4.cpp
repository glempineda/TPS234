
// Creando el arbol binario
#include <iostream>
#include <iomanip>
#include "arbol.h" // Definicion de la Clase arbol
using namespace std;


int main()
{
	Tree< char > charTree; // Crea el arbol de caracteres
	cout << "Se introducen los valores en el arbol:\n";
	
	// insert char to charTree
	char intValue = 'G';
	charTree.insertNode( intValue );
	intValue = 'B';
	charTree.insertNode( intValue );
	intValue = 'A';
	charTree.insertNode( intValue );
	intValue = 'C';
	charTree.insertNode( intValue );
	intValue = 'F';
	charTree.insertNode( intValue );
	intValue = 'D';
	charTree.insertNode( intValue );
	intValue = 'E';
	charTree.insertNode( intValue );
	intValue = 'Q';
	charTree.insertNode( intValue );
	intValue = 'K';
	charTree.insertNode( intValue );
	intValue = 'H';
	charTree.insertNode( intValue );
	intValue = 'P';
	charTree.insertNode( intValue );
	intValue = 'R';
	charTree.insertNode( intValue );
		
	cout << "\nChequeo del Arboll\n";
	charTree.preOrderTraversal();
	
	cout << "\nCuenta de los Nodos\n";
	charTree.numNodos();
	
	cout << "\nCuenta de las Hojas\n";
	charTree.numHojas();
	
	cout << "\nCuenta de la Profundidad\n";
	charTree.profundidad();

	cout << endl;
} 


