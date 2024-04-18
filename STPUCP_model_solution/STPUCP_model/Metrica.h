/**
 * Project Sistema STPUCP
 * @author Kevin Tumbalobos
 */


#ifndef _METRICA_H
#define _METRICA_H

class Metrica {
public: 
    int Id;
    String^ Nombre;
    String^ Descripcion;
    int ValorMax;
    int ValorMin;
    array<byte>^ Imagen;
};

#endif //_METRICA_H