 //23_09_03_001_Clase en POO.cpp.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

    class persona {
        
    private:// atributos
        int edad;
        string nombre;
    public: // metodos 
        persona(int, string);//constructor de la clase 
        void leer();
        void dormir();
    };

    // contrsuctor, nos sirve para inicializar los atributos 
    persona::persona(int _edad, string _nombre) {
        edad = _edad;
        nombre = _nombre;

    }

    void persona::leer() {
        cout << " soy " << nombre << "y estoy leyendo un cuento para mimir y tengo\t"<<edad << "años"<<endl;


    }
    void persona::dormir() {

        cout << " soy " << nombre << "y estoy soñando con mi nv Joss\t" << endl;

    }



    int main()
    {
        persona p1 = persona(19, "Emma");
        persona p2 = persona(25, "Jose");

        p1.leer();
        p2.dormir();
        p2.leer();
      

    
        system("pause");
        return 0;
    }

