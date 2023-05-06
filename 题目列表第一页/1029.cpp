#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;
    double remainder = fmod(a, b);
    cout << remainder << endl;
    return 0;
}

