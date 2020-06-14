//Práctica 5 Informatica Basica Ejercicio1
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/*Se dispone de la siguiente información sobre material fungible:
código, nombre y precio. Dado que el precio no se ha actualizado en varios años,
hay que aplicar un incremento de 15% a cada uno de los precios del material
almacenado en la base de datos. Se pide implementar un programa en C que
haciendo uso de los tipos de datos compuestos solicite al usuario la información
para 3 materiales y, a continuación muestre los datos de dichos materiales con
los precios actualizados.*/

#include <stdio.h>

typedef struct
{
    int codigo;
    char nombre[100];
    float precio;
    float incremento;
} d_informacion;

d_informacion datos[3];

int main(void)
{

    printf("----Introducimos los valores del primer material----\n");
    printf("Introduzca el nombre del primer material: ");
    scanf("%[^\n]", datos[0].nombre);
    printf("Introduzca el codigo del primer material: ");
    scanf("%d", &datos[0].codigo);
    printf("Introduzca el precio del primer material: ");
    scanf("%f", &datos[0].precio);
    getchar();

    printf("\n----Introducimos los valores del segundo material----\n");
    printf("Introduzca el nombre del segundo material: ");
    scanf("%[^\n]", datos[1].nombre);
    printf("Introduzca el codigo del segundo material: ");
    scanf("%d", &datos[1].codigo);
    printf("Introduzca el precio del segundo material: ");
    scanf("%f", &datos[1].precio);
    getchar();

    printf("\n----Introducimos los valores del tercer material----\n");
    printf("Introduzca el nombre del tercer material: ");
    scanf("%[^\n]", datos[2].nombre);
    printf("Introduzca el codigo del tercer material: ");
    scanf("%d", &datos[2].codigo);
    printf("Introduzca el precio del tercer material: ");
    scanf("%f", &datos[2].precio);

    printf("\n");
    printf("----ACTUALIZACION DE LOS PRECIOS DE LOS MATERIALES----");
    datos[0].incremento = datos[0].precio * 15 / 100 + datos[0].precio;
    printf("\nEl material -%s- tiene costo de: %f", datos[0].nombre, datos[0].incremento);

    datos[1].incremento = datos[1].precio * 15 / 100 + datos[1].precio;
    printf("\nEl material -%s- tiene costo de: %f", datos[1].nombre, datos[1].incremento);

    datos[2].incremento = datos[2].precio * 15 / 100 + datos[2].precio;
    printf("\nEl material -%s- tiene costo de: %f", datos[2].nombre, datos[2].incremento);
}