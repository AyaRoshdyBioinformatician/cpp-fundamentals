#include <iostream>
#include <cmath>
using namespace std;
float pi=3.14;
float F_isocieles(float a,float b)
{
    float T=(2*a-b)/(2*a+b);
    float result=pi*(pow(b,2)/4)*T;
    return result;
}
int main ()
{
    double leg,base,tamplet,area;
    const double pi = 3.14;
    cout <<"enter the the leg lenght \n ";
    cin>>leg;
    cout<<"enter the base\n";
    cin>>base;
    tamplet=(2*leg - base)/(2*leg +base);
    area=(pi)*(pow(base,2) /4)*tamplet;
    cout<<endl;
    cout<<"enter a,b \n";
    float a,b;
    cin>>a>>b;
    //cout <<"Area of circle = "<<area<<endl;
    cout <<"Area of circle = "<<round(area)<<endl;
    cout <<"Area of circle = "<<ceil(area)<<endl;
    cout <<"Area of circle = "<<F_isocieles(a,b)<<endl;
    
    return 0;

    
}