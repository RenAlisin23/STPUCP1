
 /*   * Project Sistema STPUCP
*  */

#pragma once

#ifndef _ADMINISTRADOR_H
#define _ADMINISTRADOR_H

#include "Usuario.h"
using namespace System;

namespace STPUCPModel {
    public ref class Administrador : public Usuario {
    public:
        property int CantCuentasModificadas;
        property int CantServiciosTransporteModificados;

        void VerMetricas();

        void ModificarUsuario();

        void ModificarTransporteServicio();

        void GenerarPromo();
    };
}

#endif //_ADMINISTRADOR_H