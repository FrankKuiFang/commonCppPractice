#include <iostream>
#include <cmath>

int hypod() {
    auto res = std::hypot(6.0,8.0);
    std::cout << "hypod() : res = " << res << std::endl;
}