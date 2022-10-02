#include "driver.h"

typedef enum
{
    STANDBY,
    LLENADO_TANQUE,
    CENTRIFUGADO,
    LAVANDO,
    RESET
} Maquina_de_Estado;

Maquina_de_Estado Maquina(Maquina_de_Estado STATUS);