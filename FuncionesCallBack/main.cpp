//**********************************************************************//
// 					Tutorial C++ Funciones CallBack					    //
//**********************************************************************//

#include <iostream>
using namespace std;

int suma(int a, int b)
{
	return a + b;
}

int resta(int a, int b)
{
	return a - b;
}

int multiplicacion(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}

void calcular(int(*funcion)(int, int), int val_a, int val_b)
{
	int resul;
	resul = funcion(val_a, val_b);
	cout << "Resultado: " << resul << endl;
}

int main()
{
	cout << "Funciones en CallBack" << endl;
	cout << endl;

	calcular(*suma, 10, 20);
	calcular(*resta, 10, 20);
	calcular(*multiplicacion, 10, 20);
	calcular(*division, 10, 20);
	cout << endl;
	
	int (*var_funcion)(int, int);

	var_funcion = suma;
	calcular(var_funcion, 10, 20);
	
	var_funcion = resta;
	calcular(var_funcion, 10, 20);

	var_funcion = multiplicacion;
	calcular(var_funcion, 10, 20);

	var_funcion = division;
	calcular(var_funcion, 10, 20);

	return 0;
}