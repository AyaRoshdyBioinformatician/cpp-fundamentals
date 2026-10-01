#include <iostream>
#include<string>
#include<cmath>
using namespace std;
float F_RecArea(float a,float b)

{
    float result =a*b;
    return result;
}
float F_RecAraeD(float aside,float dia)
{
    float result2=aside*(sqrt((pow(dia,2)-pow(aside,2))));
    return result2;
}


float F_CircleArea(float r)
{
    const float pi=3.14;
   float result3=pi*pow(r,2);
   return result3;

}
int main ()
{
    //normal Rectangle area
   // float a,b;
   // cin>>a>>b;
    //cout<< F_RecArea(a,b)<<endl;

//rectangle area with diagonal and its side
   // float aside,dia;
  //  cout <<"enter side\n";
  //  cin>>aside;
   // cout<<"enter adiagonal \n";
   // cin>>dia;
    //cout <<F_RecAraeD(aside,dia)<<endl;
const float pi=3.14;
    float r;
    cout <<"please enter r\n";
    cin>>r;
    cout <<"circle area = "<<F_CircleArea(r)<<endl;
    return 0;
}
