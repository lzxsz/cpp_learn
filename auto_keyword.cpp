//auto_keyword.cpp
//For C++14
// g++ -std=c++14 -o a auto_keyword.cpp

#include <iostream>
#include <vector>
using namespace std;

//C++ 11
template<class T, class U>
void add(T t, U u)
{
    auto s = t + u;
    cout << "type of t + u is " << typeid(s).name() << endl;  //��c++�У�typeid���ڷ���ָ���������ָ�����ʵ������
}

//C++ 11
template<class T, class U>
auto add2(T t, U u) -> decltype(t+u)
{
    auto s = t + u;
    return s;
}

//C++ 14
template<class T, class U>
decltype(auto) add3(T t, U u)
{
    auto s = t + u;
    return s;
}

int main()
{
    // ���Զ������ƶ�
    auto a = 123;
    cout << "type of a is " << typeid(a).name() << endl;
    auto s("fred");
    cout << "type of s is " << typeid(s).name() << endl;

    // �߳�������˵�������������
    vector<int> vec;
    auto iter = vec.begin();
    cout << "type of iter is " << typeid(iter).name() << endl;

    // ʹ��ģ�弼��ʱ�����ĳ������������������ģ�������ʹ��autoȷ����������
    add(101, 1.1);

    auto value = add2(101, 1.1);
    cout << "type of value is " << typeid(value).name() << endl;

	auto value2 = add3(101, 10);
    cout << "type of value2 is " << typeid(value2).name() << endl;
}