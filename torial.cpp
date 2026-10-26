#include<iostream>
using namespace std;
int main()
{
    //#30
    int i,n,t;
    
    
   cout <<"please enter n\n";
    cin>>n;
   
    while (n<=0)
    {
cout <<"wrong n,please enter n\n";
    cin>>n;
    }
    
    
    
    
    t=1;
    
    while(n>=1)
    {
        t=n*t;
        n--;
    }

    cout <<"factorial number = "<<t<<endl;

//#37 problem

    int h,sum;
    cout<<"please enter n\n";
    cin>>h;
    
    while(h!=-99)
    {
        sum=sum+h;
        cout<<"please enter n\n";
    cin>>h;
    }
    cout<<"the final sum"<<sum<<endl;
    
// #46 problem
    int a=65;
    while(a<=90)
    {
        cout <<(char)a<<endl<<endl;
        a++;
    }

    //#50 problem

    cout <<"please enter your pin\n ";
    int pin;
    cin>>pin;
    int o=1;
    int p=1234;
    //هستخدم هنا طريقتين احط الشرطين ف الويل او استخدمif
    while(pin !=1234 && o<3)
    {
cout <<"wrong pin please enter again\n ";
cin>>pin;   
     o++;

       // if (o==3)
       // {            cout<<"your card is blocked \n";

     //   break;
      //  }
    

    }
if (pin==1234)
{
    cout<<"your balance = 7000 \n";

}
else{
            cout<<"your card is blocked \n";

}
        
    


    return 0;

}