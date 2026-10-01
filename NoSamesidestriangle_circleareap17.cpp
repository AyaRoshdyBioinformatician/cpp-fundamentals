#include <iostream>
#include <cmath>


using namespace std;
const float pi=3.14;

float F_arbitrary(float a,float b,float c)
{
    float p=(a+b+c)/2;
    float Y=(a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));

    float result=pi*pow(Y,2);
    return result;



}
int main ()
{
    const double pi =3.14;
    double a,b,c,T, p;
    cout <<"Please enter the different sides of triangle \n";
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    T=(a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));
    T=pow(T,2);
    cout <<"the area of the circle = "<<pi*T<<endl;
    cout <<"the area of the circle = "<<ceil(F_arbitrary(a,b,c))<<endl;
    
    return 0;
    


}