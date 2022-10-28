//**********************************************//
//         TUTORIAL C++ Juego Adivinanza        //
//**********************************************//

#include <iostream>
#include <time.h>

using namespace std;

int consultar(string consulta);														//Se puede crear las funciones al de bajo y ser llamadas por su nombre arriba asi los procesos detectan la informacion
void imprimir(string texto, int valor);												//de lo contrario al dejarse por debajo de los procesos no funcionara.
void imprimir(string texto);
void inicializar();
int aleatoriorango(int minimo, int rango);

int main()
{
	inicializar();
	int valor = aleatoriorango(1, 10);
	int ingreso;

	imprimir("Adivina el valor que estoy pensando entre 1 y 10");

	do {
		ingreso = consultar("Ingrese un valor");
		if (ingreso > valor)
		{
			imprimir("Mi valor es menor");
		}
		if (ingreso < valor)
		{
			imprimir("Mi valor es mayor");
		}
	} while (ingreso != valor);
	imprimir("Adivino! estaba pensando el valor", valor);

	return 0;
}

int consultar(string consulta)																			//Funcion Consultar
{
	int numero;
	cout << consulta << " ";
	cin >> numero;
	return numero;
}

void imprimir(string texto)																				//Funcion Imprimir en pantalla
{
	cout << texto << endl;
}

void imprimir(string texto, int valor)																	//Sobrecarga de Funcion
{
	cout << texto << " " << valor << endl;
}

void inicializar()																						//Funcion inicializar
{
	srand(time(NULL));
}

int aleatoriorango(int minimo, int rango)																//Funcion valor aleatorio
{
	int valor = minimo + rand() % (rango);																//Rand encargada de mandar un numero aleatorio
	return valor;
}