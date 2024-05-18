//El siguiente programa permite elegir cuatro opciones de comida rápidaa
#include <stdio.h>

void mostrarMenu() {
    //A continuación le indicamos al usuario las cuatro opciones que tiene para elegir
    printf("Por favor seleccione uno de los siguientes paquetes:\n");
    printf("1. Pizza individual + papas y refresco\n");
    printf("2. Hamburguesa + papas y refresco\n");
    printf("3. Hot Dogs (2) + papas y refresco\n");
    printf("4. Sándwich + papas y refresco\n");
    printf("Ingrese el número de su elección: ");
}

int main() {
    int eleccion;

    mostrarMenu();
    //El programa lee la opción tecleada por el usuario
    scanf("%d", &eleccion);

    switch (eleccion) {
        //Utilizamos la sentencia switch, ya que en este caso se debe elegir entre múltiples elecciones.
        case 1:
            printf("Usted ha seleccionado Pizza individual\n");
            break;
        case 2:
            printf("Usted ha seleccionado Hamburguesa\n");
            break;
        case 3:
            printf("Usted ha seleccionado Hot Dogs\n");
            break;
        case 4:
            printf("Usted ha seleccionado Sándwich\n");
            break;
        default:
        //En caso de que el usuario introduzca una opción diferente el programa mostrará un mensaje de error
            printf("Opción invalida: Por favor seleccione una opción del menú.\n");
            break;
    }
    getchar ();
    return 0;
}