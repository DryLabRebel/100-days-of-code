//
// NOTE: warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
// SOLUTION: include "-std=c++11" flag when compiling to signify when you want to use c++11 features
//
//An example of a range based for loop

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string str {"Hello!"};
	for (char c : str)
	{
		cout << "[" << c << "]" << endl;
	}
	cout << endl;
	return 0;
}
