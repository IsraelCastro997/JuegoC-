#ifndef ALDEANO_H
#define ALDEANO_H

#include <iostream>
using namespace std;

class Aldeano
{
private:
    string nombre;
    int edad;
    string genero;
    double salud;
    int tipo;
    int ataque;
    int defensa;
    int magia;

public:
    Aldeano();
    Aldeano (const string n, size_t e, string gen, size_t s)
    {
        nombre = n;
        edad = e;
        genero = gen;
        salud = s;
    }

    void setNombre(string nom);
    string getNombre();

    int getEdad() const;
    void setEdad(int ed);

    string getGenero() const;
    void setGenero(string gen);

    double getSalud() const;
    void setSalud(double value);

    friend ostream& operator <<(ostream &out, Aldeano &a)
    {
        out<< a.getNombre()<<endl;
        out<< a.getEdad()<<endl;
        out<< a.getGenero()<<endl;
        out<< a.getSalud()<<endl;

        return out;
    }

    bool operator <(Aldeano &a) const
    {
        return nombre < a.getNombre();
    }

    int getTipo() const;
    void setTipo(int value);
    int getAtaque() const;
    void setAtaque(int atk);
    int getDefensa() const;
    void setDefensa(int def);
    int getMagia() const;
    void setMagia(int magic);
};
#endif // _H
