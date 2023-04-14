#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c, d, x, fx;
    cin>>x>>a>>b>>c>>d;
    fx = a * pow(x, 3) + b * pow(x, 2) + c * x + d;
    cout<<fixed<<setprecision(7)<<fx << endl;
    return 0;
}
