#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int main()
{
    float n1,n2,opR;
    char opT;
    
    
    cout <<"please enter num1 \n";
    cin>>n1;
    cout <<"please enter num2 \n";
    
    cin>>n2;
cout <<"please enter operation type \n";
cin>>opT;
if(opT == '+')
{
    opR=n1+n2;
    cout <<opR<<endl;
}
else if(opT =='-' )
{
    opR=n1-n2;
    cout<<opR<<endl;
}
else if (opT == '*')
{
    opR=n1*n2;
    cout<<opR<<endl;

}
else if (opT == '/')
{
    opR=n1/n2;
    cout<<opR<<endl;

}
else 
{
    cout <<"error operation \n";

}
return 0;

}