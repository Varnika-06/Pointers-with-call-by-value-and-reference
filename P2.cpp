//Name: Varnik Maurya
//PRN: 24070123160
//Exp No. 10
//Program 2
#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
    cout<<"Value of a is:"<<x<<endl;
    cout<<"value of b is:"<<y<<endl;
}
int main()
{
    int a=5, b=2;
    swap(&a,&b);
    cout<<"Value of a is:"<<a<<endl;
    cout<<"value of b is:"<<b<<endl;
    return 0;
}


/*
PS C:\Users\CL302_10> g++ P2.cpp -o P2
PS C:\Users\CL302_10> ./P2.exe
Value of a is:0x61ff0c
value of b is:0x61ff08
Value of a is:2
value of b is:5
  */
