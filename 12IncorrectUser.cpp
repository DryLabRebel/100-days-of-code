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

	cout << "Please enter your username: ";
	getline(cin, user);

	if (user == "Geoff" || user == "DryLabRebel")
	{
		cout << "\nHi DryLabRebel, Welcome back.\n" << endl;
		return 0;
	}

		else do {

				cout << "Warning! Unrecognized user..." << endl;
				cout << "Access denied!" << endl;
				cout << "Attempts remaining: " << x << endl;
				cout << "\nPlease enter your username: ";
				getline(cin, user);
				--x;

				if (user == "Geoff" || user == "DryLabRebel")
				{
					cout << "\nHi DryLabRebel, Welcome back.\n" << endl;
					return 0;
				}

			} while ((user != "Geoff" && user != "DryLabRebel") && x > 0);

		if (x == 0)
		{
			cout << "Warning!" << endl;
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


}



