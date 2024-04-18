/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */


#pragma once
using namespace System;

#ifndef _CONDUCTOR_H
#define _CONDUCTOR_H

#include "Usuario.h"

namespace STPUCPModel {
    public ref class Conductor : public Usuario {
    public:
        property String^ ModeloCarro;
        property String^ PlacaCarro;
        property String^ ColorCarro;
        property int CantAsientos;
        property array<Byte>^ FotoConductor;
        property array<Byte>^ FotoCarro;
        property int DNI;
        property bool BreveteConfirmacion;
        property String^ HuellaDactilar;
        property double Calificacion;
        property int CantServiciosRealizados;

        void ValidarLicencia();

        void RegistroBiometrico();

        void AunteticaciónBiometrica();

        void VerMetricas();

        void AsientosDisponibles();

        void RegistroConductor();

        void DefinirDistrito();

        void CancelarPasaro();

    };
}
#endif //_CONDUCTOR_H