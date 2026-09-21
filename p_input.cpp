#include <iostream>
using namespace std;
int main()
{
    string Name;
    int Age;
    string Contry;
    string city;
    char Gender;
    bool Married;
    int Salary;
    cout<<"Enter your name :" <<endl;
    cin>>Name ;
    cout<< "Enter your Age :" <<endl;
    cin>> Age;
    cout<<"Enter your contry:\n";
    cin>>Contry;
    cout<<"Enter your city: \n";
    cin>> city;
    cout<<"Enter your salary:\n";
    cin>>Salary;
    cout <<"Enter your gender:\n";
    cin>>Gender;
    cout <<"Are you Married?\n";

    cin>>Married;
    cout<< "Name: " <<Name <<endl;
    cout<<"Age: "<<Age <<endl;
    cout<<"Contry: " <<Contry<<"\n";
    cout<<"city: " << city <<endl;
    cout<<"Salary: "<<Salary<<endl;
    cout<<"Yearly salary : "<<Salary*12<<endl;
    cout<<"Gender: "<<Gender<<endl;
    cout<<"Married: "<<Married<<endl;
    return 0;


}