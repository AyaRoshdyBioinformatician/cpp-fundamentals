#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const float pi=3.14;
    float r,area,d,area_d;
    cout <<"please enter radius of the circle.\n";
    cin>>r; 
    area=pi*pow(r,2);
    cout <<"please enter the diameter of the circle .\n";
    cin>>d;
    area_d=(pi*pow(d,2))/4;
    area=ceil(area);
    area_d=floor(area_d);
        cout<<"circle area by radius = "<<area<<endl;

    cout <<"the area of circle by diameter = "<<area_d<<endl;

    return 0;
}