#include <iostream>
#include<iomanip>

#include"menu.h"
#include"civilizacion.h"
#include"aldeano.h"

using namespace std;

int main()
{

    list<Civilizacion> imperios;

    string op;

    while(true)
    {
        cout<<"1) Agregar Civilizacion."<<endl;
        cout<<"2) Elegir Civilizacion."<<endl;
        cout<<"3) Buscar Civilizacion."<<endl;
        cout<<"4) Eliminar Civilizacion."<<endl;
        cout<<"5) Ordenar Civilizaciones."<<endl;
        cout<<"6) Mostrar Civilizaciones."<<endl;
        cout<<"0) Salir."<<endl;
        getline(cin, op);
        cout<<"________________________________________________"<<endl;

        if (op == "1")
        {
            string nombre;
            size_t opcion;

            cout<<"Nombre: ";
            getline(cin, nombre);

            Civilizacion c;

            c.setNombreCivilizacion(nombre);

            cout<<"1)Agregar civilizacion al inicio."<<endl;
            cout<<"2) Agregar civilizacion al final."<<endl;
            cin>> opcion;
            if(opcion == 1)
            {
               imperios.push_front(c);
            }else
            {
                imperios.push_back(c);
            }
            cin.ignore();
            cout<<"__________________________________"<<endl;
        }
        else if(op == "2")
        {
            size_t n=0;
            for (auto it = imperios.begin(); it != imperios.end();++it) {
                Civilizacion &c = *it;
                cout << ++n << ")";
                cout<< c.getNombreCivilizacion() << endl;
            }
            if (n == 0) {
                cout<< "No hay Civilizaciones"<<endl;
            }
            else
            {
                cout<< "0) Salir." << endl;
                size_t ops;
                cin >> ops; cin.ignore();

                if (ops > n) {
                    cout << "Civilizacion no valida."<<endl;
                }
                else if(op != "0")
                {
                    size_t i =0;
                    auto it = imperios.begin();

                    while(++i != ops)
                    {
                        it++;
                    }

                     Civilizacion &c = *it;
                     Menu m(c);
                }
            }
        }
        else if(op == "3")
        {
            //imperios;
        }
        else if(op == "4")
        {
            size_t opcion;
            cout<<"1) Eliminar por Nombre."<<endl;
            cout<<"2) Eliminar poblacion total menor a X."<<endl;
            cout<<"3) Eliminar por salud promedio menor a 20."<<endl;
            cout<<"4) Salir.";
            cin>>opcion;

            if(opcion == 1)
            {
                string del;
                cout<<"Nombre: ";
                cin>>del;
                cin.ignore();

                for(auto it = imperios.begin(); it != imperios.end();++it)
                {
                    Civilizacion &c = *it;
                    if(del == c.getNombreCivilizacion())
                    {
                        imperios.erase(it);
                        break;
                    }
                }

            }else if(opcion == 2)
            {
                size_t eliminar;
                cout<<"Digite la cantidad de poblacion menor a X a eliminar."<<endl;
                cin>>eliminar;
                for(auto it = imperios.begin(); it != imperios.end();++it)
                {
                    Civilizacion &c = *it;
                    if(eliminar > c.poblacion())
                    {
                        imperios.erase(it);
                        break;
                    }
                }

            }else if(opcion == 3)
            {
                int xDato;
                for(auto it = imperios.begin(); it != imperios.end();++it)
                {
                    Civilizacion &c = *it;
                    if(c.operator +() < 20)
                    {
                        imperios.erase(it);
                        break;
                    }
                }

            }
        }
        else if(op == "5")
        {
            size_t ordenar;
            cout<<"Ordenar por Poblacion ascendente."<<endl;
            cout<<"Ordenar por Poblacion descendente."<<endl;
            cout<<"Ordenar por salud promedio."<<endl;
            cout<<"Salir."<<endl;
            cin>>ordenar;
            if(ordenar == 1)
            {
               bool comparadorPoblacion(const Civilizacion &c1, const Civilizacion &c2)
                {
                    return c1.poblacion() < c2.poblacion();
                }
                imperios.sort();
            }else if
            {
                imperios.sort(comparadorPoblacion2());
            }
        }
        else if(op == "6")
        {
            for(auto it = imperios.begin(); it != imperios.end(); ++it)
            {
                cout<<left;
                cout<<setw(10)<<"Nombre";

                Civilizacion &imperios = *it;
                cout<<setw(10)<<imperios.getNombreCivilizacion();
                cout<< "\n";
            }
        }
        else if(op == "0")
        {
            break;
        }
    }

    return 0;
}
