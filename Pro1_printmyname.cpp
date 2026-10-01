#include <iostream>
#include <string>
using namespace std;
void P_myname()
{
    string name;
    cout <<"enter your name\n";
    getline(cin,name);

    cout <<name<<endl;
}
int main()
{
    P_myname();
    
    return 0;
}
