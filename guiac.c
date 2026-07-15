#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
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

int shifteoyotros(){

	int32_t a = 1;
	int32_t b = 8;
	int32_t mask = 7; 

	printf("%i\n",(b & mask) == (a >> 29));

	return 0;
}


// sobre el error de segmentation fault al querer modificar un string creado con un puntero:
//1. El array: char s[] = "Hola!"; (Modificable)
//Cuando haces esto, el compilador reserva espacio para 6 bytes en la pila (stack) (la memoria local de la función) y copia los caracteres "Hola!" dentro 
//de ese espacio. Como esa memoria te pertenece y está en una zona de lectura y escritura, puedes cambiar s[0] = 'h' sin problemas.
//2. El puntero: char *u = "string"; (Inmutable)
//Aquí estás creando un puntero que apunta directamente a una literal de cadena (string literal). El compilador guarda el texto "string" en una sección 
//de la memoria llamada .rodata (Read-Only Data / Datos de solo lectura). El puntero u vive en la pila, pero la dirección a la que apunta es de "solo lectura".
//Al intentar hacer u[0] = 'S', estás intentando escribir en una zona de memoria protegida por el sistema operativo. El sistema operativo detecta esta infracción y mata tu programa inmediatamente con un Segmentation Fault.



//Ejercicio 11:
//Realizar un programa que rote un arreglo de números enteros a la izquierda. El arreglo
//puede estar hardcodeado. Por ejemplo, si el arreglo es [1, 2, 3, 4], el resultado debe
//ser [2, 3, 4, 1]. Cuando veamos punteros, podremos hacer una función de rotación
//genérica.

int rotarHardcodeado(){
    int a[] = {1,2,3,4};

    a[0] = 4;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;

    for(int i = 0; i < 4; i++){
        printf("%i ",a[i]);
    }
    printf("\n");

    return 0;
}

//Ejercicio 12:
//Generalizar el ejercicio anterior para que la rotación sea un parámetro de entrada. Por
//ejemplo, si el arreglo es [1, 2, 3, 4] y la rotación es 2, el resultado debe ser [3, 4, 1, 2].

int rotación(int arr[], int r, int tam){

    int copia[tam]; 

    for(int i = 0; i < tam; i++){
        copia[i] = arr[((i+r)%tam)];
    }

    for(int i = 0; i < tam; i++){
        printf("%d ", copia[i]);
    }
    return 0;
}


int rotarHardcode(){

    int a[] = {0,1,2,3,4,5};  // -> 
    int t = 6; 
    int r = 2;

    rotación(a,r,t);
    return 0;
}


//Realizar un programa que tire un dado de 6 caras 60 millones de veces y cuente la cantidad
//de veces que salió cada número. Para esto, usar un array de 6 elementos. Luego imprimir
//el resultado por pantalla. Para tirar el dado aleatoriamente, usar la función rand() de la
//librerı́a stdlib.h.

int dadoDe6Caras(){
    int arr[6] = {0};

    uint32_t tiradas = 60000000;
    while(--tiradas){
        int tirada = rand() % 6;
        arr[tirada]++;
    }
    for(int i = 0; i < 6; i++){
        printf("cantidad de veces que salió el %i: %i\n",i+1,arr[i]);
    }
    return 0;
}

//Realizar un programa que declare una variable global y una variable local. Luego, imprimir
//el valor de ambas variables en la función main. Luego, probar darles el mismo nombre.
//¿Qué sucede? ¿Por qué?

int i = 0;

int printearMismaVariableGlobal(){
    int j = 2;
    printf("%i, %i\n", i, j);
    return 0;
}

int factorial1(int n){

    if(n==0){
        return 1;
    }
    else{
        return factorial1(n-1) * n;
    }
}

int fact(){

    int n;
    printf("introduce un número\n");

    scanf("%i", &n);

    printf("el factorial es : %d\n",factorial1(n));

    return 0;
}

#define FELIZ 0
#define TRISTE 1

void ser_feliz1(int estado);
void print_estado1(int estado);

int ejemploScope(){
int estado = TRISTE; // automatic duration. Block scope
ser_feliz1(estado);
print_estado1(estado); // qué imprime?
return 0;
}
void ser_feliz1(int estado){
estado = FELIZ;
}
void print_estado1(int estado){
printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}

//segundo ejemplo de scope con variable global

int estado = TRISTE; // static duration. File scope

void ser_feliz2();
void print_estado2();

int masEjemplos(){
    print_estado2();
    ser_feliz2();
    print_estado2(); // qué imprime?
    return 0; 
}
void ser_feliz2(){
    estado = FELIZ;
}
void print_estado2(){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}

//

int estado = TRISTE; // static duration. File scope
void alcoholizar();
void print_estado();
int main(){
    print_estado();
    alcoholizar();
    print_estado();
    alcoholizar();alcoholizar();alcoholizar();
    print_estado(); // que imprime?
}
void alcoholizar(){
    static int cantidad = 0; // static duration. block scope  Con static la variable se crea una sola vez y conserva su valor entre llamadas a la función
    cantidad++;
    if(cantidad < 3){
        estado = FELIZ;
    }else{
        estado = TRISTE;
    }
}
void print_estado(){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}


//ejercicio 20
/*El siguiente esquema de programa muestra solo definiciones de funciones y de variables.
Indicar el scope y duración de cada variable.*/

int b, c; //scope global, estática
void f(void)
{
    int b, d;  //scope local, automática
}
void g(int a)
{
    int c;  //scope local, automática
    {
        int a, d;  //scope local, automática
    }
}


//MACRO: 
