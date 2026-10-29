#include <iostream>
using namespace std;
int main()
{
  int numero1, numero2, numero3, suma, promedio, producto;

  cout << "Digite el primer numero: ";
  cin >> numero1;

  cout << "Digite el segundo numero: ";
  cin >> numero2;

  cout << "Digite el tercer numero: ";
  cin >> numero3;

  suma = numero1 + numero2 + numero3;
  cout << "La suma es igual a: " << suma << endl;

  promedio = (numero1 + numero2 + numero3) / 3;
  cout << "El promedio es igual a: " << promedio << endl;

  producto = numero1 * numero2 * numero3;
  cout << "El producto es igual a: " << producto << endl;

  if (numero1 < numero2 && numero1 < numero3) {
    cout << "El numero menor es: " << numero1 << endl;
  }
  if (numero2 < numero1 && numero2 < numero3) {
    cout << "El numero menor es: " << numero2 << endl;
  }
  if (numero3 < numero2 && numero3 < numero2) {
    cout << "El numero menor es: " << numero3 << endl;
  }
  if (numero1 > numero2 && numero1 > numero3) {
    cout << "El numero mayor es: " << numero1 << endl;
  }
  if (numero2 > numero1 && numero2 > numero3) {
    cout << "El numero mayor es: " << numero2 << endl;
  }
  if (numero3 > numero2 && numero3 > numero2) {
    cout << "El numero mayor es: " << numero3 << endl;
  }
  if (numero1 > numero2 && numero1 < numero3) {
    cout << "El numero de la mitad es: " << numero1 << endl;
  }
  if (numero2 > numero1 && numero2 < numero3) {
    cout << "El numero de la mitad es: " << numero2 << endl;
  }
  if (numero3 > numero2 && numero3 < numero1) {
    cout << "El numero de la mitad es: " << numero3 << endl;
  }
  if (numero1 > numero3 && numero1 < numero2) {
    cout << "El numero de la mitad es: " << numero1 << endl;
  }
}
