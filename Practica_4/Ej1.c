//Práctica 4 Informatica Basica Ejercicio1
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/*Implementar un programa que solicite dos números por teclado y
muestre por pantalla el resultado de sumar y el de restar dichos números.*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    int resultsuma, resultresta;

    printf("----Programa para sumar y restar dos numeros enteros----\n");
    printf("Introduzca el primer numero: ");
    scanf("%i", &num1);
    printf("Introduzca el segundo numero: ");
    scanf("%i", &num2);

    resultsuma = num1 + num2;
    resultresta = num1 - num2;

    printf("El resultado de la suma es: %i\n", resultsuma);
    printf("El resultado de la resta es: %i\n", resultresta);
}
