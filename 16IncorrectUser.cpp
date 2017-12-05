// 
// 
// 
// Program I created that continues to report incorrect user until correct name is entered
// This program has the sole purpose of being a practical application of the basic concepts and learning materials for c++
// It is the progressive addition of components that I have been learning about at the cplusplus.com tutorial
// Current version contains:
// main function
// variables
// if else statement
// for loop
// goto statement
// program end (return 0)
// time delay (not covered in tutorials at the time of implementation)
// getline cin function

# include <iostream>
# include <string>
# include <unistd.h>
using namespace std;

int main()
{
	string user;
	int x = 3;

	// goto label
	TryAgain:
	// Start of program
	cout << "Please enter your username: ";
	getline(cin, user);

	// condition 1
	if (user == "Geoff" || user == "DryLabRebel")
	{
		// If registered user is identified
		cout << "\nHi DryLabRebel, Welcome back.\n" << endl;
		return 0;
	}

	// If user is not recognized
	else if (x > 0) 
	{
		cout << "Warning! Unrecognized user..." << endl;
		cout << "Access denied!" << endl;
		cout << "Attempts remaining: " << x << endl;
		--x;
		goto TryAgain;

		// If user name is still incorrect, loop resets
	}

	// If x == zero loop ends and the following is initiated
	else
	{
		cout << "Warning!" << endl;
		
		// two seconds time delay
		usleep(2000000);
		cout << "Unknown user!" << endl;

		usleep(2000000);
		cout << "Initiate self destruct in..." << endl;

		for (int y=3; y>0; --y)
		{
			usleep(1000000);
			cout << "\n\n" << y << endl;
		}

		usleep(1000000);
		cout << "\n\nBoom!!" << endl;
		
		usleep(2000000);
		cout << "\n\n..." << endl;
		
		usleep(2000000);
		cout << "\n\nHaha... Just kidding...\n" << endl;

		usleep(900000);
		cout << "Seriously tho, get off my machine.\n" << endl;

		usleep(900000);
		return 0;
	}

// End program
}



