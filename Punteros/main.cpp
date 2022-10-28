//**************************************************************//
// 					TUTORIAL C++ Punteros					    //
//**************************************************************//

#include <iostream>

using namespace std;

void funcion(int val1, int& val2, int* val3)
{
	val1 = val1 + 10;
	val2 = val2 + 10;
	*val3 = *val3 + 10;
}

int division(int valor, int divisor, int& resto)
{
	resto = valor % divisor;
	return valor / divisor;
}

int main()
{
	int numero = 10;														//Declaracion de variable
	cout << "Valor de numero: " << numero << endl;							//Imprimir Variable
	cout << "Ubicacion de numero en memoria: " << &numero << endl;			//Imprimir Ubicaciones en Memoria
	cout << endl;

	int* p_numero = &numero;												//Almacenar Ubicaiones de Memoria	
	cout << "Valor del puntero numero: " << p_numero << endl;				//Imprime posicion en memoria del numero
	cout << "Ubicaiones de p_numero: " << &p_numero << endl;				//Imprime ubicaion en memoria de p_numero
	cout << endl;

	numero = 20;
	cout << "Valor en ubicacion: " << *p_numero << endl;					//Imprime valor en direccion de memoria
	cout << endl;

	numero = 10;															//Dar un valor a la variable
	int numero2 = 20;
	cout << "Valor de numero: " << numero << endl;							//Imprimir Variable
	cout << "Ubicacion de numero en memoria: " << &numero << endl;			//Imprimir Ubicaciones en Memoria
	cout << "Valor de numero: " << numero2 << endl;							//Imprimir Variable
	cout << "Ubicacion de numero en memoria: " << &numero2 << endl;			//Imprimir Ubicaciones en Memoria
	cout << endl;

	int numero3 = 30;
	int* p_numero3 = &numero3;
	funcion(numero, numero2, p_numero3);
	cout << "Valor de numero: " << numero << endl;							//Imprimir Variable
	cout << "Ubicacion de numero en memoria: " << &numero << endl;			//Imprimir Ubicaciones en Memoria
	cout << "Valor de numero: " << numero2 << endl;							//Imprimir Variable
	cout << "Ubicacion de numero en memoria: " << &numero2 << endl;			//Imprimir Ubicaciones en Memoria
	cout << "Valor de numero: " << numero3 << endl;							//Imprimir Variable
	cout << "Ubicacion de numero en memoria: " << &numero3 << endl;			//Imprimir Ubicaciones en Memoria
	cout << endl;

	int num;
	int divisor;
	int resultado;
	int resto;

	cout << "Ingrese un valor: ";
	cin >> num;
	cout << "Ingrese el divisor: ";
	cin >> divisor;
	
	resultado = division(num, divisor, resto);
	cout << "Resultado: " << resultado << endl;
	cout << "Resto: " << resto << endl;

	cin.get();
	return 0;
}
