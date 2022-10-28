#pragma once

//*************************//
//         FUNCIONES       //
//*************************//


#include <iostream>
#include <time.h>

using namespace std;

namespace funcion {
	int consultar(string consulta);														//Se puede crear las funciones al de bajo y ser llamadas por su nombre arriba asi los procesos detectan la informacion
	void imprimir(string texto, int valor);												//de lo contrario al dejarse por debajo de los procesos no funcionara.
	void imprimir(string texto);
	void inicializar();
	int aleatoriorango(int minimo, int rango);
}