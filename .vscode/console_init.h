// 控制台初始化：设置 UTF-8 编码，解决中文乱码
// 通过 g++ -include 自动注入，无需在 .cpp 文件中手动引入

#ifndef CONSOLE_INIT_H
#define CONSOLE_INIT_H

#ifdef _WIN32
#include <windows.h>

// 利用全局对象的构造函数在 main() 之前自动执行
namespace {
struct ConsoleInit {
    ConsoleInit() {
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
    }
} _console_init;
}
#endif

#endif // CONSOLE_INIT_H
