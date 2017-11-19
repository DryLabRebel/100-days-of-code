// Simple Identity QnA program

# include <iostream>
using namespace std;

int main()
{
	string name;

	cout << "Welcome, Please enter your name: ";
	cin >> name;

	name == "Geoff" ? cout << "Hi Geoff, What're you up to today?\n" : cout << "Unknown user, initiate self destruct in:\n3\n2\n1...\nBoom!\n";
}

// 07prgIDcheck.cpp:9:9: error: use of undeclared identifier 'name'
//         cin >> name;
//                ^
// 07prgIDcheck.cpp:10:2: error: use of undeclared identifier 'name'
//         name == "Geoff" ? "Hi Geoff, What're you up to today?" : "Unknown user, initiate self destruct:\n3\n2\n1...\nBoom!"
//         ^
// 2 errors generated.
// Geoffs-MacBook-Pro:Cplusplus geoff$ vim 07prgIDcheck.cpp 
// Geoffs-MacBook-Pro:Cplusplus geoff$ g++ 07prgIDcheck.cpp -o cprogwelcome.cpp
// 07prgIDcheck.cpp:11:7: warning: result of comparison against a string literal is unspecified (use strncmp instead)
// [-Wstring-compare]
//         name == "Geoff" ? "Hi Geoff, What're you up to today?" : "Unknown user, initiate self destruct:\n3\n2\n1...\nBoom!"
//         ^  ~~~~~~~
// 07prgIDcheck.cpp:11:7: error: comparison between pointer and integer ('int' and 'const char *')
//         name == "Geoff" ? "Hi Geoff, What're you up to today?" : "Unknown user, initiate self destruct:\n3\n2\n1...\nBoom!"
//    ~~~~ ^  ~~~~~~~
// 1 warning and 1 error generated.
