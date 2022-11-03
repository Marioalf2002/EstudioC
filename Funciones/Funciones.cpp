//***************************************//
//         TUTORIAL C++ FUNCIONES        //
//***************************************//

#include <iostream>
#include <time.h>																						//Llamada a la libreria time (Lee el Reloj del Sistema)

using namespace std;

void imprimir(string texto)																				//Funcion Imprimir en pantalla
{
	cout << texto << endl;
}

int consultar(string consulta)																			//Funcion Consultar
{
	int numero;
	cout << consulta << " ";
	cin >> numero;
	return numero;
}

void imprimir(string texto, int valor)																	//Sobrecarga de Funcion
{
	cout << texto << " " << valor << endl;
}

void inicializar()																						//Funcion inicializar
{
	srand(time(NULL));
}

int aleatorio()																							//Funcion valor aleatorio
{
	int valor = rand();																					//Rand encargada de mandar un numero aleatorio
	return valor;
}

int aleatoriorango(int minimo, int rango)																//Funcion valor aleatorio
{
	int valor = minimo + rand() % (rango);																//Rand encargada de mandar un numero aleatorio
	return valor;
}

void leer(int V[1], int n)
{
	for (int x = 0; x < n; x++)
	{
		cout << "Ingrese un numero en la posicion {" << x << "]: ";
		cin >> V[x];
	}
}
void sumar(int V[1], int n)
{
	int suma = 0;
	cout << "\nLos numeros que va a sumar son: \n";
	for (int x = 0; x < n; x++)
	{
		cout << "Numero en la posicion: [" << x << "] es: " << V[x] << endl;
	}
	cout << "\nSUMA\n";
	for (int x = 0; x < n; x++)
	{
		suma = V[x] + suma;
	}
	cout << "La suma total es: " << suma << endl;
}

void recibir(int V[100][100], int fila, int columna)
{
	for (int x = 0; x < fila; x++)
	{
		for (int y = 0; y < columna; y++)
		{
			cout << "Ingrese un numero en la fila [" << x << "] y columna [" << y << "]: ";
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
				cout << "Numero en la fila [" << x << "] y columna [" << y <<"] es " << V[x][y] << ", Es Divisible por 5." << "\n";
			}
			else
			{
				cout << "Numero en la fila [" << x << "] y columna [" << y <<"] es " << V[x][y] << ", No es Divisible por 5." << "\n";
			}
		}
	}
}

//VARIABLES CONSTANTES
int edad, cantidad_m, cantidad_h, n;
float pm = 0, ph = 0, sm = 0, sh = 0;
string nombre, apellido;
char sex;
void pacientes()
{
	cout << "Cantidad de Pacientes: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "\nPaciente #" << i << endl;
		cout << "Nombre: ";
		cin >> nombre;
		cout << "Apellido: ";
		cin >> apellido;
		cout << "Edad: ";
		cin >> edad;
		cout << "Sexo M/H: ";
		cin >> sex;
		if (sex == 'm' || sex == 'M')
		{
			cantidad_m = cantidad_m + 1;
			sm = sm + edad;
		}
		else if (sex == 'h' || sex == 'H')
		{
			cantidad_h = cantidad_h + 1;
			sh = sh + edad;
		}
		else
		{
			cout << "dato ingresado como sexo no valido (" << sex << ")"
				<< endl;
			cout << "Vuelva a ingresar el Paciente.\n";
			i--;
		}
	}
}
void promedio()
{
	pm = sm / cantidad_m;
	ph = sh / cantidad_h;
	cout << "\nPromedio Edad Hombres: " << ph << endl;
	cout << "Promedio Edad Mujeres: " << pm << endl;
}

