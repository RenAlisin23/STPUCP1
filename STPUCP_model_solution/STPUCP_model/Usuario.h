/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */


#ifndef _USUARIO_H
#define _USUARIO_H

class Usuario {
public: 
    int Id;
    String^ ApellidoPaterno;
    String^ ApellidoMaterno;
    int CodigoPUCP;
    int NumeroTelefono;
    String^ Correo;
    String^ Contrasena;
    String^ Nombre;
    
void Verificarcontrasena();
};

#endif //_USUARIO_H