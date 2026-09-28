#include <iostream>
using namespace std;
struct s_book
{
    string title;
    string authar;
    int year;
};
int main ()
{
    s_book book1,book2;
    book1.title=" morning coffee";
    book2.title="cindrella secrets ";
    book1.authar="nashwa";
    book2.authar="Heba";
    book1.year=2016;
    
    book2.year=2017;
    cout <<book1.authar<<"  "<<book1.title<<"  "<<book1.year<<endl;
    cout <<book2.authar<<"  "<<book2.title<<"  "<<book2.year<<endl;

return 0;

}