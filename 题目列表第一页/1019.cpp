#include <bits/stdc++.h>
using namespace std;
int main() {
    float f;
    int i;
    cin >> f;
    if (f > 0) {
        i = floor(f);
    }
    if(f<0) {
        i = floor(f + 1);
    }
    cout << i << endl;

    return 0;
}
