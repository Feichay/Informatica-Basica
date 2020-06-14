//Práctica 6 Informatica Basica Ejercicio1
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/* Se dispone de la siguiente información sobre material fungible:
código, nombre y precio. Dado que el precio de los materiales almacenados en
la base de datos no se ha actualizado en varios años, hay que aplicar un
incremento de 35% a aquellos materiales cuyo precio sea inferior a 30 €, un
incremento de 20% a aquellos con precios comprendidos entre 30 € y 80 €
([30, 80)), un incremento de un 12% para los de precios entre 80 € y 200 €
([80, 200)),, y finalmente los materiales de precio superior o igual a 200 €
quedarán con el mismo precio. Se pide implementar un programa en C que
haciendo uso de las sentencias de control condicionales solicite al usuario la
información para 3 materiales y, a continuación muestre los datos de dichos
materiales con los precios actualizados.*/

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
    if (datos[0].precio < 30)
    {
        datos[0].incremento = datos[0].precio * 35 / 100 + datos[0].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[0].nombre, datos[0].incremento);
    }
    else if (datos[0].precio >= 30 && datos[0].precio < 80)
    {
        datos[0].incremento = datos[0].precio * 20 / 100 + datos[0].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[0].nombre, datos[0].incremento);
    }
    else if (datos[0].precio >= 80 && datos[0].precio < 200)
    {
        datos[0].incremento = datos[0].precio * 12 / 100 + datos[0].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[0].nombre, datos[0].incremento);
    }
    else
    {
        datos[0].incremento = datos[0].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[0].nombre, datos[0].incremento);
    }

    printf("\n");
    printf("\n----Introducimos los valores del segundo material----\n");
    printf("Introduzca el nombre del segundo material: ");
    scanf("%[^\n]", datos[1].nombre);
    printf("Introduzca el codigo del segundo material: ");
    scanf("%d", &datos[1].codigo);
    printf("Introduzca el precio del segundo material: ");
    scanf("%f", &datos[1].precio);
    getchar();
    if (datos[1].precio < 30)
    {
        datos[1].incremento = datos[1].precio * 35 / 100 + datos[1].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[1].nombre, datos[1].incremento);
    }
    else if (datos[1].precio >= 30 && datos[1].precio < 80)
    {
        datos[1].incremento = datos[1].precio * 20 / 100 + datos[1].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[1].nombre, datos[1].incremento);
    }
    else if (datos[1].precio >= 80 && datos[1].precio < 200)
    {
        datos[1].incremento = datos[1].precio * 12 / 100 + datos[1].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[1].nombre, datos[1].incremento);
    }
    else
    {
        datos[1].incremento = datos[1].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[1].nombre, datos[1].incremento);
    }

    printf("\n");
    printf("\n----Introducimos los valores del tercer material----\n");
    printf("Introduzca el nombre del tercer material: ");
    scanf("%[^\n]", datos[2].nombre);
    printf("Introduzca el codigo del tercer material: ");
    scanf("%d", &datos[2].codigo);
    printf("Introduzca el precio del tercer material: ");
    scanf("%f", &datos[2].precio);
    if (datos[2].precio < 30)
    {
        datos[2].incremento = datos[2].precio * 35 / 100 + datos[2].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[2].nombre, datos[2].incremento);
    }
    else if (datos[2].precio >= 30 && datos[2].precio < 80)
    {
        datos[2].incremento = datos[2].precio * 20 / 100 + datos[2].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[2].nombre, datos[2].incremento);
    }
    else if (datos[2].precio >= 80 && datos[2].precio < 200)
    {
        datos[2].incremento = datos[2].precio * 12 / 100 + datos[2].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[2].nombre, datos[2].incremento);
    }
    else
    {
        datos[2].incremento = datos[2].precio;
        printf("El precio nuevo del material -%s- es: %f", datos[2].nombre, datos[2].incremento);
    }
    printf("\n");
}
