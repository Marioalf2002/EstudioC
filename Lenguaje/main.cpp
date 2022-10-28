//**************************************************************************************//
// 					Plantilla Proyecto Vacio C++ v1.0 15/09/2022					    //
//**************************************************************************************//
//																						//
//	General		>	Dir Salida			> $(SolutionDir)\Bin							//
//				>	Dir Intermedio		> $(SolutionDir)\Tmp							//
//				>	Nomb Destino		> $(ProjectName)			(Release / 64)		//
//				>	Nomb Destino		> $(ProjectName)_d			(Debug / 64)		//
//				>	Nomb Destino		> $(ProjectName)_32			(Release / 32)		//
//				>	Nomb Destino		> $(ProjectName)_32d		(Debug / 32)		//
//																						//
//	Avanzado	>	Juego de Caract		> Multibyte										//
//	C/C++		>	General				> Comp Multiproc		> Si					//
//				>	Optimizacion		> Tamaño o velocidad	> Codigo Rapido			//
//				>	Gen de Codigo		> Bit en tiempo de ej.	> MT (Release)			//
//				>						> Bit en tiempo de ej.	> MTd (Debug)			//
//				>						> Modelo de punt fl		> Rapido				//
//				>	Idioma				> Estandar del Leng.	> Ultimo Borrador		//
//																						//
//**************************************************************************************//

#include <iostream>
#include <cstdlib>			// contiene la funcion system("pause")
#include <locale.h>			// Libreria que contiene la funcion setlocale

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); // Uso de la funcion setlocale detecta el idioma del sistema operativo del dispositivo donde se ejecuta.
	setlocale(LC_ALL, "spanish"); // Por defecto se usara el idioma establecido "spanish".

	cout << "ñuá" << endl; // Imprimimos por pantalla cualquier caracter hispano

	system("pause");	// Se pausa el programa esperando una señal para continuar.
	return 0;
}