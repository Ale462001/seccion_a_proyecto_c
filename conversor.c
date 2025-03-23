#include <stdio.h>

void convertir_quetzales_a_dolares(float quetzales) {
    float dolares = quetzales / 7.70;  // Supongamos que 1 USD = 7.70 Q
    printf("%.2f Quetzales = %.2f Dólares\n", quetzales, dolares);
}

void convertir_dolares_a_quetzales(float dolares) {
    float quetzales = dolares * 7.70;  // Supongamos que 1 USD = 7.70 Q
    printf("%.2f Dólares = %.2f Quetzales\n", dolares, quetzales);
}

void convertir_quetzales_a_euros(float quetzales) {
    float euros = quetzales / 8.56;  // Supongamos que 1 EUR = 8.56 Q
    printf("%.2f Quetzales = %.2f Euros\n", quetzales, euros);
}

void convertir_euros_a_quetzales(float euros) {
    float quetzales = euros * 8.56;  // Supongamos que 1 EUR = 8.56 Q
    printf("%.2f Euros = %.2f Quetzales\n", euros, quetzales);
}

void convertir_dolares_a_euros(float dolares) {
    float euros = dolares * 0.92;  // Supongamos que 1 USD = 0.92 EUR
    printf("%.2f Dólares = %.2f Euros\n", dolares, euros);
}

void convertir_euros_a_dolares(float euros) {
    float dolares = euros / 0.92;  // Supongamos que 1 EUR = 1.09 USD
    printf("%.2f Euros = %.2f Dólares\n", euros, dolares);
}

int main() {
    int opcion;
    float cantidad;

    // Menú de opciones
    printf("Conversor de monedas\n");
    printf("1. Convertir Quetzales a Dólares\n");
    printf("2. Convertir Dólares a Quetzales\n");
    printf("3. Convertir Quetzales a Euros\n");
    printf("4. Convertir Euros a Quetzales\n");
    printf("5. Convertir Dólares a Euros\n");
    printf("6. Convertir Euros a Dólares\n");
    printf("Elija una opción (1-6): ");
    scanf("%d", &opcion);

    // Solicitar la cantidad a convertir
    printf("Ingrese la cantidad que desea convertir: ");
    scanf("%f", &cantidad);

    // Realizar la conversión según la opción elegida
    switch (opcion) {
        case 1:
            convertir_quetzales_a_dolares(cantidad);
            break;
        case 2:
            convertir_dolares_a_quetzales(cantidad);
            break;
        case 3:
            convertir_quetzales_a_euros(cantidad);
            break;
        case 4:
            convertir_euros_a_quetzales(cantidad);
            break;
        case 5:
            convertir_dolares_a_euros(cantidad);
            break;
        case 6:
            convertir_euros_a_dolares(cantidad);
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}



