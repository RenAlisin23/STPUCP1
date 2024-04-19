/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */


#ifndef _PASAJERO_H
#define _PASAJERO_H

#include "Usuario.h"


class Pasajero: public Usuario {
public: 
    int CantServiciosTomados;
    int TiempoPenalizacion;
    bool ListaNegra;
    
void ElegirVehiculo();
    
void Cancelar();
    
void SelccionarDistrito();
    
void VerServicios();
    
void VerMetricas();
};

#endif //_PASAJERO_H