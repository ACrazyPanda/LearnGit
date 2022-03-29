#include <iostream>
using namespace std;
#define Day 7

int main()
{

    float f1 = 3.14f;
    cout << "f1=" << f1 << endl;
    cout << "f1占用的内存空间为：" << sizeof(f1) << endl;
    double d1 = 3.14;
    cout << "d1=" << d1 << endl;
    cout << "d1占用的内存空间为：" << sizeof(d1) << endl;

    system("pause");

    return 0;
}