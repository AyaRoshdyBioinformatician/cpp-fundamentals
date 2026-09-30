#include <iostream>
using namespace std;
int main()
{
    int num;
    string name;
    string countary;
    cout<<"please enter num\n";
    cin>>num;
    cout<<"pleas enter name \n";
    /*عند استخدام getline بياخد الانتر اكنه الادخال بتاعه فلازم اقوله
    سطر تجاهل السطر الفاضى من الادخال
    هو خد الانتر السطر الفاضى اكنه هو الداخل فى جيتلين (خد السطر الفاضلى)*/
    
    cin.ignore(1,'\n');

    getline(cin,name);

    cout<<"please enter country\n";
    cin>>countary;
    cout <<num<<endl;
    cout <<name<<endl;
    cout <<countary<<endl;
    return 0;

}