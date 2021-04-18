
#include <iostream>

// Definicion del Arbol Nodo
template< typename NODETYPE >
class TreeNode
{
	public:
		// constructor
		TreeNode( const NODETYPE &d )
		: leftPtr( nullptr ), // apuntador izquiero
		data( d ), // data
		rightPtr( nullptr ) // apuntador derecho
		{
			// vacio
		} 
		
			
		TreeNode< NODETYPE > *leftPtr; // apuntador izquiero
		NODETYPE data;
		TreeNode< NODETYPE > *rightPtr; // apuntador derecho
}; 

// Definicion de la clase arbol
template< typename NODETYPE > class Tree
{
	public:
		// constructor
		Tree()
		: rootPtr( nullptr ) { /* empty body */ }
		
		// Inserta nodos en el arbol
		void insertNode( const NODETYPE &value )
		{
			insertNodeHelper( &rootPtr , value );
		} 
		
		// Realiza el chequeo de la data introducida en el arbol
		void preOrderTraversal() const
		{
			preOrderHelper( rootPtr );
		} 
		
		// cuenta el numero de nodos
		void numNodos() const
		{
			std::cout << numNodosHelper( rootPtr );
		} 
		
		// cueanta el numero de hojas
		void numHojas() const
		{
			std::cout << (numNodosHelper( rootPtr )-numHojasHelper( rootPtr ));
		} 
		
		// cuenta la profundidad del arbol
		void profundidad() const
		{
			std::cout << profundidadHelper( rootPtr );
		} 
		
		
		
	private:
		TreeNode< NODETYPE > *rootPtr;
		
		// Utilizada para recibir un apuntador y modificar la data
		void insertNodeHelper(
		TreeNode< NODETYPE > **ptr , const NODETYPE &value )
		{
			// Si esta vacio crea un nuevo nodo
			if ( *ptr == nullptr )
				*ptr = new TreeNode< NODETYPE >( value );
			else // si no esta vacio
			{
				// Si la data es menor se inserta
				if ( value < ( *ptr )->data )
					insertNodeHelper( &( ( *ptr )->leftPtr ), value );
				else
				{	//Si la data es menor se inserta
					if ( value > ( *ptr )->data )
						insertNodeHelper( &( ( *ptr )->rightPtr ), value );
					else // se ignoran los duplicados
						std::cout << value << " duplicated" << std::endl;
				} 
			} 
		} 
		
		
		// Se imprime el arbol 
		void preOrderHelper ( TreeNode< NODETYPE > *ptr ) const
		{
			if ( ptr != nullptr )
			{
				std::cout << ptr->data << ' ';
				std::cout << ptr << ' '; 
				std::cout << ptr->leftPtr << ' '; 
				std::cout << ptr->rightPtr << ' '<< std::endl; 
				preOrderHelper( ptr->leftPtr ); // atraviesa la izquierda
				preOrderHelper( ptr->rightPtr ); // atraviesa la derecha
			} 
		} 
		
		// cuenta todos los nodos del arbol a medida que pasa por ellos
		int numNodosHelper ( TreeNode< NODETYPE > *ptr ) const
		{
			int count=0;
			
			if ( ptr != nullptr )
			{
				count=1;
				
				count = count + numNodosHelper( ptr->leftPtr ); 
				count = count + numNodosHelper( ptr->rightPtr );
				
			}
			
			return count;
			
		} 
		
		// cuenta las hojas del arbol. En este caso fallo la logica de == me toco hacerla con != 
		//y restarla del total
		int numHojasHelper ( TreeNode< NODETYPE > *ptr ) const
		{
			int count=0;
			
			if ( ptr != nullptr )
			{
				
				if ( ((ptr->leftPtr) != nullptr)||((ptr->rightPtr) != nullptr)){
				count=1;
				count = count + numHojasHelper( ptr->leftPtr ); // traverse left subtree
				count = count + numHojasHelper( ptr->rightPtr );// traverse right subtree
				}
				
			} // end if
			
			return count;
			
		} 	
		
		
		// cuenta la  profundidad del lado derecho y el izquierdo
		int profundidadHelper ( TreeNode< NODETYPE > *ptr ) const
		{
			int countl=0;
			int countr=0;
			
			if ( ptr != nullptr )
			{
				countl=1;
				countr=1;
				
				countl = countl + profundidadHelper( ptr->leftPtr ); 
						
				countr = countr + profundidadHelper( ptr->rightPtr );
				
			} // end if
			
			if (countl > countr)			
				return countl;
			else return countr;
			
			
		}
			
			
		
		
}; // end class Tree



