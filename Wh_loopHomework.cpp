#include<iostream>
using namespace std;
int main()
{
    //problem#26
    int N;
    int i=1;
    cout<<"please enter n\n";
    cin>>N;
    while(i<=N)
    {
        cout<<i<<endl;
        i++;
    }
    //problem27
    int n2;
    cout<<"please enter n 2\n";
    cin>>n2;
    int i2=1;
    while (n2>=i2)

    {
       cout<<n2<<endl;
       n2--; 
    }

    cout<<"------------------------------------------------------------------\n";
    cout<<"------------------------------------------------------------------\n";
    cout<<"please enter the num\n";
    int num3;
    cin>>num3;
    int hi=1;
    int sum=0;
    while (hi<=num3)

    {
        if( hi%2!=0)
        {
sum=sum+hi;
        }
        hi++;
    }
    cout<<"the sum= "<<sum<<endl;
    
    
    return 0;
}