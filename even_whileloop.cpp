#include <iostream>
using namespace std;
int main ()
{
    int n;
    int i=1;
    int sum=0;
    cout <<"pleas enter the number\n";
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        {
sum+=i;
        }
        i++;
    }
    cout<<sum<<endl;

    
    return 0;
}