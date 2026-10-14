#include<iostream>
using namespace std;
int F_readn()
{
int N;
    cout<<"please enter N\n";
   
    cin>>N; 
    cout<<"************************************************\n";
    return N;
}
int F_factorialloop(int N)
{
    int factorail=1;
    int I;
    for(I=N;I>=1;I--)
    {
        factorail=factorail*I;}
        return factorail;
        
}
int main()
{
    int factorail=1;
    int N,I;
    cout<<"please enter N\n";
   
    cin>>N; 
    cout<<"************************************************\n";
    
    for(I=N;I>=1;I--)
    {        factorail=factorail*I;
        
    }
    cout<<"factorial is : "<<factorail<<endl;

   N= F_readn();
   cout<<F_factorialloop(N)<<endl;
    return 0;
}
