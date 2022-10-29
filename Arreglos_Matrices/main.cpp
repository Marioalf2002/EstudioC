//***********************************************//
//         TUTORIAL C++ Arreglos/Marices         //
//***********************************************//

#include <iostream>
using namespace std;

int main()
{
	
	int M[3] = { 1, 2, 3 };														//arreglo de 3 espacios.
	int N[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };							    //cantidad filas y columnas una matriz de 3*3 Filas = {}{}{} Columnas = 1,2,3  
	int k[4][2] = { {1,2}, {3,4}, {5,6}, {7,8} };

	cout << "Elemento de la matriz es: " << N[0][1] << endl;

	for (int i = 0; i < 4; i++) {												//Imprimir toda una matriz i=filas j=columna
		cout << "Elemento de la matriz ";
		for (int j = 0; j < 2; j++) {
			cout << i << j << " es: " << k[i][j] << " ";
		}
		cout << endl;
	}

	//AGREGAR VALORES A LA MATRIZ
	cout << "\nAGREGAR VALORES A AL MATRIZ\n";
	int fila = 0, columna = 0;
	cout << "Ingresar cantidad de Filas: ";
	cin >> fila;
	cout << "Ingresar cantidad de Columnas: ";
	cin >> columna;

	int L[1][1];

	for (int i = 0; i < fila; i++) {												//Imprimir toda una matriz i=filas j=columna
		for (int j = 0; j < columna; j++) {
			cout << "Porfavor ingrese elemento en la fila " << i << " y Columna " << j << ": ";
			cin >> L[fila][columna];
		}
	}
	cout << "\nMATRIZ\n";

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < columna; j++) {
			cout << L[i][j] << " ";
		}
		cout << endl;
	}

	//SUMA DE MATRICES POR POSICION EN OTRA MATRIZ
	cout << "\nSUMA DE MATRICES POR POSICION EN OTRA MATRIZ\n";
	int vector_1[8];
	int vector_2[8];
	int vector_3[8];
	int f, vec1, vec2;

	cout << "Ingresar cantidad de numeros que desea en el vector 1: ";
	cin >> vec1;

	for (f = 0; f < vec1; f += 1) {
		cout << "valor posicion " << f << ": ";
		cin >> vector_1[f];
	}
	cout << endl;

	cout << "Ingresar cantidad de numeros que desea en el vector 2: ";
	cin >> vec2;
	for (f = 0; f < vec2; f += 1) {
		cout << "valor posicion " << f << ": ";
		cin >> vector_2[f];
	}
	if (vec1 == vec2)
	{
		cout << "\n";
		for (f = 0; f < vec1; f += 1) {
			vector_3[f] = vector_1[f] + vector_2[f];
		}
		for (f = 0; f < vec1; f += 1) {
			cout << vector_1[f] << " " << vector_2[f] << " " << vector_3[f] << endl;
		}
	}
	else {
		cout << "\n";
		cout << "NO SE PUEDEN SUMAR PORQUE LOS VECTORES NO SON DE IGUAL TAMAÑO" << endl;
	}

	//IMPRIMIR DIAGONALES DE UNA MATRIZ
	cout << "\nIMRIMIR DIAGONALE\n";
	int a, b, fi, c, matriz[100][100];

	cout << "Ingresa el numero de filas de la matriz:";
	cin >> fi;

	cout << "Ingresa el numero de columnas de la matriz : ";
	cin >> c;

	if (fi > 0 && c > 0) {
		if (fi == c) {
			for (a = 0; a < fi; a++) {
				for (b = 0; b < c; b++) {
					cout << "Ingresa un numero en posicion "<<a<<" "<<b<<": ";
					cin >> matriz[a][b];
				}
			}

			cout << "\nMATRIZ\n";

			for (a = 0; a < fi; a++) {
				for (b = 0; b < c; b++) {
					cout << matriz[a][b] << " ";
				}
				cout << endl;
			}

			cout << "DIAGONAL PRINCIPAL:\n";

			for (a = 0; a < fi; a++) {
				cout << matriz[a][a] << " ";
				b--;
			}

			cout << endl;

			b = c - 1;

			cout << "DIAGONAL SEGUNDARIA:\n";

			for (a = 0; a < fi; a++) {
				cout << matriz[a][b] <<" ";
				b--;
			}
		}
		else
		{
			cout << "NO SE PUEDE HACER LA OPERCION PORQUE SON DIFERENTES.\n";
		}
	}
	return 0;
}