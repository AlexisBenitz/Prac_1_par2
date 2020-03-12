#include <iostream>
using namespace std;
class GatoSimple{
public:
GatoSimple();
~GatoSimple();
int ObtenerEdad()const
{
return *suEdad;  /// Se hace una desreferncia del apuntador
}
void AsignarEdad(int edad)
{
*suEdad = edad; /// Se le asigna el valor que vive en la direccion del apuntador
}

int ObtenerPeso()const
{
return *suPeso;
}
void AsignarPeso(int peso){
*suPeso = peso;
}
private:
int * suEdad; /// los atributos son apuntadores
int * suPeso;
};
GatoSimple::GatoSimple()
{
suEdad = new int(2); /// Se inicializan las variables y se crean en el heap, ademas de que se les asigna un valor, esto DENTRO DEL CONSTRUCTOR.
suPeso = new int(5);
}
GatoSimple::~GatoSimple(){
delete suEdad; /// Se eliminan los valores dentro del heap, DESDE EL DESTRUCTOR.
delete suPeso;
}
int main(){ /// Se hace algo similar al ejercicio 3
GatoSimple * Pelusa = new GatoSimple;
cout << "Pelusa tiene " << Pelusa->ObtenerEdad();
cout << " anios de edad" << endl;
Pelusa->AsignarEdad(5);
cout << "Pelusa tiene" << Pelusa->ObtenerEdad();
cout << " anios de edad" << endl;
delete Pelusa;
return 0;
}

