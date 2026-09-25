#include <iostream>
using namespace std;
int main()
{
    float bill,totalbill;
    cout <<"enter the bill ,please \n";
    cin>>bill;
    totalbill =bill*1.1;
    totalbill=totalbill*1.16;
    cout<<"Total bill = "<< totalbill<<endl;
    return 0;
}