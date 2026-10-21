#include<iostream>
#include<cmath>
using namespace std;
void F_readn(int &N,int &M)
{

    
    cout<<"please enter the number\n";
    cin>>N;
    cout<<"please enter the power\n";
    cin>>M;
    cout<<"******************************************************\n";
    
}
int F_looppower(int N,int M)
{//المشكله عندى كانت ف الشرط بتاع الفور غلط لما حليته ع الورقه حاولت اظبطه
    int p=1;
    

    for(int i=1;M>=i;M--)
    {
        p=N*p;
    }
    return p;

}
int main()
{
    int N,M;


F_readn(N,M);
cout<<F_looppower(N,M)<<endl;


return 0;

}