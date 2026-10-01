#include <iostream>
#include <string>
using namespace std;
int x=10;
void F_sum()
{
    int x=500;
    cout <<x<<endl;
}
int main()
{
    int x=9002;
    F_sum();
    cout <<x<<endl;
    ::x++;
    ::x++;
    cout<<::x<<endl;
    return 0 ;

}