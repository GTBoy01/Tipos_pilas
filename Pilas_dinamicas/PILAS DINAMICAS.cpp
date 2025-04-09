#include <iostream> //libreria para entradas y salida de datos
using namespace std;

struct nodo {
	int dato;
	nodo* siguiente;
};

class piladinamica {  //aqui se declara la clse de forma dinamica 
private:
	nodo* cima; //apunta al nodo en la cima de la pila 

public:
	piladinamica() : cima(nullptr) {} //contructor inicializa la cim por nullptr

	~piladinamica() {  //destructor
		while (cima != nullptr) {  //ciclo while mientras la cima no sea null
			pop(); //elimina el nodo
		}
	}

	void push(int valor) { //agrega un nodo a la pila
		nodo* nuevo = new nodo;   // nodo nuevo
		nuevo->dato = valor;  //asignar el valor al nodo
		nuevo->siguiente = cima;  ///asignar el siguiente nodo
		cima = nuevo;  //asignar el nuevo nodo a ala cima
	}
	int pop() {  // eliminar nodo a la cima 
		if (cima == nullptr) {   //funcion if para verificar si cima es igual a null
			cout << "pila vacia (underflow)." << endl;  //imprime mensaje de error
			return -1;  //cuando la pila esta vacia retorna -1
		}
		nodo* temp = cima;  //almacena el nodo en la cima
		int valor = temp->dato; // almacena el dato en la cima
		cima = cima->siguiente; //asigna el siguiente nodo a la cima
		delete  temp; //elimina el nodo
		return  valor; //retornar valor
	}

	int peek() const {   //verificar el nodo en la cima
		if (cima == nullptr)  //verificar si la cima es null
		{
			cout << "pila vacia. " << endl; //imprimir mensaje de pila vacia
			return -1; // retornar -1

		}
		return cima->dato; //si no es null retornar el dato a la cima
	}
};

int main() {  //funcion principal
	piladinamica pila;   //crear objeto de la clase 
	pila.push(100);  // agregar un nodo a la pila
	pila.push(200); //agregar un nodo a la pila 
	pila.push(300); //
	cout << "elemento en la cima: " << pila.peek() << endl;  //imprime el elementeo en la cima
	cout << "elemento eliminado: " << pila.pop() << endl;   //imprime elemento eliminado 
	cout << "elemento eliminado: " << pila.pop() << endl; //imprime elemento eliminado
	return 0;
}