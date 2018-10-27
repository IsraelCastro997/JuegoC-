#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <list>
#include "aldeano.h"
#include <string>


class Civilizacion
{
private:
   int cont;
   std::string nombreCivilizacion;
   list <Aldeano> aldeanos;
public:
    Civilizacion();

    std::string getNombreCivilizacion();
    void setNombreCivilizacion(const std::string &nomC);

    void agregarInicio(const Aldeano &a);
    void agregarFinal(const Aldeano &a);

    void agregar(Aldeano &ald);
    void mostrar();
    void frente();
    void ultimo();
    void respaldar();
    void recuperar();
    void inicializar(size_t n, const Aldeano &a);
    void ordenarNombre();
    void ordenarSalud();
    void insertar(size_t i, const Aldeano &a);
    void borrar(string del);
    void poblacion();
    int saludPromedio();

    int operator +(const int xInteger);

   Civilizacion& operator <<(Aldeano &a)
   {
       agregar(a);
       return *this;
   }

   bool operator <( Civilizacion &c) const
   {
       return nombreCivilizacion < c.getNombreCivilizacion();
   }
};

#endif // CIVILIZACION_H
