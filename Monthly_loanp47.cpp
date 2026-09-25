#include <iostream>
using namespace std;
int main ()
{
    float loanamount,monthlypayment,nummonth,Months;
    cout<<"enter the loan amount and the monthly payment \n";
    cin>>loanamount>>monthlypayment;
nummonth=loanamount/monthlypayment;
cout<<"Number of monthes= "<<nummonth<<endl;

cout <<"enter the loan amount and how many monthes you want \n ";
cin >>loanamount>>Months;
cout <<"the monthly payment = "<<loanamount/Months<<endl;
return 0;


}