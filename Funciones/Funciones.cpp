//***************************************//
//         TUTORIAL C++ FUNCIONES        //
//***************************************//

#include <iostream>
#include <time.h>																						//Llamada a la libreria time (Lee el Reloj del Sistema)

using namespace std;


void imprimir(string texto)																				//Funcion Imprimir en pantalla
{
	cout << texto << endl;
}

int consultar(string consulta)																			//Funcion Consultar
{
	int numero;
	cout << consulta << " ";
	cin >> numero;
	return numero;
}

void imprimir(string texto, int valor)																	//Sobrecarga de Funcion
{
	cout << texto << " " << valor << endl;
}

void inicializar()																						//Funcion inicializar
{
	srand(time(NULL));
}

int aleatorio()																							//Funcion valor aleatorio
{
	int valor = rand();																					//Rand encargada de mandar un numero aleatorio
	return valor;
}

int aleatoriorango(int minimo, int rango)																//Funcion valor aleatorio
{
	int valor = minimo + rand() % (rango);																//Rand encargada de mandar un numero aleatorio
	return valor;
}

int main()																								//Programa principal
{

	imprimir("Este texto se imprime en pantalla");														//Se llama la funcion y se le da el valor/parameto que necesita
	imprimir("Otro texto");

	int valor;
	valor = consultar("Ingrese un numero");

	imprimir("Su valor ingresado es", valor);

	inicializar();
	imprimir("Numero aleatorio generado:", aleatorio());
	imprimir("Numero aleatorio generado:", aleatorio());

	imprimir("Numero aleatorio generado entre 1 y 10:", aleatoriorango(1, 10));							//Primer numero desde donde se inicial y Segundo numero el rango de numero en adelante
	imprimir("Numero aleatorio generado entre 1 y 100:", aleatoriorango(1, 100));
	imprimir("Numero aleatorio generado entre 50 y 60:", aleatoriorango(50, 10));						//Ejemplo inicia en 50 se le da rango de 10 asi que imprimi entre el rango de 50 a 60
	
	return 0;
}