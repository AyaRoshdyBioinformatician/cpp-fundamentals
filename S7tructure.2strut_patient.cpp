#include <iostream>
using namespace std;
struct s_address
{
    string city;
    string street;
};
struct s_patient
{
    string name;
    int age;
    s_address pa_address;
    
};
int main ()
{
    s_patient sick1,sick2;
    cout<<"Please enter the patient name ,age and address in that exact order \n ";
    
    cin>>sick1.name>>sick1.age>>sick1.pa_address.city>>sick1.pa_address.street;
        cout<<"Please enter the patient name ,age and address in that exact order \n ";

    cin>>sick2.name>>sick2.age>>sick2.pa_address.city>>sick2.pa_address.street;

    cout<<"the name of the first patient : "<<sick1.name<<"and his information :"<<sick1.age<<"  "<<sick1.pa_address.city<<"  "<<sick1.pa_address.street<<endl;
    cout<<"the name of the second patient : "<<sick2.name<<"and his information :"<<sick2.age<<"  "<<sick2.pa_address.city<<"  "<<sick2.pa_address.street<<endl;
    return 0;
}