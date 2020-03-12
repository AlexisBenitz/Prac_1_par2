#include <iostream>
using namespace std;
class GatoSimple
{
public:
GatoSimple();
~GatoSimple();
private:
int suEdad;
};
GatoSimple::GatoSimple()
{
cout << "Se llamo al constructor" << endl;
suEdad = 1;
}

GatoSimple::~GatoSimple(){
cout << "Se llamo al destructor" << endl;
}
int main(){
cout << "GatoSimple Pelusa ... " << endl;
GatoSimple Pelusa; /// Se le asigna el nombre al objeto gato.
cout << "GatoSimple *apFelix = new GatoSimple" << endl;
GatoSimple * apFelix = new GatoSimple; /// Se le asigna le nombre de apFelix al objeto gatosimple, ademas de que es creado en el heap.
cout << "delete apFelix..." << endl;
delete apFelix; /// Se elimina Felix que vivia en el heap
cout << "Saliendo, observe como se va Pelusa... " << endl; /// Con el destructor se elimina pelusa que vivia en pila
return 0;
}
