#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float A,B,C,Num,D,M;
    cout <<"enter the Num \n";
    cin>>Num;
    A=pow(Num,2);
    B=pow(Num,3);
    C=pow(Num,4);
   /*لما سجلت المتغيرات بعد الادخال الاول عملت المعادلات 
   وحفظمهم ف المتغير قبل مااغير الرقم جوا numتانى*/
    cout <<"please enter the num and its power on the exact order\n",
    cin >>Num>>M;
    D=pow(Num,M);
    cout <<endl <<"the power of "<<Num<<"to 2 ="<<A<<endl;
    cout<<"the power of  "<<Num <<"to 3 = "<<B<<endl;
    cout <<"the power of "<<Num<<"to 4 = "<<C<<endl;
    cout<<D<<endl;
    return 0;

}