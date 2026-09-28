#include <iostream>
using namespace std;
struct s_univer
{
    string univ_name;
    string unive_country;
    string unvi_location;
};
struct s_faclty
{
    string fac_name;
    s_univer fac_univer;


};
struct s_depart
{
    string depart_name;
    s_faclty faclty;


};
struct s_stud 
{
  string name;
  int age;
  string level;
  s_depart depart;  
};
int main ()
{
    s_stud stud;
    cout <<"enter your name\n";
    cin>>stud.name;
    
    cout<<"enter your age: \n";
    cin>>stud.age;
  
    cout<<"please enter your level \n";
    cin>>stud.level;
    
    cout <<"enter your department \n";
    cin>>stud.depart.depart_name;
    
    
    cout<<"enter your faculty:\n";
    cin>>stud.depart.faclty.fac_name;
    
    cout <<"enter your university name : \n";
    cin>>stud.depart.faclty.fac_univer.univ_name;
    
    cout<< "enter your universty city \n";
    cin >>stud.depart.faclty.fac_univer.unive_country;
    
    cout <<"enter your university location \n\n\n";
    cin>>stud.depart.faclty.fac_univer.unvi_location;
    
cout <<"-----------------------------------------------------------------------------\n";
cout<<"Name : "<<stud.name<<endl;
cout<<"Age : "<<stud.age<<endl;
cout <<"level : "<< stud.level<<endl;
cout <<"Department : "<< stud.depart.depart_name<<endl;
cout<<"Faculty : "<< stud.depart.faclty.fac_name<<endl;


cout<<"University : " <<stud.depart.faclty.fac_univer.univ_name<<endl;
cout<<"City  : " <<stud.depart.faclty.fac_univer.unive_country<<endl;
cout<<"unvirsty location : " <<stud.depart.faclty.fac_univer.unvi_location<<endl;
cout <<"------------------------------------------------------------------------------\n";
return 0;
}