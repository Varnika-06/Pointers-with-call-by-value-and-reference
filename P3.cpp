//Name: Varnika Maurya
//PRN: 24070123160
//Exp No. 10
//Program 3
#include<iostream>
using namespace std;
void increment(int &s)
{
    s=s+5000;
    cout<<"Salary inside function: "<<s<<endl;
}
int main()
{
    int sal=27000;
    increment(sal);
    cout<<"Salary inside main: "<<sal<<endl;
    return 0;
}

/*
PS C:\Users\CL302_10> g++ l10.cpp -o l10
PS C:\Users\CL302_10> ./l10.exe
Salary inside function: 32000
Salary inside main: 32000
*/
