#include <iostream>

int main() {
    std::cout << "\033[31mRed Text\033[0m" << std::endl;  // 红色
    std::cout << "\033[32mGreen Text\033[0m" << std::endl;  // 绿色
    std::cout << "\033[1;34mBold Blue Text\033[0m" << std::endl;  // 加粗蓝色
    std::cout << "\033[4;35mUnderlined Purple Text\033[0m" << std::endl;  // 下划线紫色
    return 0;
}
