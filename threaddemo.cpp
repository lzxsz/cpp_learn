/* This is a sample for C++11.
 * OS:centOS 6.10, g++: 4.8.2 
 * g++ threaddemo.cpp -o threaddemo.out -pthread -std=c++11 
 *
 * output:
 * Before joining,sun = 0
 * After joining,sun = 9900
*/

#include <iostream>
#include <thread>
 
#include <atomic>

//long sum = 0L;

 
std::atomic<int> sum(0);

void fun()
{
    for(int i=1;i<100;++i)
        sum += i;
}
 
int main()
{
    std::cout << "Before joining,sun = " << sum << std::endl;
    std::thread t1(fun);
    std::thread t2(fun);
    t1.join();
    t2.join();
    std::cout << "After joining,sun = " << sum << std::endl;
}
