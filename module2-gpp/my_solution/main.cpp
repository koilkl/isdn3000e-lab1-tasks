#include <iostream>
#include "calculator.h"

int main() {
    int x = 10, y = 3;

    std::cout << "Calculator Demo" << std::endl;
    std::cout << "===============" << std::endl;
    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    std::cout << x << " - " << y << " = " << subtract(x, y) << std::endl;
    std::cout << x << " * " << y << " = " << multiply(x, y) << std::endl;
    std::cout << x << " / " << y << " = " << divide(x, y) << std::endl;
    std::cout<<x<<"^"<<y<<"="<<power(x,y)<<std::endl;
    return 0;
}
