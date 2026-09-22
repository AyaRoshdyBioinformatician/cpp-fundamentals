#include <iostream>
using namespace std;
int main ()
{

    const double pi =3.14; 
   // حساب مساحه الدائره من خلال المحيط
   double L,area;
   cout<<"enter the circle circumference\n";
   cin>>L;
   cout<<endl;
   area=(L*L)/(4*pi);
   cout <<"Area along circumference = "<<area <<endl;
   return 0;

}
