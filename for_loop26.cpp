#include <iostream>
using namespace std;
int  F_readn()
{
        int N;

    cout<<"please enter your Number:\n";
    cin>>N;
    cout<<"**********************************************************\n";

    return N;
};
    void F_Loop(int N)
    {
        
        for(int i=1;i<=N;i++)
        {
            cout<<i<<endl;
        }
        
    };


int main()
{
    //F_readn();
    F_Loop(F_readn());
    
//for(int i=1;i<=N;i++)
  //  {
    //    cout<<i<<endl;
    //}
    return 0;
    

}