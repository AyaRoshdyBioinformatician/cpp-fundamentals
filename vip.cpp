#include <iostream>
using namespace std;
int main()
{
    int p=0;
    
    for(int i=20;i>=10;i--)
    {
        int j=1;
        for(j=j+p;j<=10;j++)
        {
            cout<<j<<"  ";
        }
        cout<<endl;
        p++;
    }
    return 0;
}