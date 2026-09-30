#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,s2,s3,concat;
    cout <<"enter your name \n";
   getline( cin,name);
    cout<<"enter s2 and s3 \n";
    cin>>s2>>s3;
concat=s2+s3;
int sum=stoi(s2)*stoi(s3);
cout<<"***************************************************\n ";
    cout <<"the lenght of the string of name is "<<name.length()<<endl;
    cout <<"the character of the 0 2 4 7 are "<<name[0]<<"  "<<name[2]<<"  "<<name[4]<<"  "<<name[7]<<endl;
    cout <<"concatenating of s2 and s3 = "<<concat<<endl;
    cout <<" 5 * 10 = "<<sum<<endl;
    return 0;

}