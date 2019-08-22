/* returnvalue.cpp
 * Return many value sample for C++11.
 *
 * g++ returnvalue.cpp -o returnvalue.out -std=c++11
 *
 * Require Linux G++ version:
 *  gcc version 4.8.2 20140120 (Red Hat 4.8.2-15)
 *  or 
 *  gcc version 5.2.1 20150902 (Red Hat 5.2.1-2)
 *
 * Output:
 * 1   0.5  HelloWorld
 *
 */


#include <iostream>
#include <tuple>

std::tuple <int, float, std::string> make_tuple_value(int a, float b, std::string c ){

   return std::make_tuple(a, b, c);
}

int main(){

  int i;
  float f;
  std::string s;

  std::tie(i, f, s) = make_tuple_value(1, 0.5, "HelloWorld");

  std::cout<< i <<"   "<< f <<"  "<< s << std::endl;

}

