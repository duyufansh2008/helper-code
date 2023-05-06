#include <iostream>
#include <iomanip>  // 包含setw()函数的头文件
using namespace std;

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    a/=3; e+=a; b+=a;
    b/=3; a+=b; c+=b;
    c/=3; b+=c; d+=c;
    d/=3; c+=d; e+=d;
    e/=3; d+=e; a+=e;
    cout << setw(5) << a
         << setw(5) << b
         << setw(5) << c
         << setw(5) << d
         << setw(5) << e << endl;  // 设置输出宽度为5
    return 0;
}