void adios()
{
	cout << "ADIOS! Has salido del programa!";
}
void suma()
{
	int n1, n2;
	cout << "\n========SUMA========\n";
	cout << "Primer numero: ";
	cin >> n1;
	cout << "Segundo numero: ";
	cin >> n2;
	cout << "la suma es: " << n1 + n2;
	cout << "\n======================\n\n";
}
void resta()
{
	int n1, n2;
	cout << "\n========RESTA========\n";
	cout << "Primer numero: ";
	cin >> n1;
	cout << "Segundo numero: ";
	cin >> n2;
	cout << "la resta es: " << n1 - n2;
	cout << "\n======================\n\n";
}
void multiplicacion()
{
	int n1, n2;
	cout << "\n========MULTIPLICACION========\n";
	cout << "Primer numero: ";
	cin >> n1;
	cout << "Segundo numero: ";
	cin >> n2;
	cout << "la multiplicacion es: " << n1 * n2;
	cout << "\n==============================\n\n";
}
void division()
{
	float division = 0, n1, n2;
	cout << "\n========DIVISION========\n";
	cout << "Primer numero: ";
	cin >> n1;
	cout << "Segundo numero: ";
	cin >> n2;
	division = n1 / n2;
	cout << "la division es: " << division;
	cout << "\n=======================\n\n";
}
void potencia()
{
	int n1, n2, pot = 1;
	cout << "\n========POTENCIA========\n";
	cout << "Numero: ";
	cin >> n1;
	cout << "Potencia: ";
	cin >> n2;
	for (int i = 1; i <= n2; i++)
	{
		pot = n1 * pot;
	}
	cout << "la potencia de " << n1 << " es: " << pot;
	cout << "\n======================\n\n";
}
void raiz()
{
	float raiz = 0, n1 = 0, n2 = 0;
	cout << "\n========RAIZ========\n";
	cout << "\nNumero: ";
	cin >> n1;
	cout << "Indice: ";
	cin >> n2;
	raiz = pow(n1, (1 / n2));
	cout << "Raiz " << n2 << " de " << n1 << " es: " << raiz;
	cout << "\n======================\n\n";
}


int main()																								//Programa principal
{

	imprimir("Este texto se imprime en pantalla");														//Se llama la funcion y se le da el valor/parameto que necesita
	imprimir("Otro texto");

	int valor;
	valor = consultar("Ingrese un numero");

	imprimir("Su valor ingresado es", valor);

	inicializar();
	imprimir("Numero aleatorio generado:", aleatorio());
	imprimir("Numero aleatorio generado:", aleatorio());

	imprimir("Numero aleatorio generado entre 1 y 10:", aleatoriorango(1, 10));							//Primer numero desde donde se inicial y Segundo numero el rango de numero en adelante
	imprimir("Numero aleatorio generado entre 1 y 100:", aleatoriorango(1, 100));
	imprimir("Numero aleatorio generado entre 50 y 60:", aleatoriorango(50, 10));						//Ejemplo inicia en 50 se le da rango de 10 asi que imprimi entre el rango de 50 a 60
	
	cout << "\n=========FUNCOINES CON VECTORES=========\n\n";
	int n;
	int vector[100];
	cout << "Tenga en cuenta que el limite maximo de numeros es 100.\n\n";
	cout << "Cuantos numeros quiere ingresar: ";
	cin >> n;
	leer(vector, n);
	sumar(vector, n);

	cout << "\n=========FUNCOINES CON MATRIZ=========\n\n";
	int fila = 0, columna = 0;
	int matriz[100][100];
	cout << "Tenga en cuenta que el limite maximo de filas y columnas es 100.\n\n";
		cout << "Ingresar cantidad de Filas: ";
	cin >> fila;
	cout << "Ingresar cantidad de Columnas: ";
	cin >> columna;
	cout << "\n";
	recibir(matriz, fila, columna);
	divisible(matriz, fila, columna);

	cout << "\n=========FUNCOINES DE REGISTRO PACIENTES=========\n\n";
	pacientes();
	promedio();

	cout << "\n=========FUNCOINES CON MENU=========\n\n";
	int op;
	do
	{
		cout << "Eliga una opcion\n";
		cout << "0.salir\n";
		cout << "1.Suma\n";
		cout << "2.Resta\n";
		cout << "3.Multiplicacion\n";
		cout << "4.Division\n";
		cout << "5.Potencia\n";
		cout << "6.Raiz\n\n";
		cout << "Opcion: "; cin >> op;
		switch (op)
		{
		case 0:
			adios();
			break;
		case 1:
			suma();
			break;
		case 2:
			resta();
			break;
		case 3:
			multiplicacion();
			break;
		case 4:
			division();
			break;
		case 5:
			potencia();
			break;
		case 6:
			raiz();
			break;
		default:
			cout << "Opcion no valida\n\n";
			break;
		}
	} while (op != 0);

	return 0;
}