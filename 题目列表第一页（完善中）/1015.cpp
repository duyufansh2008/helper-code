#include <bits/stdc++.h>
using namespace std;
int main(){
    double r1,r2,R;
    cin>>r1>>r2;
    R = 1/(1/r1+1/r2);
    cout<<fixed<<setprecision(2)<<R;
    return 0;
}
