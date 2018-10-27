#include "menu.h"

Menu::Menu(){}

Menu::Menu(Civilizacion &imperios){
    string op;

    while (true)
    {
        cout <<"1)Capturar aldeano."<<endl;
        cout <<"2)Mostrar aldeano."<<endl;
        cout <<"3)Primer aldeano."<<endl;
        cout <<"4)Ultimo aldeano."<<endl;
        cout <<"5)Inicializar."<<endl;
        cout <<"6)Ordenar por nombre."<<endl;
        cout <<"7)Ordenar por Salud."<<endl;
        cout <<"8)Borrar."<<endl;
        cout <<"9)Poblacion total."<<endl;
        cout <<"0)Salir"<< endl;
        getline(cin, op);
        cout<<"_________________________________________"<<endl;

        if(op=="1")
        {
            capturar(); //Capturar
        }
        else if (op =="2")
        {
            imperios.mostrar();
        }
        else if (op =="3")
        {
            imperios.frente();
        }
        else if (op =="4")
        {
            imperios.ultimo();
        }
        else if (op =="5")
        {
            inicializar();
        }
        else if (op =="6")
        {
            imperios.ordenarNombre();
        }
        else if (op == "7")
        {
            imperios.ordenarSalud();
        }
        else if (op == "8")
        {
            string del;
            cout<<"Nombre: ";
            cin>>del;
            cin.ignore();
            imperios.borrar(del);
        }
        else if (op == "9")
        {
            imperios.poblacion();
        }
        else if (op == "0")
        {
            break;
        }
    }
}

void Menu::capturar()
{
    Aldeano a;
    string nombre;
    int temp;
    double salud;
    string genero;

    cout << "Nombre:  ";
    getline (cin, nombre);
    a.setNombre(nombre);

    cout <<"Edad:    ";
    cin >> temp;
    a.setEdad(temp);

    cout <<"Salud:    ";
    cin >> salud;
    a.setSalud(salud);

    cout <<"Genero:      ";
    cin >> genero;
    a.setGenero(genero);

    cin.ignore();

    //imperios.agregar(a);
    imperios <<a;
}

void Menu::inicializar()
{
    size_t n;
    cout<<"Cantidad: ";
    cin>> n;
    cin.ignore();

    Aldeano a;
    string nombre;
    double salud;
    int temp;
    string genero;

    cout << "Nombre:  ";
    getline (cin, nombre);
    a.setNombre(nombre);

    cout <<"Edad:    ";
    cin >> temp;
    a.setEdad(temp);

    cout <<"Salud:    ";
    cin >> salud;
    a.setSalud(salud);

    cout <<"Genero:      ";
    cin >> genero;
    a.setGenero(genero);

    cin.ignore();

    imperios.inicializar(n,a);
}

/*void Menu::insertar()
{
    size_t n;
    cout<<"Posicion: ";
    cin>> n;
    cin.ignore();

    Aldeano a;
    string nombre;
    double salud;
    int temp;
    string genero;

    cout << "Nombre:  ";
    getline (cin, nombre);
    a.setNombre(nombre);

    cout <<"Edad:    ";
    cin >> temp;
    a.setEdad(temp);

    cout <<"Salud:    ";
    cin >> salud;
    a.setSalud(salud);

    cout <<"Genero:      ";
    cin >> genero;
    a.setGenero(genero);

    cin.ignore();

    imperios.insertar(n,a);
}*/

comparadorPoblacion2(const Civilizacion &c1, const Civilizacion &c2)
{
    return c1.poblacion() > c2.poblacion();
}
