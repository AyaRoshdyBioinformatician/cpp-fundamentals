#include <iostream>
#include <cmath>
using namespace std;
const float pi=3.14;
float F_circumarea(float L)

{
    float result=(pow(L,2))/(4*pi);
    return result;
}
int main ()
{

    const double pi =3.14; 
   // حساب مساحه الدائره من خلال المحيط
   double L,area;
   cout<<"enter the circle circumference\n";
   cin>>L;
   cout<<endl;
   area=(pow(L,2))/(4*pi);
   cout <<"Area along circumference = "<<floor(area) <<endl;
   cout <<"Area along circumference = "<<floor(F_circumarea(L)) <<endl;
   
   return 0;

}
