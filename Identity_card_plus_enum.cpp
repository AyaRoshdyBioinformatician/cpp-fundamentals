#include <iostream>
using namespace std;
enum e_gender{ male,female};
enum e_status{married,single,devorced,engaged};
enum e_color{yellow,blue,red,green,blak};
enum e_country{Egypt,sudan,Maldive,France,England};
enum e_city{suez,Mania,ismalia,Asute};
int main()
{
    string Name= "Aya Alaa Amen" ;
short Age=33;
e_country Country= e_country::Egypt;
e_city City= e_city::suez ;
short Salary= 500;
float yearly_salary=12*Salary;
e_status status=e_status::married;
e_gender gender= e_gender::female;
e_color mycolor=e_color::blak;
cout<<"*************************\n";
cout<< "Name : " << Name <<endl;
cout<< "Age : " <<Age<< "\n";

cout<< "Country :"<< Country<<endl;
cout<< "city :"<<City<<"\n";
cout<<"Salary:"<<Salary<<endl;
cout <<"Yearly salary :"<<yearly_salary<<endl;
cout << "Gender :"<< gender<<"\n";
cout <<"status:" << status<<endl;
cout<<"My favorite color is : "<<mycolor<<endl;
cout<<"**************************\n";
return 0;




}