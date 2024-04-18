/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */

#pragma once
#ifndef _TRANSPORTE_H
#define _TRANSPORTE_H

using namespace System;
namespace STPUCPModel {
    public ref class Transporte {
    public:
        property int Id;
        property String^ UltimoParadero;
        property String^ Descripcion;
        property int HoraSalida;
        property int AsientosOcupados;
    };
}
#endif //_TRANSPORTE_H