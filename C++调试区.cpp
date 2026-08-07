#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const double PI = 3.1415926;

class circal
{
    public:

    int m_r;

    double calculateZC()
    {
            return 2 * PI * m_r;
    }
};


int main()
{
    circal c1;
    cout << "请输入圆的半径：" << endl;
    cin >> c1.m_r;
    cout << "圆的周长为：" << c1.calculateZC() << endl;

    system("pause");
    return 0;
}

