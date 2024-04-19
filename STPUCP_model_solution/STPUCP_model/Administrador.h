/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */


#ifndef _ADMINISTRADOR_H
#define _ADMINISTRADOR_H

#include "Usuario.h"


class Administrador: public Usuario {
public: 
    int CantCuentasModificadas;
    int CantServiciosTransporteModificados;
    
void VerMetricas();
    
void ModificarUsuario();
    
void ModificarTransporteServicio();
    
void GenerarPromo();
};

#endif //_ADMINISTRADOR_H