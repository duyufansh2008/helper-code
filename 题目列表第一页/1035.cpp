#include <iostream>

using namespace std;

int main() {
    int a1, a2, n;
    cin >> a1 >> a2 >> n;

    // 计算等差数列的公差
    int d = a2 - a1;

    // 计算第n项
    int an = a1 + (n - 1) * d;

    // 输出结果
    cout << an << endl;

    return 0;
}

