//*******************************************************//
//         TUTORIAL C++ Variables/Tipos de Datos         //
//*******************************************************//


#include <iostream>													//Biblioteca/libreria para entradas y salidas de datos

using namespace std;												//Evitamos escribir std al utilizar la biblioteca/Libreria standard

int entero = 10;													//Valores Numeros Enteros
float flotante = 5.5468;												//Valores decimales Float
double doble = 4.7482;												//Valores decimales double
char caracter = 'C';												//Vecto de Caracteres maximo 4 caracteres
string cadena = "Hola mundo";										//Cadena de Caracteres Dinamicos
bool booleano = true;												//Valores Booleados (False/True)

int main()
{
	std::cout << "TUTORIAL DE C++" << endl;

	cout << "Numeros Enteros Int: " << entero << endl;				//Imprimir Texto mas variable y salto de linea (endl) / t tabulador /
	cout << "Numeros Decimal Float: " << flotante << endl;
	cout << "Numeros Decimal Double: " << doble << endl;
	cout.precision(3);												//Cantidad de # a mostrar en Decimales, Colocar antes de la imprición de la variable.
	cout << "Mostrar una cantida de numero decimal: " << flotante << endl;
	cout << "Numeros Decimal Double: " << doble << endl;
	cout << "Caracteres Char: " << caracter << endl;
	cout << "Cadena de Caracteres String: " << cadena << endl;
	cout << "Booleanos Bool: " << booleano << endl;

	cin.get();														//Esperar ENTER (señal de tecla)
	return 0;														//Salida del programa con retorno 0
}