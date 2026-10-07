#include<iostream>
using namespace std;

enum e_countrychoice{jordon=1,Tunsia=2,Alergia=3,Oman=4,Egypt=5,dubai=6};

int main()
{
    cout<<"*****************************************\n";
    cout<<"choice your country number\n";
    cout<<"(1) jordon\n";
    cout<<"(2) tunisa\n";
    cout<<"(3)Alergia\n";
    cout<<"(4)Oman\n";
    cout<<"(5)Egypt\n";
    cout<<"(6)Other\n";
    cout<<"*****************************************\n";
    e_countrychoice country;
int num;
    cout<<"enter yor choice\n";
    cin>>num;
    country=(e_countrychoice)num;
    switch(country)
    {
        case e_countrychoice::jordon:

        cout<<"your country is jordon\n";
        break;
case e_countrychoice::Tunsia:
        cout<<"your country is Tunsia\n";
        break;
        case e_countrychoice::Alergia:
            cout<<"your country is Alergia\n";
            break;
            case e_countrychoice::Oman:


        cout<<"your country is Oman\n";
        break;
        case e_countrychoice::Egypt:
                cout<<"your country is Egypt\n";
                break;
                case e_countrychoice::dubai:
                cout<<"your country is Dubai\n";
                break;
                default:
    cout<<"others\n";
    }
    

                


    return 0;

}
