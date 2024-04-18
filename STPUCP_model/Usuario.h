/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */

#pragma once

#ifndef _USUARIO_H
#define _USUARIO_H
using namespace System;
namespace STPUCPModel {
    public ref class Usuario {
    public:
        property int Id;
        property String^ ApellidoPaterno;
        property String^ ApellidoMaterno;
        property int CodigoPUCP;
        property int NumeroTelefono;
        property String^ Correo;
        property String^ Contraseña;
        property String^ Nombre;

        Usuario();
        Usuario(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseña, String^ nombre);

        void Verificarcontraseña();
        void SeleccionarTipoUsuario();
        void OfrecerServicio();
    };
}

#endif //_USUARIO_H