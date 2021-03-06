#include "stdafx.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

int linearSearch(const string array[], int size, string searchValue) {
	for (int i = 0; i < size; i++) {
		if (searchValue == array[i]) {
			return 0;
		}
	}
	return -1;
}

int main() {
	const string Artist[9] = { "Avicii", "Marshmello","Adventure Club","WispX","Shawn Wasabi","Lady Gaga","Michael Jackson","Sam Smith", "Martin Garrix" };

	cout << "Please enter an artist name: " << endl;
	string input;
	getline(cin, input);

	int result = linearSearch(Artist, 9, input);

	if (result >= 0) {
		cout << input << " is in the database." << endl;
	}
	else {
		cout << input << " is not found in the database." << endl;
	}
	return 0;
}