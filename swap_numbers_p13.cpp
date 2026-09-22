#include <iostream>
using namespace std;
int main ()
{
    short a,b,tamplet;
    cout <<"Enter num1 \n";
    cin>>a;
    cout<<"Enter num2 \n ";
    cin >>b;
    cout<< "\n \n \n " <<a<<endl;
    cout<<b<<"\n \n \n ";
    tamplet=a;
    a=b;
    b=tamplet;
    cout <<a<<endl;
    cout<<b<<endl;
    return 0;

}