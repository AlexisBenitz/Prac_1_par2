#include <iostream>
using namespace std;
int main(){
int variableLocal = 5;
int * apLocal = &variableLocal;   /// le asigna la direccion de varaible local
int * apHeap = new int;  /// la variable se crea en  el heap
*apHeap = 7;
cout << "variableLocal: " << variableLocal << endl;
cout << "*apLocal: " << *apLocal << endl;
cout << "*apHeap: " << *apHeap << endl;
delete apHeap;
apHeap = new int;
*apHeap = 9; /// crea otro valor dentro del apHeap
cout << "*apHeap: " << *apHeap << endl;
delete apHeap;
return 0;
}
