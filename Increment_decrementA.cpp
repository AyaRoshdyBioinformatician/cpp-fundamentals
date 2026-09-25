#include <iostream>
using namespace std;
int main ()
{
    int A,B;
    cin>>A>>B;
    //لو حطيت الادخال بعد الانكرمينت وقولت اطبع هيطع الادخال الجديد ومش هيبص للفوق
    A++;
    ++B;
    ++A;
    B--;
    
    cout<<A<<endl<<B<<endl;
    return 0;

}