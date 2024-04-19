/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */


#ifndef _CONDUCTOR_H
#define _CONDUCTOR_H

#include "Pasajero.h"


class Conductor: public Pasajero {
public: 
    String^ ModeloCarro;
    String^ PlacaCarro;
    String^ ColorCarro;
    array<byte>^ FotoConductor;
    array<Byte>^ FotoCarro;
    int DNI;
    bool BreveteConfirmacion;
    String^ HuellaDactilar;
    double Calificacion;
    int CantServiciosRealizados;
    int TiempoPenalizacion;
    bool ListaNegra;
    
void ValidarLicencia();
    
void RegistroBiometrico();
    
void AunteticacionBiometrica();
    
void VerMetricas();
    
void AsientosDisponibles();
    
void RegistroConductor();
    
void DefinirDistrito();
    
void CancelarPasajero();
};

#endif //_CONDUCTOR_H