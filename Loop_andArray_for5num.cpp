#include <iostream>
using namespace std;

void F_ReadArryData(int Arr1[100],int &lenght)
{
    cout<<"pleas enter your arry lenght \n";
    cin>>lenght;
    
    
    for(int i=0;i<=lenght-1;i++)
    {
       cout<<"pleas enter your num ["<<i+1<<"]:"<<endl;
    cin>>Arr1[i]; 

    }
}
void F_printarrydata(int Arr1[100],int lenght)
{
for(int i=0;i<=lenght-1;i++)
{
cout <<"the number ["<<i+1<<"]:"<<Arr1[i]<<endl;
}
}
int F_Arraysum(int Arr1[100],int lenght)
{
    int sum=0;
    for(int i=0;i<=lenght-1;i++)
    {
        sum=sum+Arr1[i];
    }
    return sum;
}
float F_AverageArr1(int Arr1[100],int lenght)
{
   float Ave= (float)F_Arraysum(Arr1,lenght)/lenght;
   return Ave;
}
int main()
{
    int Arr1[100];
    int lenght=0;
    F_ReadArryData(Arr1,lenght);
   F_printarrydata (Arr1,lenght);
   cout<<"*********************************************************************"<<endl;
   cout<<"the sum of numbers = "<<F_Arraysum(Arr1,lenght)<<endl;
   cout<<"the Ave of numbers = "<<F_AverageArr1(Arr1,lenght)<<endl;

   return 0;

    

}