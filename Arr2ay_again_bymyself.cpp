#include <iostream>
#include <string>
using namespace std;

struct S_identitycard
{
string firstname;
string lastname;

int age;
string phone; 
};
void F_read(S_identitycard &info)
{
    cout<<"please enter your first name \n";
    cin>>info.firstname;
    cout<<"please enter your last name \n";
    cin>>info.lastname;
    cout<<"please enter your age \n";
    cin>>info.age;
    cout<<"please enter your phone \n";
    cin>>info.phone;
}
void F_print(S_identitycard info)
{
    cout<<"*************************************\n";
    cout<<"first name :"<<info.firstname<<endl;
    cout<<"last  name :"<<info.lastname<<endl;
    cout<<"age :"<<info.age<<endl;
    cout<<"phone :"<<info.phone <<endl;
    cout<<"*************************************\n";

}
 void F_readArr(S_identitycard persons[2])
 {
    F_read(persons[0]);
    F_read(persons[1]);
 }
 void F_printArr(S_identitycard persons[2])
 {
    F_print(persons[0]);
    F_print(persons[1]);
 }
 int main()
 {
    S_identitycard persons[2];
    F_readArr(persons);
    F_printArr(persons);
   // cout <<F_printArr<<endl;
    return 0;
 }