//***********************************************//
//         TUTORIAL C++ Arreglos/Marices         //
//***********************************************//


#include <iostream>
using namespace std;

int main()
{
	int M[3] = { 1, 2, 3 };														//arreglo de 3 espacios.
	int j[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };							    //cantidad filas y columnas una matriz de 3*3 Filas = {}{}{} Columnas = 1,2,3  
	int k[4][2] = { {1,2}, {3,4}, {5,6}, {7,8} };

	cout << "Elemento de la matriz: " << j[0][1] << endl;

	for (int i = 0; i < 4; i++) {												//Imprimir toda una matriz i=filas j=columna
		cout << "Elemento de la matriz ";
		for (int j = 0; j < 2; j++) {
			cout << i << j << " es: " << k[i][j] << " ";
		}
		cout << endl;
	}

	int fila = 0, columna = 0;
	cout << "Ingresar cantidad de Filas: ";
	cin >> fila;
	cout << "Ingresar cantidad de Columnas: ";
	cin >> columna;

	int L[1][1];

	for (int i = 0; i < fila; i++) {												//Imprimir toda una matriz i=filas j=columna
		for (int j = 0; j < columna; j++) {
			cout << "Porfavor ingrese elemento en la fila " << i << " y Columna " << j << ": " << endl;
			cin >> L[fila][columna];
		}
	}

	//SUMA DE MATRICES POR POSICION EN OTRA MATRIZ

	int array_1[8];
	int array_2[8];
	int array_3[8];
	int f, vec1, vec2;
	cout << "Ingresar cantidad de numeros que desea en el vector 1: ";
	cin >> vec1;
	for (f = 0; f < vec1; f += 1) {
		cout << "valor posicion " << f << ": ";
		cin >> array_1[f];
	}
	cout << endl;
	cout << "Ingresar cantidad de numeros que desea en el vector 2: ";
	cin >> vec2;
	for (f = 0; f < vec2; f += 1) {
		cout << "valor posicion " << f << ": ";
		cin >> array_2[f];
	}
	if (vec1 == vec2)
	{
		for (f = 0; f < vec1; f += 1) {
			array_3[f] = array_1[f] + array_2[f];
		}
		for (f = 0; f < vec1; f += 1) {
			cout << array_1[f] << " " << array_2[f] << " " << array_3[f] << endl;
		}
	}
	else {
		cout << "\n";
		cout << "NO SE PUEDEN SUMAR PORQUE LOS VECTORES NO SON DE IGUAL TAMAÑO" << endl;
	}

	return 0;
}