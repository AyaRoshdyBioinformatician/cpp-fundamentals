#include <iostream>

using namespace std;
struct stRectangle
{
    float lenght;
    float width;
   float area;
   float perimeter;


} ;
int main()
{
    stRectangle rec1,rec2;
    rec1.lenght=12.5;
    rec1.width=7.7;
    rec2.lenght=15.2;
    rec2.width=8.9;
    rec1.area=rec1.lenght*rec1.width;
    rec2.area=rec2.lenght*rec2.width;

    rec1.perimeter=(rec1.lenght+rec1.width)*2;
    rec2.perimeter=(rec2.lenght+rec2.width)*2;
    
    

    cout<<"rec1.area is = " <<rec1.area<<endl;
    cout<<"rec2.area is = " <<rec2.area<<endl;
    cout<<"rec1.perimeter is = "<<rec1.perimeter<<endl;
    cout<<"rec2.perimeter is = "<<rec2.perimeter<<endl;
    return 0;

}