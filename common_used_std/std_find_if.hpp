#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>    // std::find_if

namespace find_if{

template <typename T>
struct compare {
    compare(const T& val) : val_(val) {

    }
    bool operator()(const T& a) {
        return a > val_;
    }
    T val_;
};

int find_if() {
    std::cout << "\n.... find_if ...........\n";

    std::vector<int> vec {1,2,3,4,5,100,60};
    
    // 
    auto res = std::find_if(vec.begin(), vec.end(), compare<int>(6));
    if (res  == vec.end()) {
        std::cout << " No data\n";
    } else {
        std::cout << " res = " << *res << std::endl;
    }

    // lambda function as the thired param
    auto res2 = std::find_if(vec.begin(), vec.end(), [](const int& val){return val > 6;});
    if (res2  == vec.end()) {
        std::cout << " No data-2\n";
    } else {
        std::cout << " res2 = " << *res2 << std::endl;
    }

    auto myFunc = [](const int& val){return val > 6;};
    auto res3 = std::find_if(vec.begin(), vec.end(), myFunc);
    if (res3  == vec.end()) {
        std::cout << " No data-3\n";
    } else {
        std::cout << " res3 = " << *res3 << std::endl;
    }
}
}

/*
# 第三个入参为函数对象或函数指针, 必须只有一个入参, 返回值可以转换成bool; 入参为被搜索容器中的元素类型！
# find_if的返回值：如果找到了则返回对应的iterator, 否则返回容器的last，例如vec.last()

==============================================================
Ref:
https://www.cplusplus.com/reference/algorithm/find_if/?kw=find_if

template <class InputIterator, class UnaryPredicate>
   InputIterator find_if (InputIterator first, InputIterator last, UnaryPredicate pred);

Returns an iterator to the first element in the range [first,last) for which pred returns true. 
If no such element is found, the function returns last.

The behavior of this function template is equivalent to:
    template<class InputIterator, class UnaryPredicate>
    InputIterator find_if (InputIterator first, InputIterator last, UnaryPredicate pred)
    {
    while (first!=last) {
        if (pred(*first)) return first;
        ++first;
    }
    return last;
    }

Parameters
    first, last
        Input iterators to the initial and final positions in a sequence. The range used is [first,last), 
        which contains all the elements between first and last, including the element pointed by first but not 
        the element pointed by last.
    pred
        Unary function that accepts an element in the range as argument and returns a value convertible to bool. 
        The value returned indicates whether the element is considered a match in the context of this function.
        The function shall not modify its argument.
        This can either be a function pointer or a function object.
*/