//**************************************************************************************//
// 					Plantilla Proyecto Vacio C++ v2.0 26/10/2022					    //
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
#include <locale.h>													// Libreria que contiene la funcion setlocale

using namespace std;												//Evitamos escribir std al utilizar la biblioteca/Libreria standard

struct carro
{
	string marca;
	string modelo;
	int año;
};

struct persona
{
	string nombre;
	string apellido;
	int edad;
};

int main()
{
	setlocale(LC_ALL, "");											// Uso de la funcion setlocale detecta el idioma del sistema operativo del dispositivo donde se ejecuta.
	setlocale(LC_ALL, "spanish");									// Por defecto se usara el idioma establecido "spanish".

	carro micarro1;
	micarro1.marca = "Fiat";
	micarro1.modelo = "Bonito";
	micarro1.año = 2021;

	cout << "Tengo un carro marca " << micarro1.marca << endl;
	cout << "Tengo un carro modelo " << micarro1.modelo << endl;
	cout << "Tengo un carro del año " << micarro1.año << endl;

	cout << "\n";

	persona persona1;
	persona1.nombre = "Mario";
	persona1.apellido = "Hernandez";
	persona1.edad = 20;

	cout << "Nombre: " << persona1.nombre << endl;
	cout << "Apellido: " << persona1.apellido << endl;
	cout << "Edad: " << persona1.edad << endl;

	return 0;
}