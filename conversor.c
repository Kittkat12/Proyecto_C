#include <stdio.h>

void convertirMoneda(float cantidad, int opcion) {
    float resultado;
    switch (opcion) {
        case 1:
            resultado = cantidad / 7.85;
            printf("%.2f Quetzales son %.2f Dólares.\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad / 8.50;
            printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad * 7.85;
            printf("%.2f Dólares son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad * 8.50;
            printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

int main() {
    int opcion;
    float cantidad;
    do {
        printf("\nConversor de Monedas\n");
        printf("1. Quetzales a Dólares\n");
        printf("2. Quetzales a Euros\n");
        printf("3. Dólares a Quetzales\n");
        printf("4. Euros a Quetzales\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        if (scanf("%d", &opcion) != 1) {
            printf("Entrada inválida.\n");
            while (getchar() != '\n');
            continue;
        }
        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese la cantidad a convertir: ");
            if (scanf("%f", &cantidad) != 1 || cantidad < 0) {
                printf("Cantidad inválida.\n");
                while (getchar() != '\n');
                continue;
            }
            convertirMoneda(cantidad, opcion);
        }
    } while (opcion != 5);
    printf("Gracias por usar el conversor de monedas.\n");
    return 0;
}
