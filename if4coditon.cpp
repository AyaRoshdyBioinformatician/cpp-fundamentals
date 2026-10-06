#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    bool licence_drive;
    cout<<"please enter your age \n";
    cin>>age;
    cout<<"please enter you have adrive licence\n";
    cin>>licence_drive;

    if (age>21 && licence_drive) 
    {
       cout<<"you are hired\n"; 
    }
    else
    {
        cout<<"you are rejected\n";
    }
    return 0;
    
}