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


void F_read1(S_identitycard &information)
{
    cout<<"please enter your first name: \n";
    cin>>information.firstname;
    cout<<"please enter your last name : \n";
    cin>>information.lastname;
    cout<<"please enter your age : \n";
    cin>>information.age;
    cout<<"enter your phone: \n";
    cin>>information.phone;
}


   


void F_print(S_identitycard information)
{
    cout<<"first name : "<<information.firstname<<endl;
    cout<<"last name : "<<information.lastname<<endl;
    cout<<"age : "<<information.age<<endl;
    cout<<"phone : "<<information.phone<<endl;
    
}

void F_readpersonsinfo(S_identitycard persons[2])
{
    F_read1(persons[0]);
    F_read1(persons[1]);
}



void F_printinfoperson(S_identitycard persons[2])
{
    cout<<"**************************************************************\n";
    cout<<"**************************************************************\n";
    F_print(persons [0]);
    F_print(persons[1]);
}
int main()
{
    S_identitycard persons[2];
 
   // F_read1(persons[0]  );
    //F_print(persons[0]);
    
    //F_read1(persons[1]);
    //F_print(persons[1]);
    //cout <<"************************************************\n";
    //F_print (persons[0]);
    //cout<<"**************************************************************\n";
    //F_print(persons[1]);


 F_readpersonsinfo(persons);

    
 F_printinfoperson( persons);
return 0;
    



}