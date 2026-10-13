#include<iostream>
using namespace std;
int f_read()
{
    int N;
    cout<<"enter n\n";
    cin>>N;
    return N;
}
int F_loopif(int N)
{
    int sum=0;

    for(int i=1;i<=N;i++)
    if(i%2==0)
    {
        sum=sum+i;
    }
return sum;
}

int main()
{
   
  cout<< F_loopif(f_read())<<endl;
   

    int N;
    int sum=0;

    cout<<"please enter N\n";
    cin>>N;
    cout<<"***********************************************\n";
    
    for(int i=1;i<=N;i++)
    {
        if(i%2==0){
                 sum=sum+i;

        }
    }  
          cout<<sum<<endl;

    return 0;

}