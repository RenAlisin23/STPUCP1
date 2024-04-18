
/*   * Project Sistema STPUCP
*  */


#include "Usuario.h"

 /**
  * Usuario implementation
  */


STPUCPModel::Usuario::Usuario()
{
	throw gcnew System::NotImplementedException();
}

STPUCPModel::Usuario::Usuario(int id, String^ apellidoPaterno, String^ apellidoMaterno, int codigoPUCP, int numeroTelefono, String^ correo, String^ contraseña, String^ nombre)
{
	this->Id = id;
	this->ApellidoPaterno = apellidoPaterno;
	this->ApellidoMaterno = apellidoMaterno;
	this->CodigoPUCP = codigoPUCP;
	this->NumeroTelefono = numeroTelefono;
	this->Correo = correo;
	this->Contraseña = contraseña;
	this->Nombre = nombre;
}

void STPUCPModel::Usuario::Verificarcontraseña() {

}

void STPUCPModel::Usuario::SeleccionarTipoUsuario() {

}

void STPUCPModel::Usuario::OfrecerServicio() {

}

