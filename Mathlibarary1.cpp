#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float s,d,area;
    cout <<"please enter the diagonal of rectangle. \n";
    cin>>d;
    cout<<"please enter the lenght of rectangle side. \n";
    cin>>s;
    area= s*(sqrt((pow(d,2)-pow(s,2))));
    cout <<"the Area of rectangle = "<<area<<endl;
    return 0;
}