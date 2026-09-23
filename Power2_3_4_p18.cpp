#include <iostream>
using namespace std;
int main ()
{
    float A,B,C,Num;
    cout <<"enter the Num \n";
    cin>>Num;
    A=Num*Num;
    B=A*Num;
    C=A*A;
    cout <<endl <<"the power of "<<Num<<"to 2 ="<<A<<endl;
    cout<<"the power of  "<<Num <<"to 3 = "<<B<<endl;
    cout <<"the power of "<<Num<<"to 4 = "<<C<<endl;
    return 0;

}