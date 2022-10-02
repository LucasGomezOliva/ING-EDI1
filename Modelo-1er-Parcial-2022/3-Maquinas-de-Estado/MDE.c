#include "MDE.h"

Maquina_de_Estado Maquina(Maquina_de_Estado STATUS)
{
    switch (STATUS)
    {

    case STANDBY:
        if (botonInicio == 1)
        {
            AbrirValvulaAgua();
            STATUS = LLENADO_TANQUE;
        }
        break;

    case LLENADO_TANQUE:
        if (botonCancelar == 1)
        {
            CerrarValvulaAgua();
            STATUS = STANDBY;
        }
        if (sensorTanqueLleno == 1)
        {
            CerrarValvulaAgua();
            ActivarMotorLavado();
            cuentaTiempo = 0;
            STATUS = LAVANDO;
        }
        break;

    case LAVANDO:
        if (botonCancelar == 1)
        {
            ApagarMotorLavado();
            STATUS = STANDBY;
        }
        if (cuentaTiempo >= tiempoLavado)
        {
            ApagarMotorLavado();
            ActivarMotorCentrifugado();
            cuentaTiempo = 0;
            STATUS = CENTRIFUGADO;
        }
        break;

    case CENTRIFUGADO:
        if (cuentaTiempo >= tiempoCentrifugado || botonCancelar == 1)
        {
            ApagarMotorCentrifugado();
            STATUS = STANDBY;
        }
        break;

    case RESET:
        STATUS = STANDBY;
        break;

    default:
        STATUS = RESET;
        break;
    }
}