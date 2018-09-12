#include <iostream>
using namespace std;
struct Dato{
	int dato1;
	char dato2[20];
};
int main(){

     struct Dato Var1;
     struct Dato *ptr;
     ptr=&Var1;
     cout<<"Puntero="<<&ptr<<endl;//Nos imprime el valor del puntero
     cout<<"Direccion del puntero"<<ptr<<endl;//Imprime la direccion del puntero
    return 0;
}
