// 23_16_03_002_POO_CLASE_POKEMON.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Emma Fontes
//  Reto pokemon, crear una clase pokemon

#include <iostream>
using namespace std;

class pokemon // creacion de la clase
{
    //Atributos
    char nombre[15];
    char tipo[15];
    char color[15];
    int ataque;
    int salud;

    //constructor generico
public:
    pokemon()
    {
        strcpy_s(nombre, "Desconocido");
        strcpy_s(tipo, "Desconocido");
        strcpy_s(color, "Desconocido");
        ataque = 15;
        salud = 100;
    }

    //constructor especifico
    pokemon(char n[15], char t[15], char c[15], int a, int s)
    {
        strcpy_s(nombre, n);
        strcpy_s(tipo, t);
        strcpy_s(color, c);
        ataque = a;
        salud = s;
    }

    //Metodo Getter
    char* getnombre() { return nombre; }
    char* gettipo() { return tipo; }
    char* getcolor() { return color; }
    int getataque() { return ataque; }
    int getsalud() { return salud; }

    //Metodo Setter
    void setnombre(char n[15])
    {
        strcpy_s(nombre, n);
    }
    void settipo(char t[15])
    {
        strcpy_s(tipo, t);
    }
    void setcolor(char c[15])
    {
        strcpy_s(color, c);
    }
    void setataque(int a)
    {
        ataque = a;
    }
    void setsalud(int s)
    {
        salud = s;
    }

    void MostrarCaracteristicas()
    {
        cout << "pokemon: " << nombre << endl;
        cout << "tipo: " << tipo << endl;
        cout << "color: " << color << endl;
        cout << "ataque: " << ataque << endl;
        cout << "vida: " << salud << "\n" << endl;
    }

    //Metodos
    void sanar()
    {
        salud++;
    }

    void evolucion()
    {
        cout << "nuevo nombre: " << nombre << endl;
        cout << "nuevo color: " << color << endl;
        cout << "Tipo: " << tipo << endl;
        ataque = ataque * 0.3 + ataque;
        cout << "ataque: " << ataque << endl;
        cout << "vida: " << salud << "\n" << endl;
    }
    void evolucion2()
    {
        cout << "nuevo nombre: " << nombre << endl;
        cout << "nuevo color: " << color << endl;
        cout << "Tipo: " << tipo << endl;
        ataque = ataque * 0.3 + ataque;
        ataque = ataque * 0.3 + ataque;
        cout << "ataque: " << ataque << endl;
        cout << "vida: " << salud << endl;
        cout << "---------------------------------" << "\n" << endl;
    }

    //Destructor
    ~pokemon()
    {
        cout << "pokemon " << nombre << " Destruido " << endl;
    }
};

int main()
{
    //constructor generico (vulpix)
    pokemon desconocido;
    desconocido.MostrarCaracteristicas();

    //Metodo Setter y Getter
    char PKN[15];
    char PKT[15];
    char PKC[15];
    strcpy_s(PKN, "Vulpix");
    strcpy_s(PKT, "Fuego");
    strcpy_s(PKC, "Marron");
    desconocido.setnombre(PKN);
    desconocido.settipo(PKT);
    desconocido.setcolor(PKC);
    desconocido.setataque(15);
    desconocido.setsalud(100);
    desconocido.MostrarCaracteristicas();

    char PKN2[15];
    char PKT2[15];
    char PKC2[15];
    strcpy_s(PKN2, "Ninetales");
    strcpy_s(PKT2, "Fuego");
    strcpy_s(PKC2, "Dorado");
    desconocido.setnombre(PKN2);
    desconocido.settipo(PKT2);
    desconocido.setcolor(PKC2);
    desconocido.setataque(15);
    desconocido.setsalud(100);
    desconocido.evolucion();
    cout << "---------------------------------" << "\n" << endl;

    //Constructor especifico (squirtle)
    char auxiliarN[15];
    strcpy_s(auxiliarN, "Squirtle");
    char auxiliarT[15];
    strcpy_s(auxiliarT, "agua");
    char auxiliarC[15];
    strcpy_s(auxiliarC, "celeste");
    pokemon squirtle(auxiliarN, auxiliarT, auxiliarC, 15, 90);
    squirtle.sanar();
    squirtle.MostrarCaracteristicas();

    char EVN[15];
    strcpy_s(EVN, "Wartortle");
    char EVC[15];
    strcpy_s(EVC, "Azul");
    char EVT[15];
    strcpy_s(EVT, "Agua");
    pokemon Wartortle(EVN, EVT, EVC, 15, 100);
    Wartortle.evolucion();

    char EVN2[15];
    strcpy_s(EVN2, "Blastoise");
    char EVC2[15];
    strcpy_s(EVC2, "Azul");
    char EVT2[15];
    strcpy_s(EVT2, "Agua");
    pokemon Charizard(EVN2, EVT2, EVC2, 20, 100);
    Charizard.evolucion2();

    //pokemon Jigglypuff
    char AUN[15];
    char AUT[15];
    char AUC[15];
    strcpy_s(AUN, "Jigglypuff");
    strcpy_s(AUT, "Hada");
    strcpy_s(AUC, "Rosa");
    pokemon* Jigglypuff = new pokemon(AUN, AUT, AUC, 15, 100);
    Jigglypuff->MostrarCaracteristicas();

    char AUN2[15];
    char AUC2[15];
    char AUT2[15];
    strcpy_s(AUN2, "Wigglytuf");
    strcpy_s(AUC2, "Rosa");
    strcpy_s(AUT2, "Hada");
    pokemon* Wigglytuf = new pokemon(AUN2, AUC2, AUT2, 15, 100);
    Wigglytuf->evolucion();
}
