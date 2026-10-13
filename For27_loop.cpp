#include <iostream>
using namespace std;

int F_readn()
{
    int N;
    cout<<"pleas enter the number: \n";
    cin>>N;;

    cout<<"************************************************************ \n";
    return N;
}
void F_forloop(int N)
{
    for(;N>=1;N--)
    {
        cout<<N<<endl;

    }
    
};
int main()
{
    int N=F_readn();
    F_forloop(N);
    return 0;
}