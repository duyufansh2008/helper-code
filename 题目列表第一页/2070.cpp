#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    // 取出百位数、十位数、个位数
    int hundred = num / 100;
    int ten = num % 100 / 10;
    int one = num % 10;

    // 将百位数与个位数对调
    int new_num = one * 100 + ten * 10 + hundred;

    cout << new_num << endl;

    return 0;
}

