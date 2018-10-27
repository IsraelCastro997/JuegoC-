#include "civilizacion.h"
#include<fstream>
#include <algorithm>
#include <string.h>
#include<iomanip>

Civilizacion::Civilizacion(){}

std::string Civilizacion::getNombreCivilizacion()
{
    return nombreCivilizacion;
}

void Civilizacion::setNombreCivilizacion(const std::string &nomC)
{
    nombreCivilizacion = nomC;
}

void Civilizacion::agregar(Aldeano &a)
{
    aldeanos.push_back(a);
    cout<<"_____________________________________"<<endl;
}

void Civilizacion::mostrar()
{
    for(auto it = aldeanos.begin(); it != aldeanos.end(); ++it)
    {
        cout<<left;
        cout<<setw(10)<<"Nombre"
            <<setw(10)<<"Edad"
            <<setw(10)<<"Salud"<<endl;
        Aldeano &a = *it;
        cout<<setw(10)<<a.getNombre()
            <<setw(10)<<a.getEdad()
            <<setw(10)<<a.getSalud()<<endl;
        cout<< "\n";
    }
}

void Civilizacion::frente()
{
        if(!aldeanos.empty())
        {
        cout<<aldeanos.front()<<endl;
        }
        else
        {
            cout<<"Vector esta vacio"<<endl;
        }
        cout<<"__________________________________"<<endl;
}

void Civilizacion::ultimo()
{
    if(!aldeanos.empty())
    {
    cout<<aldeanos.back()<<endl;
    }
    else
    {
        cout<<"Vector esta vacio"<<endl;
    }
    cout<<"___________________________________"<<endl;
}

/*void Civilizacion::respaldar()
{
 ofstream archivo(""
                  "C:\\Users\\Israel\\Desktop\\aldeanos.txt",
                  ios_base::out);
 if(archivo.is_open())
 {
     for(size_t i=0;i<aldeanos.size();i++)
     {
         Aldeano &a = aldeanos[i];
         archivo<<a;
     }
 }
 archivo.close();
}

void Civilizacion::recuperar()
{
    ifstream archivo(""
                     "C:\\Users\\Israel\\Desktop\\aldeanos.txt",
                     ios_base::in);
    if(archivo.is_open())
    {
        string linea;
        int edad;
        string genero;
        double salud;

        Aldeano a;

        while(!archivo.eof())
        {
            getline(archivo, linea);
            if (archivo.eof())
            {
                break;
            }
            a.setNombre(linea);
            // cout<< linea<<endl;

            getline(archivo, linea);
            edad=stod(linea);
            a.setEdad(edad);
            //cout<< linea<<endl;

            getline(archivo, linea);
            salud=stod(linea);
            a.setSalud(salud);
            //cout<< linea<<endl;

            getline(archivo, linea);
            genero = stoi(linea);
            a.setGenero(genero);
            //cout<< linea<<endl;

            agregar(a);
        }
    }
}*/

void Civilizacion::inicializar(size_t n, const Aldeano &a)
{
    aldeanos = list<Aldeano>(n,a);
    cout<<"____________________________________"<<endl;
}

void Civilizacion::ordenarNombre()
{
    aldeanos.sort();
    cout<<"_________________________________________"<<endl;
}

bool comparador(const Aldeano &a1, const Aldeano &a2)
{
    return a1.getSalud() < a2.getSalud();
}

void Civilizacion::ordenarSalud()
{
    aldeanos.sort(comparador);
}

/*void Civilizacion::insertar(size_t i, const Aldeano &a)
{
    if (i >= aldeanos.size()) {
        cout<< "Posicion no valida."<<endl;

    }else
    {
        ///vector<Aldeano>::iterator it = aldeanos.begin();
        auto it = aldeanos.begin();
        aldeanos.insert(it + i,a);
    }
    cout<<"______________________________________"<<endl;
}*/

void Civilizacion::agregarInicio(const Aldeano &a)
{
    aldeanos.push_front(a);
}

void Civilizacion::agregarFinal(const Aldeano &a)
{
    aldeanos.push_back(a);
}

void Civilizacion::borrar(const string n)
{
    for(auto it = aldeanos.begin(); it != aldeanos.end();++it)
    {
        Aldeano &a = *it;
        if(n == a.getNombre())
        {
            aldeanos.erase(it);
            break;
        }
    }
}

void Civilizacion::poblacion()
{
    size_t i;

    for(auto it = aldeanos.begin(); it != aldeanos.end(); ++it)
    {
        cout<<"Cantidad de aldeanos: "<<i<<endl<<endl;
        cout<<"_____________________________________"<<endl;
    }
}

int Civilizacion::operator +(const int xInteger)
{
    int iAuxiliar;

    for(auto it = aldeanos.begin(); it != aldeanos.end(); ++it)
    {
        Aldeano &a = *it;
        iAuxiliar = this->a.setSalud() + a.setSalud();
    }
    return iAuxiliar / xInteger;
}

int Civilizacion::saludPromedio()
{

}

