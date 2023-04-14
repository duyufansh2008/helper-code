#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;

    // 构造上半部分
    for (int i = 1; i <= 3; i++)
    {
        // 输出空格
        for (int j = 1; j <= 3 - i; j++)
        {
            cout << " ";
        }

        // 输出字符
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << ch;
        }

        cout << endl;
    }

    // 构造下半部分
    for (int i = 2; i >= 1; i--)
    {
        // 输出空格
        for (int j = 1; j <= 3 - i; j++)
        {
            cout << " ";
        }

        // 输出字符
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}

