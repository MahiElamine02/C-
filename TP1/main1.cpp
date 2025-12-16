#include <iostream>
#include <limits>

int main() {
    double x = 1.0;
    while (1.0 + x != 1.0)
    {
        x/=10.;
    }
    std::cout << "I found" << x << ", while numeric_limits indicates" << std::numeric_limits<double>::epsilon() << std::endl;
    return 0;
}