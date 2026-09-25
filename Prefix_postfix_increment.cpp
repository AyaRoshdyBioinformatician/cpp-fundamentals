#include <iostream>
using namespace std;
int main ()
{
    int A=10;
    int B=A++;
    cout <<"A = "<<A<< endl;
    cout <<"B = "<<B<<endl;
     B=++A;
     A=++A;
     B=A++;
     B=--A;
    cout <<"A = "<<A<<endl;
    cout <<"B = "<<B<<endl;
    return 0;

}