 #include <iostream>
using namespace std;
enum e_employment_type{fulltime,parttime,contact};
enum e_leave_type{ Annual,sickleave,unpaid,casual};

struct s_campany
{
    string name;
    string Mainbranch_address;
    string campany_type;

};
struct s_branch
{
    string b_name;
    string b_address;
    s_campany b_campany;
};
struct s_empolyee
{
    string em_name;
    int em_code;
    s_branch em_branch;
    e_employment_type em_type;
    e_leave_type em_leavecause;
};
int main()
{
    int salary;
    s_empolyee empolyee1;
    empolyee1.em_name="aya";
    empolyee1.em_code=7;
    empolyee1.em_branch.b_name="suez branch";
    empolyee1.em_type=e_employment_type::fulltime;
    empolyee1.em_leavecause=e_leave_type::casual;
    empolyee1.em_branch.b_address="Arbeen";
    empolyee1.em_branch.b_campany.name="Metra";
    empolyee1.em_branch.b_campany.campany_type="Medical laboratory";
    empolyee1.em_branch.b_campany.Mainbranch_address="portsaid";
salary=2000;
cout<<empolyee1.em_name<<endl;
cout<<empolyee1.em_code<<endl;
cout<<empolyee1.em_type<<endl;
cout<<empolyee1.em_leavecause<<endl;
cout<<empolyee1.em_branch.b_name<<endl;
cout<<empolyee1.em_branch.b_address<<endl;
cout<<empolyee1.em_branch.b_campany.name<<endl;
cout<<empolyee1.em_branch.b_campany.campany_type<<endl;
cout<<empolyee1.em_branch.b_campany.Mainbranch_address<<endl;
return 0;

}
