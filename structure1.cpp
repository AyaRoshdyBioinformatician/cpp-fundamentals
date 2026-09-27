#include<iostream>
using namespace std;

struct stStudent
{
    string name;
    string age;
    int code;
    string address;
};
struct stproduct
{
    int id;
    string name;
    float price;
};

int main()
{
    stStudent student1;
    student1.name= "Aya";
    student1.age="32";
    student1.code=155;
    student1.address="suez";
    cout<<student1.name<<"   "<<student1.age<<"  "<<student1.code<<"  "<<student1.address<<endl;
   stproduct pro1;
   cin>>pro1.id;
   cin>>pro1.name;
   cin>>pro1.price;
   cout<<pro1.id<<endl;
   cout<<pro1.name<<endl;
   cout<<pro1.price<<endl;
    return 0;

}