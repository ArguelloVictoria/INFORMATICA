#include <stdio.h>

//legajo=401880
//Nombre= Arguello Brunetti Victoria


int main(void)
{
    float peso,altura,bmi;
    
    do{
    printf("Ingrese su peso en kg:");
    scanf("%f", &peso);
     if (peso<=0){
      printf("Error ingrese el peso nuevamente\n");         
     }
    }
     while(peso<=0);
    printf("El peso es valido\n");    

	
    do{
    printf("Ingrese su altura en metros:");
    scanf("%f", &altura);
     if (altura<=0){      
         printf("Error ingrese la altura nuevamente\n");      
     }
    }
      while(altura<=0);
    printf("El peso es valido\n");
    
    
    bmi=(peso/(altura*altura));
     
	printf("\n Indice - Condicion: \n");
	printf("----------------------");
	printf("\n <18.5 - Bajo peso ");
	printf("\n 18.5 a 24.9 - Normal ");
	printf("\n 25.0 a 29.9 - Sobrepeso ");
	printf("\n >=30 - Obesidad \n ");
    
    printf(" \n Su índice de masa corporal es %.2f", bmi );

    if( bmi <=18.5){
    printf(" \n Ustes esta por debajo del peso");
    }
   
    else if (bmi>=18.5 && bmi<=24.9){
    printf(" \n Usted esta dentro del peso normal");
    }
    
    else if (bmi>=25.0 && bmi<=29.9){
    printf(" \n Usted tiene sobrepeso");
    }
    
    else{
    printf(" \n Usted tiene obesidad");
    }

    return 0;
}
