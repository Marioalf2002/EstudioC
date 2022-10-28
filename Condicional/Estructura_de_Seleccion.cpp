//*****************************************************//
//         TUTORIAL C++ Estructura de Selección        //
//*****************************************************//

#include <iostream>

using namespace std;

int edad;

int main()
{
	  //***********************//
	 //        IF / SI        //
	//***********************//

	cout << "Ingrese su edad actual: ";
	cin >> edad;

	if (edad >= 18)
	{
		cout << "Eres mayor de edad" << endl;
	}

	cout << "-------------------------//-------------------------" << endl;

	  //********************************//
	 //        IF  ELSE / SI SINO      //
	//********************************//
	
	cout << "Ingrese su edad actual: ";
	cin >> edad;

	if (edad >= 18)
	{
		cout << "Eres mayor de edad" << endl;
	} else	{
		cout << "Eres menor de edad" << endl;
	}

	cout << "-------------------------//-------------------------" << endl;

	  //********************************//
	 //        OPERADORES LOGICOS      //
	//********************************//

	cout << "Ingrese su edad actual: ";
	cin >> edad;

	if ((edad >= 18) && (edad < 26))													//OR = ||, AND = &&, NOT = !
	{
		cout << "Eres un joven mayor de edad" << endl;
	}

	cout << "-------------------------//-------------------------" << endl;

		//*******************************//
	   //        CONDICION ANIDADA      //
	  //*******************************//

	cout << "Ingrese su edad actual: ";
	cin >> edad;

	if (edad >= 18)
	{
		if (edad < 26)
		{
			cout << "Eres un joven mayor de edad" << endl;
		}
	}

	cout << "-------------------------//-------------------------" << endl;

	//*****************************************//
   //        SWITCH CASE / CAMBIAR CASOS     //
  //*****************************************//

	int numero;

	cout << "Ingrese un numero: ";
	cin >> numero;

	switch (numero)
	{
	case 1:
		cout << "El valor es uno." << endl;
		break;
	case 2:
		cout << "El valor es dos." << endl;
		break;
	case 3:
		cout << "El valor es tres." << endl;
		break;
	default:
		cout << "el valor es mayor a tres." << endl;
	}

	return 0;
}