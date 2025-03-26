//DUP que permita calcular el cuadrado de un numero dado como dato, utilizando una funcion.

#include <stdio.h>
void sqtr(int);
int main(void){
	int num;
	num = 100;
    sqtr(num);
return 0;
}
void sqtr(int a){
    printf("%d al cuadrado es %d\n",a,a*a);
}
