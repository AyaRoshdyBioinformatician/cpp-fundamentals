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

void F_swap2_2num(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
    
//cout<<"after swap num1= "<<x<<"num2 = "<<y<<endl;
//ليها طرقتين يااحط الطباعه جوا الفانكشن
//يخلى الطباعه بعد استدعاء الفانكشن
//هشغله ع انى هطبع بعد استدعاء الفانكشن لو عاوزه اغير اشيلهم من الكومنت
}




int main()
{
//F_swap_num();


    int num1,num2;

 cout<<"please enter num1 \n";
cin>>num1;

    cout<<"please enter num2\n";
cin>>num2;
    cout<<"before swap num1 = "<<num1<<"\n";

    cout<<num2<<endl;
    cout<<"************************\n";
F_swap2_2num(num1,num2);
   //cout<< F_swap2_2num(num1,num2)<<endl;
   //دلوقت مقدرش اطبع داله void
   //فطلع errorلان القيمه الى بترجعها فراغ ملهاش قيمه بترجع فى الريترن
   
   //وعشان اشغلها خليت الداله من نوع intوقفلتها بreturn0فطبعت قيمه الريترن الى هو صفر
   
   
   cout<<num1<<endl;

  cout<<num2<<endl;






return 0;
}