#include<iostream>
#include<string>
using namespace std;
int main()
{
    float TS,Tc;
    cout <<"please enter total sales \n";
    cin >>TS;
    
    if(TS>1000000)
    {
Tc=TS*0.01;
cout<<"total commision = "<<Tc<<endl;

    }
    else if(TS<=1000000 && TS>500000)
    {
        Tc=TS*0.02;
cout<<"total commision = "<<Tc<<endl;
        ;
    }
    else if (TS<=500000&&TS>100000)
    
    {
Tc=TS*0.03;
cout<<"total commision = "<<Tc<<endl;

    }
else if (TS<=100000&&TS>50000)
{
Tc=TS*0.05;
cout<<"total commision = "<<Tc<<endl;
}
else{
    cout<<"total commision = 0 \n ";

}
return 0;

}