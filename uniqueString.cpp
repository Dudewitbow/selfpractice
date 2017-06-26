//takes in a string and checks if the string has unique characters
#include <iostream>
#include <string>
using namespace std;

int main() {
	//lower and upper case are considered unique characters
	string line;
	bool unique = 0;
	bool table[128] = {0}; //sized for a basic ascii table. acts as the "hash" table

	cout << "Enter a string: ";
	getline(cin, line);
	cout << endl << endl;

	cout << "Starting Check:\n\n";
	for(int i = 0; i < line.length(); i++){
		int a = line[i];
		if(table[a] == 1){
			cout << "non unique letter " << line[i] << " found\n";
			unique = 1;
		}
		else{
			table[a] = 1;
		}
	}

	if(unique == 0) cout << line << " has all unique characters";
	else cout << line << " does not have all unique characters";

	return 0;
}
