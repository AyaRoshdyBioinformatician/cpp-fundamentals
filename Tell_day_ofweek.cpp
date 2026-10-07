#include<iostream>
using namespace std;
int main()
{
    short numday;
    cout <<"please enter the number of the day\n ";
    cin>>numday;
    if(numday== 1)
    {
        cout<<"it is sunday \n";
    }
    else if (numday==2)
    {
        cout<<"it is Monday \n";

    }
    else if (numday==3)
    {
         cout<<"it is Tuseday \n";

    }

    
    else if (numday==4)
    {
         cout<<"it is Wedneseday \n";

    }
    else if (numday==5)
    {
         cout<<"it is Thursday \n";

    }
    else if (numday==6)
    {
                 cout<<"it is Friday \n";


    }

    else if (numday==7)
    {
                 cout<<"it is satrday \n";

    }
    else{
                 cout<<"it is Wrong day \n";

    }
    return 0;




}