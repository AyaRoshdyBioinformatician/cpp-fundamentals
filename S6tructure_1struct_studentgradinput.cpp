#include <iostream>
using namespace std;
struct s_stugrade
{
    string stuname;
    float sci_grade;
    float eng_grade;
    float math_grade;

};
int main ()
{
    s_stugrade stu1,stu2,stu3;
    cout<<"please enter the student name,sci_grade,eng_grade and math_grade in that exact order \n";
    cin>>stu1.stuname>>stu1.sci_grade>>stu1.eng_grade>>stu1.math_grade;

    cout<<"please enter the student name,sci_grade,eng_grade and math_grade in that exact order \n";
    cin>>stu2.stuname>>stu2.sci_grade>>stu2.eng_grade>>stu2.math_grade;
    
    cout<<"please enter the student name,sci_grade,eng_grade and math_grade in that exact order \n";
cin>>stu3.stuname>>stu3.sci_grade>>stu3.eng_grade>>stu3.math_grade;

cout <<stu1.stuname<<"  "<<"has the total grade = "<<stu1.eng_grade+stu1.math_grade+stu1.sci_grade<<endl;

cout <<stu1.stuname<<"  "<<"has the average of grades = "<<(stu1.eng_grade+stu1.math_grade+stu1.sci_grade)/3<<endl;


    cout <<stu2.stuname<<"  "<<"has the total grade = "<<stu2.eng_grade+stu2.math_grade+stu2.sci_grade<<endl;
    cout <<stu2.stuname<<"  "<<"has the average of grades = "<<(stu2.eng_grade+stu2.math_grade+stu2.sci_grade)/3<<endl;
    
    cout <<stu3.stuname<<"  "<<"has the total grade = "<<stu3.eng_grade+stu3.math_grade+stu3.sci_grade<<endl;
    cout <<stu3.stuname<<"  "<<"has the average of grades = "<<(stu3.eng_grade+stu3.math_grade+stu3.sci_grade)/3<<endl;
    return 0;
}
