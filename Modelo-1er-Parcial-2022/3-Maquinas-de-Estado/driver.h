#include <stdint.h>

int32_t botonInicio;
int32_t botonCancelar;
int32_t cuentaTiempo;
int32_t sensorTanqueLleno;

/// @brief d7 d6 d5 d4 d3 d2 d1 d0
uint8_t *registro_hardware;

/// @brief d7: Al estar en 1, permite abrir la válvula de agua.
void AbrirValvulaAgua(void);

/// @brief d7: Al estar en cero, cierra la válvula de agua.
void CerrarValvulaAgua(void);

/// @brief d5: Al estar en 0, activa el motor de lavado.
void ActivarMotorLavado(void);

/// @brief d5: Al estar en 1, apaga el motor de lavado.
void ApagarMotorLavado(void);

/// @brief d1-d0: Se necesita la combinación 11.
void ActivarMotorCentrifugado(void);

/// @brief d1-d0: Se necesita la combinación 00.
void ApagarMotorCentrifugado(void);

/// @brief 
/// @param bit 
/// @param reg 
/// @param state 
void set_bit(uint8_t *reg, uint8_t bit, uint8_t state);