#include<iostream>
using namespace std;

enum e_monthchoice{jan=1,feb=2,march=3,apr=4,may=5,june=6,july=7,aug=8,sep=9,oct=10,nov=11,dec=12};
int main()
{
    cout<<"*********************************************\n";
    cout<<"enter your month\n";
    int m;
    cin>>m;
    e_monthchoice month;
    month=(e_monthchoice)m;
    switch (month)
    {
    case e_monthchoice::jan:
        cout<<"the month is january\n";
        break;
        case e_monthchoice::feb:

            cout<<"the month is febuary\n";
            break;
            case e_monthchoice::march:
            cout<<"the month is March\n";
            break;
            case e_monthchoice::apr:

            cout<<"the month is April\n";
            break;
            case e_monthchoice::may:

            cout<<"the month is May\n";
            break;
            case e_monthchoice::june:
            cout<<"the month is june\n";
            break;
            case e_monthchoice::july:
            cout<<"the month is july\n";
            break;
            case e_monthchoice::aug:
            cout<<"the month is August\n";
            break;
            case e_monthchoice::sep:
            cout<<"the month is september\n";
            break;
            case e_monthchoice::oct:
            cout<<"the month is october\n";
            break;
            case e_monthchoice::nov:
            cout<<"the month is November\n";
            break;
            case e_monthchoice::dec:
            cout<<"the month is December\n";
            break;
            
            


    default:
    cout<<"the month is wrong\n";
        break;
    }
    return 0;
}