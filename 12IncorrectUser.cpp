// 
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

	// Initial prompt
	cout << "Please enter your username: ";
	getline(cin, user);

	if (user == "Geoff" || user == "DryLabRebel")
	{
		// If registered user is identified
		cout << "\nHi DryLabRebel, Welcome back.\n" << endl;
		return 0;
	}

		else do {
		// If user is not reconized
				cout << "Warning! Unrecognized user..." << endl;
				cout << "Access denied!" << endl;
				cout << "Attempts remaining: " << x << endl;
				cout << "\nPlease enter your username: ";
				// Auxilliary prompt
				getline(cin, user);
				// Initiate countdown
				--x;

				if (user == "Geoff" || user == "DryLabRebel")
				{
					// If registered user is identified
					cout << "\nHi DryLabRebel, Welcome back.\n" << endl;
					return 0;
				}

			// If user name is still incorrect, loop resets
			} while ((user != "Geoff" && user != "DryLabRebel") && x > 0);

		// If x == zero loop ends and the following is initiated
		if (x == 0)
		{
			cout << "Warning!" << endl;
			// two seconds time delay
			usleep(2000000);
			cout << "Unknown user!" << endl;
			usleep(2000000);
			cout << "Initiate self destruct in..." << endl;
			usleep(1000000);
			cout << "\n\n\n3" << endl;
			usleep(1000000);
			cout << "\n\n\n2" << endl;
			usleep(1000000);
			cout << "\n\n\n1" << endl;
			usleep(1000000);
			cout << "\n\n\nBoom!!" << endl;
			usleep(3000000);
			cout << "\n\n\n..." << endl;
			usleep(3000000);
			cout << "\n\n\nHaha... Just kidding.\n\n" << endl;
		}

// End program
}



