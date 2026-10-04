#include <iostream>
#include <string>
using namespace std;

struct S_identitycard
{
    string name;
    short age;
    string city;
    string country;
    string address;
    float monthly_salary;
    char gender;
    bool married;


};
//void F_readinfo(string &info)
//بستخدم الاستركت الى عملتها كداتا  تيب زىint and sting واسمى بيها متغير
//S_identitycard =string =int as datatype for variables.
void F_readinfo(S_identitycard &info)
{
    cout<<"please enter your name?\n";
    getline(cin,info.name);
    cout <<"please enter your age\n";
    cin>>info.age;
    cout <<"please enter your city\n";
    cin>>info.city;
    cout <<"please enter your country\n";
    cin>>info.country;
    cout <<"please enter your monthaly salary\n";
    cin>>info.monthly_salary;
    cout <<"please enter your gender\n";
    cin>>info.gender;
    cout <<"are you married\n";
    cin>>info.married;

}
void F_printinfo(S_identitycard info)
{
cout<<info.name<<endl;
cout<<info.age<<endl;
cout<<info.city<<endl;
cout<<info.country<<endl;
cout<<info.monthly_salary<<endl;
cout<<info.gender<<endl;
cout<<info.married<<endl;
cout<<"yearly salary = "<<info.monthly_salary*12<<endl;


}
int main()
{
S_identitycard per1;
F_readinfo(per1);
F_printinfo(per1);
return 0;

}