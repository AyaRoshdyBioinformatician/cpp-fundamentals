#include <iostream>
using namespace std;
int main ()
{
    int A=20,B=20;
    cout<<(A==B)<<endl;
    cout <<(A!=B)<<endl;
    cout <<(A>B)<<endl;
    cout <<(A<B)<<endl;
    cout<<(A>=B)<<endl;
    cout <<(A<=B)<<endl;

    int K,L;
    cout<<"please enter the 2 number\n ";
    cin>>K>>L;
    cout<<K<<" == "<<L<<" is "<<(K==L)<<endl;
    cout <<K<<" != "<<L<<" is "<<(K!=L)<<endl;
    cout<<K<<" > "<<L<<" is "<<(K>L)<<endl;
    cout <<K<<" < "<<L<<" is "<<(K<L)<<endl;
    cout<<K<<" >= "<<L<<" is "<<(K>=L)<<endl;
    cout <<K<<" <= "<<L<<" is "<<(K<=L)<<endl;



    return 0;
}