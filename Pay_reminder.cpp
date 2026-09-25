#include <iostream>
using namespace std;
int main ()
{
    float cashpaid,totalbill,remainder;
    cout <<"enter the cashpaied \n";
    cin>>cashpaid;
    cout <<"enter Total bill \n";
    cin >>totalbill;
    remainder=cashpaid-totalbill;
    cout <<"the remainder = "<<remainder;
    return 0;

}