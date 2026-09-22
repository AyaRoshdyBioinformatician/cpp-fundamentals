#include <iostream>
using namespace std;
int main ()
{
    const double pi=3.14;
    double A,Area;
    cout <<"enter the square length\n ";
    cin>>A;
    cout <<endl;
    Area= (pi*A*A)/4;
    cout<<"Area of circle inscribed in square = "<<Area<<endl;
    return 0;

}