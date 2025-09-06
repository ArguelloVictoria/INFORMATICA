//Legajo: 401880
//nombre y apellido: Arguello Brunetti Victoria

#include <stdio.h>
#define PI 3.1416

int calcularAreaRectangulo(int longitud, int altura) {
    return longitud * altura;}

int calcularPerimetroRectangulo(int longitud, int altura) {
    return 2 * (longitud + altura);}
    
int calcularDiagonalRectangulo(int longitud, int altura) {
    return longitud * longitud + altura * altura;} 

int calcularAreaCirculo(int radio) {
    return (int)(PI * radio * radio);}

int calcularPerimetroCirculo(int radio) {
    return (int)(2 * PI * radio);}

void imprimirResultados(int area, int perimetro) {
    printf("El área es: %d\n", area);
    printf("El perímetro es: %d\n", perimetro);}

int main() {
    int opcion;

    do {
        printf("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo): ");
        scanf("%d", &opcion);

        if (opcion != 1 && opcion != 2) {
            printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 1 && opcion != 2);

    if (opcion == 1) {
        printf("Opción de rectángulo seleccionada\n");
        int longitud, altura;
        printf("Ingrese la longitud del rectángulo: ");
        scanf("%d", &longitud);
        printf("Ingrese la altura del rectángulo: ");
        scanf("%d", &altura);

        int area = calcularAreaRectangulo(longitud, altura);
        int perimetro = calcularPerimetroRectangulo(longitud, altura);
        int diagonal = calcularDiagonalRectangulo(longitud, altura);

        imprimirResultados(area, perimetro);
        printf("La diagonal (cuadrada) del rectángulo es: %d\n", diagonal);} 
        
        else if (opcion == 2) {
        printf("Opción de círculo seleccionada\n");
        int radio;
        printf("Ingrese el radio del círculo: ");
        scanf("%d", &radio);

        int area = calcularAreaCirculo(radio);
        int perimetro = calcularPerimetroCirculo(radio);

        imprimirResultados(area, perimetro);}

    return 0;
}
