#include <iostream>
using namespace std;
struct s_battary
{
    int capacity ;
    string health;
};
struct s_phone
{
    string name;
    int price;
    s_battary ph_battary;
};
struct s_structor
{
    string instructname;
    string structspecializaton;
};
struct s_course
{
    string courstitle;
    int durationinhour;
    s_structor courseinstuctor;
};
int main()
{
    s_phone ph1,ph2;
    cin>>ph1.name>>ph1.price>>ph1.ph_battary.capacity>>ph1.ph_battary.health;
    cin>>ph2.name>>ph2.price>>ph2.ph_battary.capacity>>ph2.ph_battary.health;
    cout<<ph1.name<<ph1.price<<ph1.ph_battary.capacity<<ph2.ph_battary.health<<endl;
    cout<<ph2.name<<ph2.price<<ph2.ph_battary.capacity<<ph2.ph_battary.health<<endl;
    //دول اتنين تمرين مع بعض مش متنسقين
    //حاولى تظبطى المسافات وتعملى مقرانات بين حالات الفون 
    //ظبطتى منظر الطباعه للبرنامجين والتنسيق 
s_course mycourse;
cin >>mycourse.courstitle>>mycourse.durationinhour>>mycourse.courseinstuctor.instructname>>mycourse.courseinstuctor.structspecializaton;
cout <<mycourse.courstitle<<mycourse.durationinhour<<mycourse.courseinstuctor.instructname<<mycourse.courseinstuctor.structspecializaton<<endl;
return 0;
}