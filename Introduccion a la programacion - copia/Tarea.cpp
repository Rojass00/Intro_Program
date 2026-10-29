#include <iostream>
using namespace std;
int main (){
    int edad;
    int cedula;
    int telefono;
    float estatura;
    string nombre;
    string sexo;

    cout<<"Digite su edad: ";
    cin>> edad;

    cout<<"Digite su cedula sin utilizar caracteres extras: ";
    cin>> cedula;

    cout<<"Digite su numero de celular: ";
    cin>> telefono;

    cout<<"digite su estatura: ";
    cin>> estatura;

    cout<<"Digite su nombre completo: ";
    cin>> nombre;

    cout<<"Digite su sexo: ";
    cin>> sexo;


    if (edad>18){
        cout<<" Eres mayor de edad"<<edad<<end;
    }
    else {
        cout<< "Eres menor de edad"<<edad<<end;
    }

}
