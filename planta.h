#ifndef planta_h
#define planta_h

#include "empleado.h"


class Planta: public Empleado {
  private: 
    std::string Administrador_Area;

  public:
    Planta(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, std::string  Admi, int Ran );
    std::string  get_Administrador_Area(){return Administrador_Area;}
    void set_Administrador_Area(std::string  Admi);
    void imprime_info();
};

Planta :: Planta (std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, std::string  Admi, int Ran ) : Empleado (Pue, Nom, Mat, Tiempo_Trabajo, Tipo, Ran){
    Administrador_Area= Admi;
}
void Planta :: set_Administrador_Area(std::string  Admi){
  Administrador_Area = Admi;
}

void Planta :: imprime_info (){
    cout << "_______________________________________ \n" ;
    Empleado :: imprime_info();
    cout << "Administrador: " << Administrador_Area << endl;
    cout << "_______________________________________ \n\n" ;
}

#endif