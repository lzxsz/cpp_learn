//test_cpp11.cpp
//Test c++11, request C++11.
//g++ -std=c++11 -o test_cpp11 test_cpp11.cpp

#include<iostream>
#include<cstring>
#include<cctype>
#include <vector>
using namespace std;

int main()
{
  string str("some string");
   // range for 语句 
   for(auto &c : str)
   {
      c = toupper(c);
   }
  
    cout << str << endl;

	int arr[] = {1,2,3,4,5};
	for(int& e : arr) 
	{
	  e = e*e;
	}

	int len = sizeof(arr)/sizeof(int);
    vector < int > vc(arr, arr+len);  //array to vector
    for(int i = 0; i<len; i++)
    {
        cout<<vc[i]<<endl;
    }
	
  return 0;
}
