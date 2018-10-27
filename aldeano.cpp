#include "aldeano.h"

Aldeano::Aldeano(){}

int Aldeano::getTipo() const
{
    return tipo;
}

void Aldeano::setTipo(int value)
{
    tipo = value;
}

int Aldeano::getAtaque() const
{
    return ataque;
}

void Aldeano::setAtaque(int atk)
{
    ataque = atk;
}

int Aldeano::getDefensa() const
{
    return defensa;
}

void Aldeano::setDefensa(int def)
{
    defensa = def;
}

int Aldeano::getMagia() const
{
    return magia;
}

void Aldeano::setMagia(int magic)
{
    magia = magic;
}

void Aldeano::setNombre(string nom)
{
    nombre = nom;
}

string Aldeano::getNombre()
{
    return nombre;
}

void Aldeano::setEdad(int ed)
{
    edad = ed;
}

int Aldeano::getEdad() const
{
    return edad;
}

void Aldeano::setGenero(string gen)
{
    genero = gen;
}

string Aldeano::getGenero() const
{
    return genero;
}

double Aldeano::getSalud() const
{
    return salud;
}

void Aldeano::setSalud(double health)
{
    salud = health;
}
