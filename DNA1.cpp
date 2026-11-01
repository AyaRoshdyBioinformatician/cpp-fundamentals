#include <iostream>
#include <string>
using namespace std;
string F_dnaScript()
{
    string dna="AGGCATTAGGTAGACTGGTA";
    string re="";
    for (int i=0;i<dna.size();i++)
    {
        if(dna[i]=='A')
        {
            re="T"+re;
        }
        
        if(dna[i]=='T')
        {
            re="A"+re;
        }
        
        if(dna[i]=='G')
        {
            re='C'+re;
        }
        
        if(dna[i]=='C')
        {
            re='G'+re;
        }
        
    }
    return re;

}
int main()
{
    int countA=0;
    string dna="AGGCATTAGGTAGACTGGTA";
    for(int i=0;i< dna.size();i++)
    {
        if(dna[i]=='A')
        {
            countA++;
        }
    }
    int countCG=0;
    for (int i=0;i<dna.size();i++)
    {
        if (dna[i]=='C'||dna[i]=='G')
        {
countCG++;
        }
    }
    cout << countCG <<endl;
    float  CG=(float)countCG/(float)dna.size(); 
    CG=CG*100;
       cout << CG <<endl;
       cout << F_dnaScript()<<endl;
       


    return 0;
}
