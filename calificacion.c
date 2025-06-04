#include <stdio.h>

// Legajo: 401880
// Nombre: Arguello Brunetti Victoria

int main(void)
{
    float calificacion;
    
    printf("Ingrese la calificacion del alumno:");
    scanf("%f", &calificacion);

    if( calificacion >=90)
    {
    printf("Calificacion: A");
    }
    else if (calificacion>=80)
    {
    printf("Calificacion: B");
    }
    else if (calificacion>=70)
    {
    printf("Calificacion: C");
    }
    else if (calificacion>=60)
    {
    printf("Calificacion: D");
    }
    else{
    printf("Calificacion: F");
    }
   
   return 0;
}