//**************************************************************//
//         TUTORIAL C++ Ciclos/Repeticiones-Iteraciones        //
//************************************************************//

#include <iostream>

using namespace std;

int main()
{
		 //*******************************//
		//        WHILE / MIENTRAS       //
	   //*******************************//

	int dato = 0;

	while (dato <= 10)
	{
		cout << "Ingrese un valor, mayor a 10 para salir: ";					//imprimir en pantalla
		cin >> dato;															//Pedir un valor a la variable y lo almacene
		cout << "Valor ingresado: " << dato << endl;
	}

	cout << "Fin del Loop/Cycle While" << endl;

	cout << "-------------------------//-------------------------" << endl;

		//****************************************//
	   //        DO WHILE /HACER MIENTRAS        //
	  //****************************************//

	int valor;
	
	do
	{
		cout << "Ingrese un valor, 0 para salir: ";
		cin >> valor;
		cout << "Valor ingresado: " << valor << endl;
	} while (valor != 0);

	cout << "Fin del Loop/Cycle Do While" << endl;

	cout << "-------------------------//-------------------------" << endl;

	  //************************//
	 //       FOR / PARA       //
	//************************//

	for (int i = 1; i <= 10; i = i + 1)			//for(desde;hasta;pasos){}
	{
		cout << "El valor de i es: " << i << endl;
	}

	cout << "Fin del Loop/Cycle For" << endl;

	cout << "-------------------------//-------------------------" << endl;

	return 0;
}