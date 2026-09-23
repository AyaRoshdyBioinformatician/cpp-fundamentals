#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    const double pi =3.14;
    double a,b,c,T, p;
    cout <<"Please enter the different sides of triangle \n";
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    T=(a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));
    T=T*T;
    cout <<"the area of the circle = "<<pi*T<<endl;
    return 0;
    


}