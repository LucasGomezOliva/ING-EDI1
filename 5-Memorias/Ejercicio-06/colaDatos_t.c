#include "colaDatos_t.h"

colaDatos_t *NewColaDatos(int8_t n_max)
{
    colaDatos_t *Var_colaDatos_t = malloc(1 * sizeof(colaDatos_t));
    if (Var_colaDatos_t == NULL)
    {
        printf("Insufficient memory available\n");
        return NULL;
    }

    else
    {
        (*Var_colaDatos_t).array = malloc(n_max * sizeof(int8_t));

        if ((*Var_colaDatos_t).array == NULL)
        {
            printf("Insufficient memory available\n");
            return NULL;
        }
        else
        {
            (*Var_colaDatos_t).n = 0;
            (*Var_colaDatos_t).n_max = n_max;

            for (int i = 0; i < n_max; i++)
            {
                (*Var_colaDatos_t).array[i] = NULL;
            }
        }
    }
    return Var_colaDatos_t;
}

void freememory(colaDatos_t *cola_datos)
{
    free((*cola_datos).array);
    free(cola_datos);
    printf("Memory freed\n");
}

int8_t Enqueue(colaDatos_t *cola_datos, int8_t item)
{
    if ((*cola_datos).array[(*cola_datos).n] == NULL)
    {
        (*cola_datos).array[(*cola_datos).n] = item;
        (*cola_datos).n++;
    }
    return 0;
}
int8_t Dequeue(colaDatos_t *cola_datos)
{
    int8_t var_int8_t = NULL;
    if ((*cola_datos).array[0] != NULL)
    {
        var_int8_t = (*cola_datos).array[0];
        for (int64_t i = 0; i < (*cola_datos).n; i++)
        {
            (*cola_datos).array[i] = (*cola_datos).array[i + 1];
        }
        (*cola_datos).array[(*cola_datos).n] = NULL;
        (*cola_datos).n--;
        return var_int8_t;
    }
    return (int8_t)0;
}
void printcolaDatos_t(colaDatos_t *cola_datos)
{
    for (int8_t i = 0; i < (*cola_datos).n; i++)
    {
        printf("%d", (*cola_datos).array[i]);
    }
}