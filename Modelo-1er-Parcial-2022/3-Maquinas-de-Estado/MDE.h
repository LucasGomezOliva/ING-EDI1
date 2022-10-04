#include "driver.h"

#define TIEMPOLAVADO 100
#define TIEMPOCENTRIFUGADO 100

typedef enum
{
    STANDBY,
    LLENADO_TANQUE,
    CENTRIFUGADO,
    LAVANDO,
    RESET
} eMaquina_de_Estado;

/// @brief Maquina de estado
/// @param STATUS
/// @return eMaquina_de_Estado
eMaquina_de_Estado Maquina(eMaquina_de_Estado STATUS);