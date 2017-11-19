// Simple QnA
// Created and Produced by DryLabRebel: Nov 20 2017

# include <iostream>
using namespace std;

int main()
{
	string name;

	cout << "Welcome, Please enter your name: ";
	cin >> name;

	name == "Geoff" ? cout << "Hi Geoff, What're you up to today?\n" : cout << "Warning!\nUnknown user, initiate self destruct in:\n3\n2\n1...\nBoom!\n";
}
