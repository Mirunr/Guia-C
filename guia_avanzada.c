#include <stdio.h> 

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


int main(){
    int8_t memoria[2] = {0x20,0x28};
    int8_t *x = (int8_t*) 0x20;
    int8_t *y = (int8_t*) 0x28;
    printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
    printf("Dir de y: %p Valor: %d\n", (void*) y, *y);
    }

