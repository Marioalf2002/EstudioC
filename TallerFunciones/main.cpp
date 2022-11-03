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
using namespace std;
void leer(int V[100][100], int fila, int columna)
{
	for (int x = 0; x < fila; x++)
	{
		for (int y = 0; y < columna; y++)
		{
			cout << "Ingrese un numero en la fila " << x << " y columna " << y
				<< ": ";
			cin >> V[x][y];
		}
	}
	cout << "\n";
}
void divisible(int V[100][100], int fila, int columna)
{
	for (int x = 0; x < fila; x++)
	{
		for (int y = 0; y < columna; y++)
		{
			if ((V[x][y] % 5) == 0)
			{
				cout << "Numero en la fila [" << x << "] y columna [" << y <<
					"] es " << V[x][y] << ", Es Divisible por 5." << "\n";
			}
			else
			{
				cout << "Numero en la fila [" << x << "] y columna [" << y <<
					"] es " << V[x][y] << ", No es Divisible por 5." << "\n";
			}
		}
	}
}
int main()
{
	int fila = 0, columna = 0;
	int vector[100][100];
	cout << "Tenga en cuenta que el limite maximo de filas y columnas es 100.\n\n";
		cout << "Ingresar cantidad de Filas: ";
	cin >> fila;
	cout << "Ingresar cantidad de Columnas: ";
	cin >> columna;
	cout << "\n";
	leer(vector, fila, columna);
	divisible(vector, fila, columna);
	return 0;
}


