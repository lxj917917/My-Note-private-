#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /*int score = 0;
    cout << "请输入您的成绩：" << endl;
    cin >> score;
    if (score >= 600)
    {
        cout << "恭喜您，考上了一本大学" << endl;
    }
    else 
    {
        cout << "很遗憾，您没有考上一本大学" << endl;
    }*/


    //猜数字
    //调用C++的库 rand()

    int random = rand() % 100 + 1;
    int guess_number = 0;
    
    while (1)
    {
        cout << "请输入您猜的数字：" << endl;
    
    cin >> guess_number;
    if (guess_number > random)
    {
        cout << "您猜的数字大了" << endl;
    }
    else if (guess_number < random)
    {
        cout << "您猜的数字小了" << endl;
    }
    else
    {
        cout << "恭喜您，猜对了" << endl;
        break;

    }
    }

    system("pause");
    return 0;
}
