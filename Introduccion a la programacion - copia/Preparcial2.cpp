#include <iostream>

using namespace std;

int main()
{
	int m;//cantidad de casos
	int l;//longitud parches
	int n;//cantidad agujeros

	int agujero1;//guarda posicion de 1 agujero
	int agujero2;//guarda posicion 2 agujero
	int parches;//contador cantidad de parches que se necesitan

	cout<<"digite la cantidad de casos a considerar ";
	cin >> m;
     //ciclo de la cantidad de casos
	for (int i=0; i<m; i++)
    {

        cout<<"digite la cantidad de agujeros que tiene la manguera ";
        cin>>n;
        cout<<"digite la longitud de los parches a colocar ";
        cin>>l;

        cout<<"Digite la ubicación del primer agujero que tiene la manguera ";
        cin >> agujero1;

        parches=1;
        //ciclo cantidad de agujeros
        for (int j = 1; j<n; j++)
        {
           cout<<"Digite la ubicación del siguiente agujero que tiene la manguera ";
           cin >> agujero2;
           // 6-1 >1 si  10 -6 si
           cout<<"agujero 2: "<<agujero2<<endl;
           cout<<"agujero 1: "<<agujero1<<endl;
               //10 -6 =4  10 - 10 >1 no
		   if ((agujero2 - agujero1) > l)
		   {
			 parches++; //2  3
             agujero1 = agujero2; //6  10
           }
    	}
    	cout << parches <<endl;
    }

	return 0;
}
