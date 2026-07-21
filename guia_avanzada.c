#include <stdio.h> 
#include <stdint.h>
#include <string.h>
//Definir una estructura monstruo t que contenga los siguientes campos:
//nombre (string)
//vida (entero)
//ataque (double)
//defensa (double)
//Luego, inicializar un array de monstruos y mostrar por pantalla el nombre y la vida de
//cada uno de ellos.


typedef struct 
{
    char nombre[20];
    int vida;
    double ataque;
    double defensa;
} monstruo_t;

monstruo_t monstruos[] = {{"carlitos",34,25.2,32.1},
                          {"juanita",12,23.3,34.21},
                          {"jaijo",34,223.1,12.3}
                          };

int monsters(){

    int length = sizeof(monstruos) / sizeof(monstruo_t);
    for(int i = 0; i < length; i++){
        printf("%s %i\n", monstruos[i].nombre, monstruos[i].vida);
    }
    return 0; 
}


monstruo_t evolution(monstruo_t monstruillo)
{
    monstruillo.ataque += 10.0;
    monstruillo.defensa += 10.0;
    printf("después de evolucionar su ataque aumentó a %f y su defensa a %f\n", monstruillo.ataque,monstruillo.defensa);
    return monstruillo;
}


int digievolucion(){
    printf("el monstruo %s tiene ataque %f y defensa %f\n", monstruos[0].nombre, monstruos[0].ataque,monstruos[0].defensa);
    evolution(monstruos[0]);
    return 0;
}

int punterossss(){
    int x = 42;
    int *p = &x;
    printf("Direccion de x: %p Valor: %d\n", (void*) &x, x); // se tiene que castear todo puntero a un puntero 
                                                            //de tipo void genérico
                                                            // ya que Un puntero a un entero (int*) podría tener un tamaño 
                                                            //o un formato de bits diferente al de un puntero genérico (void*).
                                                            //Si no haces la conversión con (void*), printf podría leer mal los bytes de la memoria y mostrarte una dirección completamente errónea o, peor aún, hacer que el programa se rompa (Undefined Behavior).

    printf("Direccion de p: %p Valor: %p\n", (void*) &p, (void*) p);
    printf("Valor de lo que apunta p: %d\n", *p);
    return 0;
}

// x es la variable que guarda un valor de tipo int, en este caso le asignamos 42
// &x es la dirección de memoria en la que esta la variable x 
// p es un puntero de tipo int, donde estará guardada la direccion de memoria en la que está una variable de tipo int
// *p de esta forma accedemos a la dirección de memoria guardada en el puntero p, es decir en este caso accedemos al valor de x 


/*int snippet12(){
    int8_t memoria[2] = {0x20,0x28};
    int8_t *x = (int8_t*) 0x20;
    int8_t *y = (int8_t*) 0x28;
    printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
    printf("Dir de y: %p Valor: %d\n", (void*) y, *y);

    return 0;
    }
*/

/*SEGMENTATION FAULT 
que un puntero apunte a un lugar de memoria no definido no trae ningún problema, el problema sería
si queremos leer o escribir ese lugar de memoria. En ese caso, el comportamiento es indefinido,
porque básicamente no sabemos que hay en esa dirección de memoria. Puede haber memoria
de nuestro proceso, o puede haber memoria de otro proceso. En caso que haya memoria de otro
proceso, el sistema operativo nos va a arrojar un error de Segmentation fault.
En caso que haya memoria de nuestro proceso, el comportamiento es indefinido: el programa puede seguir
ejecutándose con errores lógicos o puede terminar abruptamente en un Segmentation fault,
según la operación y el tipo de memoria accedida*/

int stringss(){
    char *str1 = "Hola";
    char str2[] = "Hola";
    str1 = "Hola, cómo estás?";
/* *str1 = "Hola, cómo estás?"; // ❌ Error
Al poner el asterisco * delante de str1, estás desreferenciando el puntero. Es decir, no estás modificando a dónde apunta el puntero, 
sino el primer carácter individual (char) al que apunta. Por eso el compilador te advierte que le estás asignando una dirección
de memoria (char *) a un carácter sencillo (char).*/
    str2[0] = 'j';
    //str2[4] = ' ';
    //str2[5] = 'c';
    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}


/* Cuando se declara un string como puntero la variable que guarda la memoria nada más se guarda en el stack mientras que lo demás, digamos el 
contenido del string está en una parte de la memoria que se llama .rodata por read only, por lo tanto el string es inmutable. A diferencia de esto,
cuando el string se declara como array, si se puede acceder a cada carácter y modificarlo, ya que el literal "Hola" sigue estando 
en .rodata, pero al ejecutarse la función, el compilador copia byte por byte esos caracteres a la memoria Stack reservada para la variable str. */


//EJERCICIO 9 
//Definir una función que reciba un string y lo pase a mayúsculas. Pista: alcanza con sumar
//la diferencia entre ’A’ y ’a’ a cada letra. Sólo aplicar la conversión si lo que llega es una
//letra minúscula.

int string_length(char *str)
{
    int len = 0;
    while(*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}


int to_upper(char *palabra)
{
    int len = string_length(palabra);
    char copia[len+1];
    int i = 0;
    while (*palabra != '\0')
    {
        if(*palabra >='a' && *palabra <='z')
        {
            copia[i] = (char) *palabra + ('A'-'a');
        }
        else
        {
            copia[i] = *palabra;
        }
        
        printf("%c",copia[i]);
        i++;
        palabra++;
    }

    copia[i] = '\0'; // Cerramos la cadena correctamente
    printf("\n");

    printf("%s",copia);

    return 0;
}


int ejercicio9() 
{
    char *pal = "HoliS";
    to_upper(pal);
    return 0;
}

int funcionesSTR(){
    // 1. strlen: Devuelve la longitud del string (sin contar el '\0').
// Argumentos: (const char *cadena)
size_t len = strlen("Hola"); 


// 2. strcpy: Copia el string origen en la variable destino (sobrescribe).
// Argumentos: (char *destino_con_espacio, const char *origen)
char destino[50];
strcpy(destino, "Hola"); 


// 3. strcat: Pega el string origen al final del string destino.
// Argumentos: (char *destino_con_espacio, const char *origen_a_pegar)
strcat(destino, " Mundo"); 


// 4. strcmp: Compara dos strings en orden alfabético. Devuelve 0 si son iguales.
// Argumentos: (const char *cadena1, const char *cadena2)
int resultado = strcmp(destino, "Hola Mundo"); // resultado es 0

return 0;
}


//Analicemos un ejemplo de una funci´on que intenta devolver un array de enteros inicializado:

uint16_t *secuencia(uint16_t n){
    uint16_t arr[n];
    for(uint16_t i = 0; i < n; i++){
        arr[i] = i;
    }
    return arr;
}

int noFunciona(){
    uint16_t n = 3;
    for(int i = 0; i < n; i++){
        printf("%d",*secuencia(n));
    }
}

//arr es una variable automática, y por lo tanto, se libera al salir de la funci´on. Esto significa que la direcci´on de memoria a la que
//apunta arr ya no es v´alida al salir de la funci´on
