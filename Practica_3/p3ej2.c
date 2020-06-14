/*****************************************************
 *
 * Segundo ejemplo de programa escrito en C:
 * Calcula el doble de un n�mero que se pide por teclado
 *
 * Autora: Maria Isabel Dorta Gonzalez
 * Fecha: 17.Octubre.2019  
 *
**********************************************************/

#include <stdio.h>

int numero; /* Variable que contendr� el n�mero a doblar */

/* Funci�n 'main': funci�n principal del programa. En este punto
 * comienza la ejecuci�n. */
int main(void)
{
   printf("Introduzca el n�mero que quiera doblar: ");
   scanf("%d", &numero);

   numero = numero * 2;

   printf("El doble del n�mero es : %d\n", numero);
}