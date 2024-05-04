//El siguiente programa permitirá calcular una sucesión númerica.
#include <stdio.h>

// La sucesión númerica se calculara a partir de la siguiente fórmula:
int calcularTermino(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}
//Con la siguiente variable solo se podrán ingresar números enteros.
int main() {
    int numero;

    //Le pedimos al usuario que ingrese un número entero positivo que sea diferente de 0.
    printf("Ingrese un número entero positivo (diferente de 0): ");
    scanf("%d", &numero);

    // Permite verificar que el número ingresado sea entero positivo y diferente de 0.
    if (numero <= 0) {
        printf("¡Error!. Por favor ingrese un número entero positivo diferente de 0.\n");
        return 1; // Salir del programa con código de error
    }

    // En caso de que el usuario si ingrese un entero positivo diferente de 0 el programa mostrará el resultado.
    printf("La sucesión numérica hasta el número %d es:\n", numero);
    for (int i = 1; i <= numero; i++) {
        printf("%d ", calcularTermino(i));
    }
    printf("\n");
    getchar();
}