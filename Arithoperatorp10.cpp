#include <iostream>
using namespace std;
int main()
{
    short A,B;

    cout<<"Please enter A \n ";

    cin>>A;
    cout<<"Please enter B \n ";
    cin>>B;
    cout<< A<<"+"<< B<<" = " <<A+B<<endl;
    cout<<A<<"- " <<B<<" = " << A-B <<endl;
    cout<< A<<"* "<<B <<" = " <<A*B<<endl;
    cout<<A<<"/ "<<B<<" = " <<A/B<<endl;
    cout<<A<<"module "<<B <<"=" <<A%B<<endl;
    return 0;

}