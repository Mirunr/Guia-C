#include <stdio.h>
#include <stdint.h>

//Realizar el programa que imprima en pantalla el texto Hola, Orga!. Compilar con todos
//los flags mencionados.
int ej1(){
    printf("holis\n");
    return 0;
}

//Realizar un Makefile para compilar nuestro programa de Hola Orga! De ahora en m´as,
//todos los ejemplos que veamos en la gu´ıa, deben tener un Makefile para compilar el
//programa.



//Realizar un programa que imprima por pantalla todos los tama˜nos de los tipos de datos
//(con sus modificadores) vistos hasta el momento. Mirar atentamente la tabla de especi-
//ficadores de conversi´on y los length modifiers para saber c´omo imprimir los distintos
//tipos de datos. Traten de fixear todos los warnings que les tire el compilador.


int tiposdedatos(){
    
    char a = 'a';
    short b = -6545;
    int c = 21321;
    long d = 8887;
    unsigned e = 1;
    unsigned short f = 12;
    unsigned char g = 123;
    unsigned long h = 14; 


    printf("char(%lu): %d\n", sizeof(a), a);
    printf("short(%lu): %d\n", sizeof(b), b);
    printf("int(%lu): %d\n", sizeof(c), c);
    printf("long(%lu): %ld\n", sizeof(d), d);
    printf("unsigned(%lu): %d\n", sizeof(e), e);
    printf("unsigned short(%lu): %d\n", sizeof(f),f);
    printf("unsigned char(%lu): %d\n", sizeof(g), g);
    printf("unsigned long(%lu): %lu\n", sizeof(h), h);

    return 0;
}

//Realizar un programa que imprima por pantalla los tama ̃nos de los tipos de datos de
//ancho fijo de la biblioteca stdint.h.

//Signed int8 t int16 t int32 t int64 t
//Unsigned uint8 t uint16 t uint32 t uint64 t

int tiposdedatos_stdint(){
    int8_t  a = 34;
    int16_t b = -1234;
    int32_t c = 24213;
    int64_t d =  -123214L;

    uint8_t  e = 124; 
    uint16_t f = 352;
    uint32_t g = 23;
    uint64_t h = 141313L;

    printf("int8_t(%lu): %d\n", sizeof(a), a);
    printf("int16_t(%lu): %d\n", sizeof(b), b);
    printf("int32_t(%lu): %d\n", sizeof(c), c);
    printf("int64_t(%lu): %ld\n", sizeof(d), d);
    printf("unsigned int8_t(%lu): %d\n", sizeof(e), e);
    printf("unsigned int16_t(%lu): %d\n", sizeof(f),f);
    printf("unsigned int32_t(%lu): %d\n", sizeof(g), g);
    printf("unsigned int64_t(%lu): %lu\n", sizeof(h), h);

    return 0;
}


// EJEMPLO DE CAST
int casteo() {
    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
    102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
    103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
    111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};
    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    char decoded[length];
    for (size_t i = 0; i < length; i++) {
    decoded[i] = (char) (mensaje_secreto[i]); // casting de int a char
    }
    for (size_t i = 0; i < length; i++) {
    printf("%c", decoded[i]);
    }
    printf("\n");
    return 0;
}

//La sintaxis general para hacer un casting es: (type) expression

//Realizar un programa que imprima el valor de 0.1 como float y como double. Luego,
//realizar un cast de float a int y de double a int. ¿Qué sucede?

int casting(){
    float a = 0.1;
    double b = 0.1F; 

    printf("float es %f\n", a);
    printf("double es %f\n", b);

    int c = (int) (a);
    int d = (int) (b);

    printf("de float a int %i\n", c);
    printf("de double a int %i\n", d);

    return 0;
}

//Realizar un programa que imprima por pantalla el resultado de las siguientes operaciones:
//a = 5, b = 3, c = 2, d = 1
//a + b * c / d
//a % b
//a == b, a != b
//a & b, a | b
//∼a
//a && b, a || b
//a << 1
//a >> 1
//a += b, a -= b, a *= b, a /= b, a %= b

//Importante: Interpretar los resultados de las operaciones y ver si coinciden con lo esperado. 
//Para imprimir los valores de las operaciones binarias, usar %x o tambien %X en printf.

int operaciones(){
	int a = 5; 
	int b = 3; 
	int c = 2; 
	int d = 1;

	printf("a = %i, b = %i, c = %i, d = %i\n", a, b, c, d); // 5 3 2 1

	printf("a + b * c / d : %i\n", a + b * c / d); // 

	printf("a %% b : %i\n", a % b);

	printf("a == b : %x\n", a == b);

	printf("a != b : %x\n", a != b);

	printf("a & b:%x\n", a & b);

	printf("a | b:%x\n", a | b);

	printf("a && b: %x\n", a && b);

	printf("a || b: %x\n", a || b);

	printf("∼a: %x\n", ~a);

	printf("a && b: %x\n",a && b);

	printf("a || b:%x\n", a || b);

	printf("a << 1: %i\n", a << 1);

	printf("a >> 1: %i\n", a >> 1);

	printf("a += b: %d\n", a += b);

	printf("a -= b: %d\n", a -= b);

	printf("a *= b: %d\n", a *= b);

	printf("a /= b: %d\n", a /= b);

	printf("a %%= b: %d\n", a % b);

	return 0;
}

int pruebademasmas(){

	int i = 2;
	printf("%i\n", i++);
	printf("%i\n", ++i);
	return 0;
}

//ej 9) Realizar un programa que compare si los 3 bits m ́as altos de una palabra de 32 bits son iguales a los 3 bits 
//mas bajos de otra palabra de 32 bits. Si son iguales, informarlo por pantalla.

int main(){

	int32_t a = 1;
	int32_t b = 8;
	int32_t mask = 7; 

	printf("%i\n",(b & mask) == (a >> 29));

	return 0;
}
