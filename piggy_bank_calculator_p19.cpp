#include <iostream>
using namespace std;
int main ()
{
    int pennies,nickel,dime,quarter,dollar,totalpennies,totaldollar;
    cout <<"Please enter pennies,nickels,dime,quarter and dollar in that exact order \n";
    cin>>pennies>>nickel>>dime>>quarter>>dollar;
totalpennies=pennies+nickel*5+dime*10+quarter*25+dollar*100;
totaldollar=totalpennies/100;
cout<<endl;
cout<<"Total number of pennies = "<<totalpennies<<endl;
cout<<"Total number of dollar =  "<<totaldollar<<endl;
return 0;

}