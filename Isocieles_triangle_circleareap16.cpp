#include <iostream>
#include <cmath>
using namespace std;
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
    cout <<"Area of circle = "<<area<<endl;
    cout <<"Area of circle = "<<round(area)<<endl;
    cout <<"Area of circle = "<<ceil(area)<<endl;
    return 0;

    
}