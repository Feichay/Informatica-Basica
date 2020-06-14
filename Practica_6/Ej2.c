//Práctica 6 Informatica Basica Ejercicio2
//Alumno : Cheuk Kelly Ng Pante
//Correo : alu0101364544@ull.edu.es

/* En una sucursal bancaria, los datos asociados a una cuenta
bancaria son: número de cuenta y saldo. Cada cliente de la sucursal dispone de
2 cuentas, siendo los datos del cliente: dni, nombre y sus 2 cuentas. Escribir un
programa es C que pida por pantalla los datos para 3 clientes y a continuación
escriba para cada cliente: sus datos (dni y nombre) junto con su saldo total si
este es positivo, y sus datos (dni y nombre) junto a un mensaje que indique que
el cliente no tiene permiso de extracción en el caso de saldo total negativo.
Además, para cada cliente se debe mostrar los datos de las cuentas en las que
tiene saldo negativo.*/

#include <stdio.h>

typedef struct
{
    int numero_cuenta;
    float saldo;
} Tcuenta;

typedef struct
{
    int dni;
    char nombre[50];
    Tcuenta cuenta[2];
    float suma;
} Ddatos;

Ddatos info[3];

int main(void)
{
    {
        printf("----Datos del primer cliente----");
        printf("\nIntroduzca el nombre del primer cliente: ");
        scanf("%[^\n]", info[0].nombre);
        printf("Introduzca el dni del primer cliente: ");
        scanf("%d", &info[0].dni);
        printf("Introduzca los numeros de su primera cuenta: ");
        scanf("%d", &info[0].cuenta[0].numero_cuenta);
        printf("Introduzca el saldo de su primera cuenta: ");
        scanf("%f", &info[0].cuenta[0].saldo);
        printf("Introduzca los numeros de su segunda cuenta: ");
        scanf("%d", &info[0].cuenta[1].numero_cuenta);
        printf("Introduzca el saldo de su segunda cuenta: ");
        scanf("%f", &info[0].cuenta[1].saldo);

        getchar();
    }

    {
        printf("\n");
        printf("----Datos del segundo cliente----");
        printf("\nIntroduzca el nombre del segundo cliente: ");
        scanf("%[^\n]", info[1].nombre);
        printf("Introduzca el dni del segundo cliente: ");
        scanf("%d", &info[1].dni);
        printf("Introduzca los numeros de su primera cuenta: ");
        scanf("%d", &info[1].cuenta[0].numero_cuenta);
        printf("Introduzca el saldo de su primera cuenta: ");
        scanf("%f", &info[1].cuenta[0].saldo);
        printf("Introduzca los numeros de su segunda cuenta: ");
        scanf("%d", &info[1].cuenta[1].numero_cuenta);
        printf("Introduzca el saldo de su segunda cuenta: ");
        scanf("%f", &info[1].cuenta[1].saldo);

        getchar();
    }

    {
        printf("\n");
        printf("----Datos del tercer cliente----");
        printf("\nIntroduzca el nombre del tercer cliente: ");
        scanf("%[^\n]", info[2].nombre);
        printf("Introduzca el dni del tercer cliente: ");
        scanf("%d", &info[2].dni);
        printf("Introduzca los numeros de su primera cuenta: ");
        scanf("%d", &info[2].cuenta[0].numero_cuenta);
        printf("Introduzca el saldo de su primera cuenta: ");
        scanf("%f", &info[2].cuenta[0].saldo);
        printf("Introduzca los numeros de su segunda cuenta: ");
        scanf("%d", &info[2].cuenta[1].numero_cuenta);
        printf("Introduzca el saldo de su segunda cuenta: ");
        scanf("%f", &info[2].cuenta[1].saldo);

        getchar();
    }

    printf("\n");
    printf("----DATOS DE LOS CLIENTES----");
    printf("\nLos datos del primer cliente");
    info[0].suma = info[0].cuenta[0].saldo + info[0].cuenta[1].saldo;
    if (info[0].suma > 0)
    {
        printf("\n-Nombre: %s\n", info[0].nombre);
        printf("-DNI: %d\n", info[0].dni);
        printf("-El saldo total del primer cliente: %f", info[0].suma);
    }
    else
    {
        printf("\n-Nombre: %s\n", info[0].nombre);
        printf("-DNI: %d\n", info[0].dni);
        printf("\nUsted no tiene los permisos de extraccion!");
    }

    printf("\nLos datos del segundo cliente");
    info[1].suma = info[1].cuenta[0].saldo + info[1].cuenta[1].saldo;
    if (info[1].suma > 0)
    {
        printf("\n-Nombre: %s\n", info[1].nombre);
        printf("-DNI: %d\n", info[1].dni);
        printf("-El saldo total del primer cliente: %f", info[1].suma);
    }
    else
    {
        printf("\n-Nombre: %s\n", info[1].nombre);
        printf("-DNI: %d\n", info[1].dni);
        printf("\nUsted no tiene los permisos de extraccion!");
    }

    printf("\nLos datos del tercer cliente");
    info[2].suma = info[2].cuenta[0].saldo + info[2].cuenta[1].saldo;
    if (info[1].suma > 0)
    {
        printf("\n-Nombre: %s\n", info[2].nombre);
        printf("-DNI: %d\n", info[2].dni);
        printf("-El saldo total del primer cliente: %f", info[2].suma);
    }
    else
    {
        printf("\n-Nombre: %s\n", info[2].nombre);
        printf("-DNI: %d\n", info[2].dni);
        printf("\nUsted no tiene los permisos de extraccion!");
    }
}