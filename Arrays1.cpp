#include <iostream>
#include <string>
using namespace std;
void F_readgrades(float grades[3])
{

cout <<"enter grade 1 "<<endl;
cin>>grades[0];
cout<<"enter grade 2 \n";
cin>>grades[1];
 cout<<"enter grade3 \n";
cin>>grades[2];

  cout<<"************************************************\n";
}
float F_average(float grades[3])
{
  float average =(grades[0]+grades[1]+grades[2])/3;
  return average;
}



int main()
{
    float grades[3];
    
   // cout <<"enter grade 1 "<<endl;
    
   // cin>>grades[0];
    
   // cout<<"enter grade 2 \n";
    
    //cin>>grades[1];
   
    //cout<<"enter grade3 \n";
    
    //cin>>grades[2];
  
   // cout<<"************************************************\n";
//
   F_readgrades(grades);
   F_average(grades);
    cout <<"the average of the grades = "<<F_average(grades)<<endl;
    return 0;
}