
/*   * Project Sistema STPUCP
*  */

#pragma once
#ifndef _PASAJERO_H
#define _PASAJERO_H

#include "Usuario.h"
using namespace System;

namespace STPUCPModel {
    public ref  class Pasajero : public Usuario {
    public:
        property int CantServiciosTomados;

        void ElegirVehiculo();

        void Cancelar();

        void SeleccionarDistrito();

        void VerServicios();

        void VerMetricas();
    };
}

#endif //_PASAJERO_H