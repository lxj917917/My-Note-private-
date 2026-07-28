#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    // ========== 1. 中文输出测试 ==========
    cout << "========== 中文输出测试 ==========" << endl;
    cout << "你好，世界！这是一段中文测试。" << endl;
    cout << "如果中文显示正常，说明编码配置成功！" << endl;
    cout << endl;

    // ========== 2. 基本数据类型大小 ==========
    cout << "========== 数据类型大小 ==========" << endl;
    cout << left << setw(20) << "short:"   << sizeof(short)   << " 字节" << endl;
    cout << left << setw(20) << "int:"     << sizeof(int)     << " 字节" << endl;
    cout << left << setw(20) << "long:"    << sizeof(long)    << " 字节" << endl;
    cout << left << setw(20) << "long long:" << sizeof(long long) << " 字节" << endl;
    cout << left << setw(20) << "float:"   << sizeof(float)   << " 字节" << endl;
    cout << left << setw(20) << "double:"  << sizeof(double)  << " 字节" << endl;
    cout << left << setw(20) << "char:"    << sizeof(char)    << " 字节" << endl;
    cout << left << setw(20) << "bool:"    << sizeof(bool)    << " 字节" << endl;
    cout << left << setw(20) << "指针:"     << sizeof(void*)  << " 字节" << endl;
    cout << endl;

    // ========== 3. 整数范围测试 ==========
    cout << "========== 整数极值 ==========" << endl;
    cout << "short  范围: " << SHRT_MIN << " ~ " << SHRT_MAX << endl;
    cout << "int    范围: " << INT_MIN << " ~ " << INT_MAX << endl;
    cout << "unsigned int 最大: " << UINT_MAX << endl;
    cout << endl;

    // ========== 4. 基本运算测试 ==========
    cout << "========== 基本运算 ==========" << endl;
    int a = 10, b = 3;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << " (整数除法)" << endl;
    cout << "a % b = " << a % b << endl;
    cout << endl;

    // ========== 5. vector 容器测试 ==========
    cout << "========== 容器测试 ==========" << endl;
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "vector 内容: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    cout << "vector 大小: " << v.size() << endl;
    cout << "首元素: " << v.front() << ", 尾元素: " << v.back() << endl;
    cout << endl;

    // ========== 6. 用户输入测试 ==========
    cout << "========== 输入测试 ==========" << endl;
    cout << "请输入你的名字（拼音即可）: ";
    string name;
    getline(cin, name);
    cout << "你好，" << name << "！欢迎使用 C++ 调试区。" << endl;

    system("pause");
    return 0;
}
