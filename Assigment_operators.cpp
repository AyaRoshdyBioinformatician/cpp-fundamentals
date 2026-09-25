#include <iostream>
using namespace std;
int main()
{
    int A=10,B=20;
    
    A+=B;
    cout <<A<<endl; //A=A+B,A=20+20=30
    A-=B;
    cout <<A<<endl; //A=A-B,30-20=10
    A*=B;
    cout<<A<<endl;  //A=A*B=10*20=200
    A/=B;
    cout <<A<<endl;  //A=A/B=200/20=10
    A%=B;
    cout <<A<<endl; //A=20
    return 0;

}