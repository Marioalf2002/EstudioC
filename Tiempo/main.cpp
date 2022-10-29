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