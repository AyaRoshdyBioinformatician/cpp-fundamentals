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
cout<<"**********************************************************\n";
    int mark;
    cout<<"please enter your mark \n";
    cin>>mark;
    if(mark>=50)
    {
        cout<<"you are pass\n";
    }
    else{
        cout<<"you are failed\n";
    }
cout<<"**********************************************************\n";

    float m1,m2,m3,ave;
    cout<<"please enter your three grades \n";
    cin>>m1>>m2>>m3;
    ave=(m1+m2+m3)/3;
    if(ave>=50)
    {
        cout <<"you are pass\n";
    }
    else
    {
cout<<"you are fail \n";
    }
cout<<"**********************************************************\n";




    int Age;
    cout<<"please enter your age \n";
    cin>>Age;
    if(Age>=18 && Age<=45)
    {
        cout <<"valid Age \n";
    }
    else
    {
        cout<<"invalid Age \n";
    }


cout<<"**********************************************************\n";

    string atm_pin;
    cout<<"please enter your atm pin \n";
    cin>>atm_pin;
    if(atm_pin=="1234")
    {
        cout <<"Your balance =7000\n";
    }
    else{
        cout <<"wrong pin \n";
    }
cout<<"**********************************************************\n";






    return 0;
    
}