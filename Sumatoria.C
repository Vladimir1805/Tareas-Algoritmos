//El programa pide al usuario que ingrese un número entero y este se sume en pares, además mostrará la secuencia
#include <stdio.h>

int main() {
    int n;

    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero que sea positivo: ");
    scanf("%d", &n);

    // El programa verifica que el número entero ingresado por el usuario sea positivo
    if (n <= 0) {
    //En caso de que no lo sea le pedirá al usuario que ingrese un número entero positivo
        printf("Por favor ingrese un número entero positivo.\n");
        return 1; // Salir del programa si el número no es positivo
    }

    // Mostrar la secuencia de suma en par del numero entero
    printf("El resultado de la suma en par del número es:\n");
    for (int i = 1; i <= n; i++) {
        int suma = i + i;
        printf("%d + %d = %d\n", i, i, suma);
    }
    getchar ();
    return 0;
}