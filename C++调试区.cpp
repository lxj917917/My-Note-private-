#include <iostream>
#include <cstdlib>
#include <ctime>

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
    /*srand((unsigned int)time(NULL));     // 初始化随机数种子
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
    }*/

    //敲桌子
    for (int i = 0;i<100;i++)
    {
        if (i % 7 == 0 || i / 10 == 7 || i % 10 == 7)
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    system("pause");
    return 0;
}
