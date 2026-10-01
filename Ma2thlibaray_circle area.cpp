#include <iostream>
#include <cmath>
using namespace std;
float F_diametercirarea(float D)
{
    const float  pi=3.14;
    float result=(pi*pow(D,2))/4;
    result=ceil(result);
    return result;
}
float F_inscriarea_insquar(float A)
{
    const float pi=3.14;
    float result=pi*pow(A,2)/4;
    
    return result;
}


int main()
{
    const float pi=3.14;
    float r,area,d,area_d,squareside,areabysquare;
    cout <<"please enter radius of the circle.\n";
    cin>>r; 
    area=pi*pow(r,2);
    float D;
    cout <<"please enter the diameter of the circle .\n";
    cin>>D;
    cin>>d;
    area_d=(pi*pow(d,2))/4;
    area=ceil(area);
   area_d=floor(area_d);
        cout<<"circle area by radius = "<<area<<endl;
        cout<<"circle area by radius = "<<area<<endl;

   cout <<"the area of circle by diameter = "<<area_d<<endl;
    cout <<"the area of circle by diameter = "<<F_diametercirarea(D) <<endl;
    cout<<"please enter the squar side: \n";
    float A;
    cin>>A;
    cin>>squareside;
    areabysquare=pi*(pow(squareside,2)/4);
    cout <<"the area circle inscribed in square = "<<ceil(F_inscriarea_insquar(A))<<endl;

//انا حاطه3مسائل مره حلاهم عادى ومره عامله كل واحده بداله

    return 0;
}