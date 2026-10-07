#include <iostream>
#include<string>
using namespace std;
enum e_colorchoice{red=1,blue=2,yellow=3,green=4};

int main()
{
    cout<<"**********************************\n";
    cout<<"you can choce the number of color you want \n";
    cout<<"1-red \n";
    cout<<"2-blue\n";
    cout<<"3-yellow\n";
    cout<<"4-green \n";
    cout<<"**********************************\n";

    e_colorchoice color;
    int c;
    cout <<"please enter your choice?\n";
    cin>>c;
    color=(e_colorchoice)c;

    if(color==e_colorchoice::red)
    {
cout<<"your choice is red \n";


    }
    else if (color==e_colorchoice::blue)
    {
        cout<<"your choice is blue \n";
        

    }
    else if (color==e_colorchoice::green)
    {
       cout<<"your choice is green\n";
 

    }
    else if(color==e_colorchoice::yellow)
    {
        
       cout<<"your choice is yellow\n";

    }
    else
    {
        
cout<<"your choice is not found \n";
    }
return 0;
}