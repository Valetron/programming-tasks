#include <iostream>
#include <cmath>

#define URL http://cppstudio.com/cat/285/

int task_0()
{
    int number;

    std::cout << "Введите пятизначное число: ";
    std::cin >> number;

    for (int i = 0; i < 5; ++i)
        std::cout << (number / (int)pow(10, 4 - i)) % 10 << std::endl;

    return 0;
}
