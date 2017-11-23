// 
// 
// 
// Program that continues report incorrect user until correct name is entered

# include <iostream>
# include <string>
using namespace std;

int main()
{
	string user;
	int x = 3;

	cout << "Welcome. Please enter your username: ";
	getline(cin, user);

	if (user == "Geoff" || user == "DryLabRebel")
		cout << "Hi DryLaRebel, how can I help you today?" << endl;

	else do {

			cout << "Unrecognized user, access denied!" << endl;
			cout << "Please try again... " << endl;
			cout << "Attempts remaining: " << x << endl;
			cout << "Please enter your username: ";
			getline(cin, user);
			--x;

			if (user == "Geoff" || user == "DryLabRebel")
				cout << "Hi DryLaRebel, how can I help you today?" << endl;

		} while ((user != "Geoff" && user != "DryLabRebel") && x > 0);

}



// If user == Geoff || DryLabRebel
// 	else
//
