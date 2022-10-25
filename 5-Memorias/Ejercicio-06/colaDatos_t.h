#include <stdint.h>

struct colaDatos_t
{
    int8_t *array;
    int8_t n_max;
    int8_t n;
} typedef colaDatos_t;

/// @brief Crea una colaDatos_t
/// @param n_max Maximo de items de la colaDatos_t
/// @return Cola de datos que se creo
colaDatos_t *NewColaDatos(int8_t n_max);

/// @brief Agrega un item a una colaDatos_t
/// @param cola_datos colaDatos_t donde se va a agregar el item
/// @param item Item a agregar
/// @return 1 - si se agrego /// 0 - si NO se agrego
int8_t Enqueue(colaDatos_t *cola_datos, int8_t item);

/// @brief Quita un dato de una colaDatos_t
/// @param cola_datos colaDatos_t de donde se va a quitar un dato
/// @return dato quitado
int8_t Dequeue(colaDatos_t *cola_datos);

/// @brief Imprime los datos de una colaDatos_t
/// @param cola_datos Cola de datos que se va a imrpimir
/// @return 1 - si se imprimio el contenido de una colaDatos_t /// 0 - si la colaDatos_t estaba vacia
void printcolaDatos_t(colaDatos_t *cola_datos);

/// @brief
/// @param cola_datos
/// @return
void freememory(colaDatos_t *cola_datos);