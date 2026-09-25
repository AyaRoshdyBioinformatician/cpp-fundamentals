#include <iostream>
using namespace std;
int main ()
{
    int days,hours,minutes,secounds,numofsday,numofshour,numofsminute,totalsec;
    cout<<"Please enter days,hours ,minutes,seconds of task duration in that exact order \n";
    cin>>days>>hours>>minutes>>secounds;
    numofsminute=minutes*60;
    numofshour=hours*60*60;
    numofsday=days*24*60*60;
    totalsec=secounds+numofsminute+numofshour+numofsday;
    cout <<"the task duration in secounds = "<<totalsec<<endl;
    return 0;
    
}