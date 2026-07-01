#include <stdio.h>

//Realizar el programa que imprima en pantalla el texto Hola, Orga!. Compilar con todos
//los flags mencionados.
int ej1(){
    printf("holis\n");
    return 0;
}

//Realizar un Makefile para compilar nuestro programa de Hola Orga! De ahora en m´as,
//todos los ejemplos que veamos en la gu´ıa, deben tener un Makefile para compilar el
//programa.

int main(){
    
    char a = 'a';
    short b = -6545;
    int c = 21321;
    long d = 8887;
    unsigned e = 1;
    unsigned short f = 12;
    unsigned char g = 123;
    unsigned long h = 14; 


    printf("char(%lu): %d \n", sizeof(a), a);
    printf("short(%lu): %d \n ", sizeof(b), b);
    printf("int(%lu): %d \n", sizeof(c), c);
    printf("long(%lu): %ld\n ", sizeof(d), d);
    printf("char(%lu): %d \n", sizeof(e), e);
    printf("char(%lu): %d \n", sizeof(f),f);
    printf("char(%lu): %d \n", sizeof(g), g);
    printf("char(%lu): %lu \n", sizeof(h), h);

    return 0;
}

Realizar un programa que imprima por pantalla todos los tama˜nos de los tipos de datos
(con sus modificadores) vistos hasta el momento. Mirar atentamente la tabla de especi-
ficadores de conversi´on y los length modifiers para saber c´omo imprimir los distintos
tipos de datos. Traten de fixear todos los warnings que les tire el compilador.

