#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a = 9.6;
    cout <<setw(5)<< fixed << setprecision(2) << a;
}
