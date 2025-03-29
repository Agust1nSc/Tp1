#include <stdio.h>

int CalcularCuadrado(int num); 
void CalcularCuadradoVoid(int *num);
void MostrarDireccionYContenido(int *num);
void Orden(int a, int b);
void Invertir(int *a, int *b);

int main(){

int num, a, b;

printf("Ingrese un numero\n");
scanf("%d", &num);

printf("Ingrese a\n");
scanf("%d", &a);
printf("Ingrese b\n");
scanf("%d", &b);

int resultado = CalcularCuadrado(num);
printf("El numero elevado al cuadrado es: %d\n", resultado);

CalcularCuadradoVoid(&num);
printf("El numero elevado al cuadrado en la funcion Void es: %d\n", num);

MostrarDireccionYContenido(&num);
Orden(a, b);


    return 0;

}

int CalcularCuadrado(int num){

return (num*num);


}

void CalcularCuadradoVoid(int *num){
    *num = (*num) * (*num);
    
}

void MostrarDireccionYContenido(int *num){

printf("La direccion de memoria de la variable es %p, y el contenido es %d:\n", num, *num);


}

void Orden(int a, int b){

int mayor, menor;

if (a > b)
{
    mayor = a;
    menor = b;
} else {
    mayor = b;
    menor = a;
}

printf("El numero mayor es %d y el numero menor es %d\n", mayor, menor);

}

void Invertir(int *a, int *b){

int temp = *a;
*a = *b




}
