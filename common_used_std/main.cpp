
#include <iostream>

#include "hypod.hpp"
#include "numeric_limits.hpp"
#include "std_find_if.hpp"
#include "std_prev.hpp"

int main(int argc, char** arg) {
    std::cout << "Starting Main.....\n";
    hypod();
    test_numeric_limits();
    find_if::find_if();

    prev::std_prev();
}