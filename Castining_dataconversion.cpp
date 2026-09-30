#include <iostream>
#include <string>
using namespace std;
int main()
{
    //convert string to int ,double,float
    string X="43.222";
    int A=stoi(X);
    float B=stof(X);
    double C=stod(X);
    cout <<"the number in integar = "<<A<<endl;
    cout <<"number in float form = "<<B<<endl;
    cout<<"number in double form = "<<C<<endl;
//convert integer to string
    int Y=20;
    string Z=to_string (Y);
    cout <<"the string "<<Z<<endl;

    //convert double to string
    double N=33.5;
    string U=to_string(N);
    cout <<"the string type= "<<U<<endl;


    //convert float to integer and string
        float N3=55.23;
        int P;
        P=N3;
        P=(int)N3;
        P=int(N3);

        string FF;
        FF=to_string(N3);

        cout <<"the int num = "<<P<<endl;

        cout<<"the string is "<<FF<<endl;
 return 0;
}