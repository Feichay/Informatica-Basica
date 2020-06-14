//Práctica 7 Informatica Basica Ejercicio1
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/*Se dispone de la siguiente información sobre material fungible:
código, nombre y precio. Dado que el precio de los materiales almacenados en
la base de datos no se ha actualizado en varios años, hay que aplicar un
incremento de 35% a aquellos materiales cuyo precio sea inferior a 30 €, un
incremento de 20% a aquellos con precios comprendidos entre 30 € y 80 €
([30, 80)) un incremento de un 12% para los de precios entre 80 € y 200 €
([80, 200)), y finalmente los materiales de precio superior a 200 € quedarán con
el mismo precio. Se pide implementar un programa en C que haciendo uso de
las estructuras de control iterativas solicite al usuario la información para 3
materiales y, a continuación muestre los datos de dichos materiales con los
precios actualizados*/

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
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("\n----Introducimos los datos de los materiales----\n");
        printf("Introduzca el nombre del material: ");
        scanf("%[^\n]", datos[i].nombre);
        printf("Introduzca el codigo del material: ");
        scanf("%d", &datos[i].codigo);
        printf("Introduzca el precio del primer material: ");
        scanf("%f", &datos[i].precio);
        getchar();
        if (datos[i].precio < 30)
        {
            datos[i].incremento = datos[i].precio * 35 / 100 + datos[i].precio;
            printf("El precio nuevo del material -%s- es: %f", datos[i].nombre, datos[i].incremento);
        }
        else if (datos[i].precio >= 30 && datos[i].precio < 80)
        {
            datos[i].incremento = datos[i].precio * 20 / 100 + datos[i].precio;
            printf("El precio nuevo del material -%s- es: %f", datos[i].nombre, datos[i].incremento);
        }
        else if (datos[i].precio >= 80 && datos[i].precio < 200)
        {
            datos[i].incremento = datos[i].precio * 12 / 100 + datos[i].precio;
            printf("El precio nuevo del material -%s- es: %f", datos[i].nombre, datos[i].incremento);
        }
        else
        {
            datos[i].incremento = datos[i].precio;
            printf("El precio nuevo del material -%s- es: %f", datos[i].nombre, datos[i].incremento);
        }
        getchar();
        printf("\n");
    }
}
