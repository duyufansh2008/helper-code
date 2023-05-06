#include <bits/stdc++.h>
using namespace std;

int main() {
    double xa, ya, xb, yb, len;

    // 输入坐标值
    cin >> xa >> ya;

    cin >> xb >> yb;

    // 计算线段AB的长度
    len = sqrt(pow((xb-xa), 2) + pow((yb-ya), 2));

    // 输出结果
    cout <<  fixed << setprecision(3) << len << endl;

    return 0;
}

