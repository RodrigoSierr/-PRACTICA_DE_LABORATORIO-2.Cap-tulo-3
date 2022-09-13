#include <iostream>
#include<stdlib.h>

using namespace std;
int main()
{
   int monto, sueldo;
  
   cout<<"NGRESE EL SUELDO DE LA CUENTA: ";
   cin>>sueldo;

   cout<<"INGRESE EL MONTO DEL RETIRO: ";
   cin>>monto;
   
    if( monto < sueldo)
  {
      cout<<"Retiro exitoso";
    }
   else
   {
       cout<<"El monto del retiro excedió el saldo de la cuenta";
   }

   return 0;

}

