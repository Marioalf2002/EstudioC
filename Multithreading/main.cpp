//*********************************************//
//         TUTORIAL C++ Multithreading         //
//*********************************************//

#include <iostream>
#include <thread>													//Libreria para creacion de hilos
#include <chrono>													//Libreria para cronometro

using namespace std;												//Evitamos escribir std al utilizar la biblioteca/Libreria standard

void showdata(int *a, int *b)
{
	while (true)
	{
		cout << "Data1: " << *a << endl;
		cout << "Data2: " << *b << endl;
		cout << "----------------" << endl;
		this_thread::sleep_for(500ms);								//tiempo de ejecucion 500ms(medio segundo)
	}
}

void updatedata(int *a, int *b)
{
	while (true)
	{
		*a = *a + 1;
		*b = *b + 1;
		this_thread::sleep_for(2000ms);								//tiempo de ejecucion 2000ms(2 segundos)
	}
}

int main()
{
	int data1 = 0;
	int data2 = 1;

	thread job1(showdata, &data1, &data2);
	thread job2(updatedata, &data1, &data2);

	job1.join();
	job2.join();

	return 0;
}