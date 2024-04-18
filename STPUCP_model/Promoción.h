/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */

#pragma once 
#ifndef _PROMOCIÓN_H
#define _PROMOCIÓN_H
using namespace System;

namespace STPUCPModel {
    public ref class Promoción {
    public:
        property int Id;
        property double Porcentaje;
        property String^ NombrePromo;
    };
}

#endif //_PROMOCIÓN_H