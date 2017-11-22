// Simple Identity QnA program
// Conceived and Created by DryLabRebel, 20 Nov 2017
// Expanded to include more competent getline function
// Also altered to include two possible values for name variable

# include <iostream>
# include <string>
using namespace std;

int main()
{
	string name;

	cout << "Welcome, Please enter your name: ";
	getline (cin, name);

	if (name == "Geoff" || name == "DryLabRebel")
		cout << "\n\nHi Geoff, what are you up to today?\n\n";
		
	else
		cout << "\n\nWarning!\n\n\n\n\nUnknown user,\n\n\n\n\n\n\n\nInitiate self destruct in:\n\n\n\n3\n\n\n\n2\n\n\n\n1...\n\n\n\nBoom!\n";
}

// Returns only the 'if' output. Not the 'else' output, no matter what the input is into 'name' when I use the || OR operator.
// 
// NOTE Fixed:- Have to explicitly state whole condition on both sides of the || OR operator so:
// name == "Geoff" || name == "DryLabRebel"
// NOT
// name == "Geoff" || "DryLabRebel"


// End program
