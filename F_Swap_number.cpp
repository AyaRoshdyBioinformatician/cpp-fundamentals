#include <iostream>
#include<string>
using namespace std;
void  F_swap_num()
{
    float temp,num1,num2;
    cout<<"please enter num1 \n";
    cin>>num1;
    cout<<"please enter num2\n";
   
    cin>>num2;
    cout<<num1<<"\n";
    cout<<num2<<endl;
    
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"************************\n";
cout<<num1<<"\n";
cout<<num2<<endl;



}
int main()
{
F_swap_num();

return 0;
}