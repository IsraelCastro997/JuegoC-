#ifndef MENU_H
#define MENU_H
#include "civilizacion.h"
#include <list>

class Menu
{
public:
    Menu();
    Menu(Civilizacion &imperios);
private:
   Civilizacion imperios;
   void capturar();
   void inicializar();
   void insertar();

   bool comparadorPoblacion(const Civilizacion &c1, const Civilizacion &c2);
   bool comparadorPoblacion2(const Civilizacion &c1, const Civilizacion &c2);

};

#endif // MENU_H
