#include <iostream>
using namespace std;

struct s_car
{
    string brand;
    string model;
    int year;

};
int main()
{
    s_car car1,car2,car3;
    car1.brand="toyota";
    car2.brand="BMW";
    car3.brand="Kia";
    car1.model="sedan";
    car2.model="vip";
     car3.model="seratow";
     car1.year=1999;
     car2.year=2025;
     car3.year=2017;
     cout<<car1.brand<<endl;
     cout<<car2.brand<<endl;
     cout <<car3.year<<"year for Kia car.\n";
}