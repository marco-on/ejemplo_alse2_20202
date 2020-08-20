/*Este programa es el ejemplo1 para el curso de ALSE
  Autor: Marco Ortiz
  Licencia: Comercial
  versión: 1.0.0
  */
//este es otro comentario

/*Inclusión de librerías*/
#include<stdio.h>

/*Definición de prototipos*/
void pedir_valores (float *num1, float *num2);
float pedir_valor ();

/*Código principal*/
void main (void) //esta es la función principal
{
	float numero1=0, numero2=0, resultado = 0;
	float num3 = 0, num4 = 0;
	char operacion = 0;

	pedir_valores (&numero1,&numero2); //pedir dos valores
	num3 = pedir_valor ();		   //pedir valor individual
	
	printf("el primer valor es: %f\n",numero1);
        printf("el segundo valor es: %f\n",numero2);
        printf("el tercer valor es: %f\n",num3);

//	definir_operacion (&operacion);
//	operar_valores (numero1, numero2, operacion, &resultado);
//	mostrar_resultado(numero1, numero2, operacion, resultado);
//	return 1;
}

void pedir_valores (float *num1, float *num2)
{
	printf("Ingrese el primer número a operar: ");
	scanf ("%f", &(*num1));
        printf("Ingrese el segundo número a operar: ");
        scanf ("%f", &(*num2));
}


float pedir_valor ()
{
	float temporal = 0;
        printf("Ingrese el tercer número a operar: ");
        scanf ("%f", &temporal);
	return temporal;
}



