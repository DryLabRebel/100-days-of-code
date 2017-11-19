// Simple Identity QnA program
// Conceived and Created by DryLabRebel, 20 Nov 2017
// Expanded to include more competent getline function
// Also altered to include two possible values for name variable

# include <iostream>
using namespace std;

int main()
{
	string name;

	cout << "Welcome, Please enter your name: ";
	getline (cin, name);

	name == "DryLabRebel" || "Geoff" ? cout << "\nHi Geoff, What're you up to today?\n\n" : cout << "\n\nWarning!\n\n\n\n\nUnknown user,\n\n\n\n\n\n\n\nInitiate self destruct in:\n\n\n\n3\n\n\n\n2\n\n\n\n1...\n\n\n\nBoom!\n";
}

// End program
