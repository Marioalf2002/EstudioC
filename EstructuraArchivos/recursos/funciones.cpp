//*************************//
//         FUNCIONES       //
//*************************//

#include "funciones.h"					//Se llama al arvhico que contiene los parametros necesitados

namespace funcion {
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
}