#include "driver.h"

typedef enum
{
    STANDBY,
    LLENADO_TANQUE,
    CENTRIFUGADO,
    LAVANDO,
    RESET
} Maquina_de_Estado;

int32_t tiempoLavado = 100;
int32_t tiempoCentrifugado = 100;

Maquina_de_Estado Maquina(Maquina_de_Estado STATUS);