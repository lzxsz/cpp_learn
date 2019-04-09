//lambda_ex1.cpp
//for C++11
//g++ -std=c++11 -o lambda_ex1 lambda_ex1.cpp

#include <iostream>
#include <cmath>

using namespace std;

int main(void){

  float f0 = 1.0f;
  float f1 = 10.0f;
  cout << [=, &f0](float a) { return f0 += f1 + abs(a); } (-3.5);
  cout << '\n' << f0 << '\n';

  return 0;
}


//Output Result:
//14.5
//14.5
