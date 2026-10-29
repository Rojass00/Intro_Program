#include <iostream>

using namespace std;

int main()
{
   int capac01; //con cuanto se llena mi piscina
   int capac02;//con cuanto se llena la piscina deel  vecino

   int balde01;//cuanto puede transportar mi balde
   int balde02;//cuanto el balde del vecino

   int sale01;//cuanto se pierde en cada pasada mia
   int sale02;//cuanto se pierde en la del vecino

   int viajes01;//cuantos viajes hago yo
   int viajes02;//cuantos el vecino

   int agua01;//cuanto llevo
   int agua02;//cuanto lleva el vecino
   bool ganador;

   cout<<"digite la capacidad de la piscina 01 ";
   cin>>capac01;
   cout<<"digite la capacidad del balde 01 ";
   cin>>balde01;
   cout<<"digite cuanta agua pierde la piscina 01 ";
   cin>>sale01;

   cout<<"digite la capacidad de la piscina 02 ";
   cin>>capac02;
   cout<<"digite la capacidad del balde 02 ";
   cin>>balde02;
   cout<<"digite cuanta agua pierde la piscina 02 ";
   cin>>sale02;

   ganador=false;
   agua01=0;
   agua02=0;
   viajes01=0;
   viajes02=0;

   while(ganador == false)
   {
       agua01=agua01+balde01-sale01;//cuanto llevo
       agua02=agua02+balde02-sale02;//cuanto lleva el vecino
       viajes01++; //cantidad de mis viajes
       viajes02++;//canditdad de viajes del vecino

       // si lo que llevo es mayor o igual a la capacidad de mi piscina y lo que lleva el vecino  es menor a lo que lleva
       if((agua01>=capac01)&&(agua02<capac02)){
           cout<< "YO GANE  "<<viajes01;
           ganador = true;
       }
       //si lo que yo llevo es menor a la capacidad de mi piscina y lo que lleva el vecino es mayor o igual a la capacidad de su piscina
       else if((agua01<capac01)&&(agua02>=capac02)){
               cout<< "VECINO "<<viajes02;
               ganador = true;
            }
        //si ambos llevamos igual o mas que la capacidad de la piscina
        else if((agua01>=capac01)&&(agua02>=capac02)){
                   cout<<endl<<"EMPATE "<<viajes02;
                   ganador = true;
                 }
    }
   return 0;
}
