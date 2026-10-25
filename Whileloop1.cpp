#include <iostream>
using namespace std;
int F_readNumInRange(int from,int to)
{
    int num;
    
        cout<<"please enter number in the range\n";
        
        cin>>num;

    while (num<from||num>to)
    {
                cout<<"Wrong number , please enter number in the range\n";
cin>>num;
    }
return num;
    
}
int main()
{
    cout<<"\nfor loop\n";
    
    for (int i=1;i<=5;i++)
    {
        cout<<i<<endl;

    } 
       cout<<"\nWhile loop\n";
int j=1;
       while (j<=5)
       {
                cout<<j<<endl;
j++;


       }

       int num;
       cout<<"please enter a postive number \n";
       
       cin>>num;
       while(num<0)
       {
cout<<"Wrong number,please enter a postive number \n";

cin>>num;
       }
cout<<"Your postive number is:"<<num<<endl;
int number=F_readNumInRange(-10,5);

cout<<"\nthe number in range"<<number<<endl;



       return 0;
       

}