#include <iostream>
#include <list>  
#include <vector>
#include <algorithm>
#include <iterator>
namespace prev{
// 找到迭代器的前面的元素对应的迭代器
void std_prev() {
    std::cout << "\n.... std_prev ...........\n";
    std::list<int> mylist;
    for (int i=0; i<10; i++){
         mylist.push_back (i*10); // 0 10 20 30 40 50 60 70 80 90
    }
    // Note: 如果入参是容器的end, 则返回容器的最后一个元素。曾经看别人的代码迷惑过我；
    std::cout << "The last element is " << *std::prev(mylist.end()) << '\n'; // 90
    std::cout << "The last element is " << (mylist.back()) << '\n'; // has same function as the upper line; what back() returned is not iterator
    
    std::cout << "The third from the bottom  is " << *std::prev(mylist.end(), 3) << '\n'; // 70

    auto firstIt = mylist.begin();
    firstIt++;
    firstIt++;
    std::cout << "The second is " << *std::prev(firstIt, 1) << '\n'; // 10
    return;
}
}


/*
https://www.cplusplus.com/reference/iterator/prev/?kw=prev

template <class BidirectionalIterator>
BidirectionalIterator prev (BidirectionalIterator it,
       typename iterator_traits<BidirectionalIterator>::difference_type n = 1);

Get iterator to previous element
Returns an iterator pointing to the element that it would be pointing to if advanced -n positions.

If it is a random-access iterator, the function uses just once operator+ or operator-. Otherwise, 
the function uses repeatedly the increase or decrease operator (operator++ or operator--) on the copied iterator
until n elements have been advanced.

Parameters
it
    Iterator to base position.
    BidirectionalIterator shall be at least a bidirectional iterator.
n
    Number of element positions offset (1 by default).
    difference_type is the numerical type that represents distances between iterators of the BidirectionalIterator type. 

Return value
    An iterator to the element n positions before it.

*/