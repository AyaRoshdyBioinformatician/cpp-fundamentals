#include <iostream>
using namespace std;
int main()
{
    int A,G,C,T;
    cout<<"please enter the Four Neocleotides at the same order of A T G C\n";
    cin >>A;
    cin>>T;
    cin>>G;
    cin>>C;
    int total =A+G+C+T;
    int GC=G+C;
    float GCpercentage=((float)GC/(float)total)*100;

    if(GCpercentage>60)
    {
        cout <<"High GC content\n ";

    }else if (GCpercentage<40)
    {
        cout <<"low GC content\n ";
    }else{
        cout <<"Moderate GC content\n ";

    }
    return 0;

}