//************************************************//
//         TUTORIAL C++ Estructura Archivos       //
//************************************************//
// Version 1.0									  //
// Prueba Creacion de Juego Adivinanza			  //
// 15/09/2022									  //
// Creacion										  //
//************************************************//

#include "../recursos/funciones.h"							//Se llama al arvhico que contiene los parametros necesitados
using namespace funcion;									//Se puede usar el namespace creado o iniciarlo en cada funcion requerida funcion::

int main()
{
	funcion::inicializar();
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