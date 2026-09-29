#include <iostream>
using namespace std;
enum e_week{sat,sun,mon,tue,wed,thu,fri};
enum e_direction{south,west,north,east};
enum e_color {red,blue,green,blak,yellow,purble};
enum e_class{Ahmed,Omar,Yamen,Kareem,Amer,Mana};
int main()
{
    e_week today=e_week::tue;
    e_direction direction=e_direction::east;
    e_color mycolor=e_color::green;
    e_class myson=e_class::Omar;
    cout<<"today is : "<<today<<endl;
    cout<<"suez is in the : "<<direction<<endl;
    cout<<"My son name is : "<<myson<<endl;
    cout <<"My color is : "<<mycolor<<endl;
    return 0;
}