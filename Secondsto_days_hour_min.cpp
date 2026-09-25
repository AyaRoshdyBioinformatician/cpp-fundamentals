#include <iostream>
using namespace std;
int main()
{
    int numofseconds,remainder,numseconds,numdays,numhours,numminute;
    cout<<"please enter the task duration in seconds \n";
    cin>>numofseconds;
    numdays=numofseconds/(24*60*60);
    remainder=numofseconds % (24*60*60);
    numhours=remainder/(60*60);
    remainder=remainder %(60*60);
    numminute=remainder/60;
    numseconds=remainder%60;
    cout <<"the task duraion in days:hours:minutes:seconds \n";
    cout <<"                   "<<numdays<<":"<<numhours<<":"<<numminute<<":"<<numseconds<<endl;
    return 0;
    
}