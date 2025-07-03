//Tipos y tamalos de datos

//char:     Un caràcter, un solo byte. 
//int:      Un entero, tamaño natural dee los enteros.
//float:    Punto flotante de presiciòn normal.
//double:   Punto flotante de doble precisiòn.


//Calificadores

//short int:    16 bits.
//long int.     32 bits.


//signed o unsined// 

/*Determina si la maquina toma o no el signo, 
asì, por ejemplo: los char son 8 bits, en tanto que las 
variables unsigned tiene valores entre 0 y 255. 
*/

//Ver capacidad
#include <stdio.h>

int main() {
    printf("Tamaño de: %zu bytes\n", sizeof(float));
    return 0;
}
