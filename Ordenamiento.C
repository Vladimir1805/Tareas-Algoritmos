//El programa a partir de 3 números mayores de 3 y menores de 15 que el usuario ingrese los ordenara de mayor a menor
#include <stdio.h>

int main() {
    int numeros[3];
    int i, j, temp;

    // Solicitamos al usuario que ingrese los 3 números, especificamos que deben de ser mayores de 3 y menores de 15
    printf("Por favor, ingresa 3 números (mayores de 3 y menores de 15):\n");

    // El programa leerá los números y verificará si están dentro del rango
    for (i = 0; i < 3; i++) {
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &numeros[i]);

            // En caso de que no estén dentro del rango el programa mostrará un mensaje de error y pedira que se ingrsen números dentro del rango
            if (numeros[i] <= 3 || numeros[i] >= 15) {
                printf("Error: El número debe ser mayor de 3 y menor de 15.\n");
            }
        } while (numeros[i] <= 3 || numeros[i] >= 15);
    }

    // El programa ordena los números de mayor a menor
    for (i = 0; i < 3 - 1; i++) {
        for (j = i + 1; j < 3; j++) {
            if (numeros[i] < numeros[j]) {
                // Intercambia los números
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // El programa muestra el resultado del ordenamiento de números
    printf("Los números ordenados de mayor a menor son: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    // Solicitamos al usuario que ingrese Enter para salir del programa
    printf("Presiona Enter para salir...");
    getchar(); // Captura el Enter
    getchar(); // Espera a que el usuario presione Enter

    return 0;
}