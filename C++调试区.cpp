#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void bubblesort(int *p,int n);
void print(int *p,int n);

int main()
{
    //指针、函数、数组实现冒泡排序
    int arr[10] = {4,3,6,9,1,2,10,5,8,7};
    int n = 10;

    int *p = arr;
    print(p, n);
    bubblesort(p, n);
    print(p, n);

    system("pause");
    return 0;
}

void bubblesort(int *p,int n)
{
    for (int i = 0; i < n -1;i++)
    {
        for (int j = 0;j<n-1-i;j++)
        {
            if (*(p+j) > *(p+j+1))
            {
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}

void print(int *p,int n)
{
    for (int i = 0; i < n;i++)
    {
        cout << *(p+i) << " ";
    }
    cout << endl;
}