// Could I use a goto, to push the program back to the initial 'cout' if the unsername is incorrect?
// 
// 
// Program that continues report incorrect user until correct name is entered

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
	}

// End program
}



