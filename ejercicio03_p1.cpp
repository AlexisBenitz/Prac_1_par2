#include <iostream>
using namespace std;
class GatoSimple{
public:
GatoSimple(){
suEdad = 2;   /// se inicializa la variable suEdad dentro del constructor.
}
~GatoSimple(){}
int ObtenerEdad()const{
return suEdad; ///metodo para obtener su edad
}

void AsignarEdad(int edad){
suEdad = edad; /// metodo para asignar su edad
}
private:
int suEdad; /// el atributo esta encapsulado
};
int main(){
GatoSimple * Pelusa = new GatoSimple; /// Se crea un objeto gato simple de nombre pelusa de tipo apuntador en el heap
cout << "Pelusa tiene " << Pelusa->ObtenerEdad(); /// Se hace una desreferencia del apuntor para obtener el valor que se encuentra en esa direccio.
cout << " anios de edad" << endl;
Pelusa->AsignarEdad(5); /// Se hace otra desreferencia para utilizar ese metodo y poder asignar el valor que vive en el heap
cout << "Pelusa tiene " << Pelusa->ObtenerEdad();
cout << " anios de edad" << endl;
delete Pelusa;/// Se elimina a Pelusa del Heap
return 0;
}
