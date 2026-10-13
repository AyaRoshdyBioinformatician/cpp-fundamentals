#include<iostream>
using namespace std;
int F_read()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    cout<<"*****************************************\n";
    return n;
}
int F_loop(int n)
{
int sum =0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }

    }
    return sum;
}
int main()
{
    int n;
    cout <<"enter n\n";
    cin>>n;
    cout<<"*****************************************\n";
    
    int sum =0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }

    }
    int N=F_read();
    cout<<F_loop(N)<<endl;
    
    cout<<sum<<endl;
    return 0;
}