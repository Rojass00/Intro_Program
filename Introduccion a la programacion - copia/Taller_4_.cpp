#include <iostream>
#include <locale.h>

using namespace std;

bool fecha_valida(int dia, int mes, int anio);
bool anio_bisiesto(int anio);
int calcular_edad (int dia, int mes, int anio, int dia2, int mes2, int anio2);

int main() {
setlocale(LC_CTYPE,"spanish");
  int dia, mes, anio;
  int dia2,mes2,anio2;

  cout<<"Ingrese el dia: "<<endl;
  cin>>dia;

  cout<<"Ingrese el numero del mes: "<<endl;
  cin>>mes;

  cout<<"Ingrese el año: ";
  cin>>anio;

  cout<<"Ingrese su dia de nacimiento: "<<endl;
  cin>>dia2;

  cout<<"Ingrese su mes de nacimiento: "<<endl;
  cin>>mes2;

  cout<<"Ingrese su año de nacimiento: "<<endl;
  cin>>anio2;

  bool valida = fecha_valida(dia, mes, anio);
  if (valida == true) {
    cout << "La fecha es valida"<<endl;
  }
  else {
    cout << "La fecha no es valida"<<endl;
  }

  bool bisiesto = anio_bisiesto(anio);
  if (bisiesto == true){
    cout << "El año es bisiesto"<<endl;
  }
  else {
    cout << "El año no es bisiesto"<<endl;
  }

  cout<<"Tu edad es: "<<calcular_edad(dia, mes, anio, dia2, mes2, anio2)<<" años"<<endl;

}

bool fecha_valida(int dia, int mes, int anio){
  if (dia>= 1 && dia<=31){
    if (mes>=1 && mes<=12)
      return true;
  }
  else {
    return false;
  }
}

bool anio_bisiesto(int anio){
  if (anio % 4 == 0 && anio % 100!=0 || anio % 400 == 0){
    return true;
  }
  else {
    return false;
  }
}

int calcular_edad (int dia, int mes, int anio, int dia2, int mes2, int anio2){
    int edad;
    edad = anio - anio2;
    if(mes < mes2){
        edad = edad - 1;
    }
    if(mes2 == mes){
      if(dia < dia2){
        edad = edad - 1;
      }
    }
return edad;
}
