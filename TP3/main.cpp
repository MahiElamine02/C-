#include <iostream>
#include <stdexcept>   

template <typename T>
T safeDivide(T a, T b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}

int main() {
    try {
        int a = 10, b = 2;
        std::cout << "10 / 2 = " << safeDivide(a, b) << std::endl;

        double x = 5.0, y = 0.0;
        std::cout << "5.0 / 0.0 = " << safeDivide(x, y) << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}