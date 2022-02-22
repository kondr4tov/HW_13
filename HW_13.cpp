

#include <iostream>
#include "Helpers.h"

int main()
{
    int a, b;

    std::cout << "Input numbers: a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "(a+b)^2 = " << square(a,b);
    return 0;
}

