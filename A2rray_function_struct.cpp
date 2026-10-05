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


void F_read1(S_identitycard &person)
{
    cout<<"please enter your first name: \n";
    cin>>person.firstname;
    cout<<"please enter your last name : \n";
    cin>>person.lastname;
    cout<<"please enter your age : \n";
    cin>>person.age;
    cout<<"enter your phone: \n";
    cin>>person.phone;








}
//void F_read(S_identitycard person[2])

   


void F_print(S_identitycard person)
{
    cout<<"first name : "<<person.firstname<<endl;
    cout<<"last name : "<<person.lastname<<endl;
    cout<<"age : "<<person.age<<endl;
    cout<<"phone : "<<person.phone<<endl;
    
}
    
    


//void F_reread(S_identitycard person[2])
//{
//cout<<"please enter your first name: \n";
  //  cin>>person[1].firstname;
    //cout<<"please enter your last name : \n";
    //cin>>person[1].lastname;
    //cout<<"please enter your age : \n";
    //cin>>person[1].age;
    //cout<<"enter your phone: \n";
    //cin>>person[1].phone;
    
//}
void F_reprint(S_identitycard person[2])
{

cout<<"first name : "<<person[0].firstname<<endl;
    cout<<"last name : "<<person[0].lastname<<endl;
    cout<<"age : "<<person[0].age<<endl;
    cout<<"phone : "<<person[0].phone<<endl;
    
    }

int main()
{
    S_identitycard persons[2];
    F_read1(persons[0]  );
    cout<<"**************************************************************\n";
    
    F_print(persons[0]);
cout<<"**************************************************************\n";
cout<<"**************************************************************\n";
F_read1(persons[1]);

F_print(persons[1]);
cout <<"************************************************\n";
F_print (persons[0]);
cout<<"**************************************************************\n";
cout<<"**************************************************************\n";
F_print(persons[1]);
return 0;



}