//******************************************************//
//         TUTORIAL C++ Ejecucion cada X Tiempo         //
//******************************************************//

#include <iostream>
#include <time.h>

using namespace std;

int main(void)
{
    clock_t start, diff;
    int elapsedsec;
    int sec = 5;                                            //Se Ejecutara cada 5 segundos
    int iterations = 0;

    while (iterations < 5) {
        start = clock();

        while (1) {
            diff = clock() - start;
            elapsedsec = diff / CLOCKS_PER_SEC;

            if (elapsedsec >= sec) {
                /*algo para hacer*/
                cout << "Hola." <<endl;

                iterations++;
                break;
            }
        }
    }

    return 0;
}