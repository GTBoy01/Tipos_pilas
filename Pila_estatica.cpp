//Codigo Lista estatica
#include <iostream>
using namespace std; //Uso de nombres estandar (evitar el uso de std::)

class PilaEstatica { //Creacion y estructura de la clase PilaEstatica
private: //Atributos privados de la clase (Se pueden leer solo dentro de la clase)
static const int MAX = 10; //Declaracion de constante tipo entera MAX
int arr [MAX]; //Creacion de pila (array) con el tamaño dado por MAX
int top; //Declaracion de variable tipo entera top

public: //Atributos publicos de la clase
PilaEstatica () : top (-1) {} //Constructor de la pila
bool push (int valor) { //Funcion booleana con la variable valor
    if (top >= MAX -1){ //Ciclo if, corre si la variable top es igual o mayor a Max (con valor MAX -1)
        cout << "Pila está llena (overflow). " << endl; //Impresion en pantalla
        return false; //Retorna falso a la funcion booleana
    }
    arr [++top] = valor; //Suma 1 posicion al top y toma los datos de valor
    return true; //Retorna verdadero a la funcion booleana
}

int pop () { //Funcion para eliminar datos de la pila
    if (top < 0) { //Ciclo if, corre si top tiene un valor menor a 0
        //Impresion en pantalla, le indica al usuario que la pila esta vacia
        cout << "Pila esta vacia (underflow). " << endl; 
        return -1; //Retorna -1 indicando que ocurrio un error
    }
    return arr [top--]; //Si top tiene un valor mayor a 0, entonces le resta 1
}

int peek() const { //Creacion y estructura de la funcion peek, busca el valor de la cima  
    if (top < 0) { //Ciclo if, corre si top tiene un valor menor a 0
        //Impresion en pantalla, le indica al usuario que la pila esta vacia
        cout << "Pila vacia." << endl; 
        return -1; //Retorna valor -1, indicando que ocurrio un error
    }
    return arr[top]; //Si top tiene un valor mayor a 0, devuelve el valor de top
}
};

int main () { //Estructura principal del programa
    PilaEstatica pila; //Invocacion de la funcion PilaEstatica
    pila.push(10); //Ingreso de dato nuevo a la pila
    pila.push(20); //Ingreso de dato nuevo a la pila
    pila.push(30); //Ingreso de dato nuevo a la pila
    //Imprime el mensaje junto con el valor que quedó mas alto en la pila
    cout << "Elemento en la cima: " << pila.peek() << endl; 
    //Imprime el mensaje junto con el valor eliminado (30)
    cout << "Elemento eliminado: " << pila.pop() << endl;
    //Imprime el mensaje junto con el valor eliminado (20)
    cout << "Elemento eliminado: " << pila.pop() << endl;
return 0;
//FINAL DEL CODIGO
}