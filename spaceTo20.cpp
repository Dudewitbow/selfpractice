//replaces ' ' with %20
#include <iostream>
#include <string>

using namespace std;

string removeSpaces(string a);

int main() {
	string line = "Hello World, The Spaces Will Disappear";
	string lineChanged;
	lineChanged = removeSpaces(line);
	cout << "\n\nBefore: " << line << "\nAfter: " << lineChanged;
	return 0;
}

string removeSpaces(string a){
	string b;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == ' ') b += "%20";
		else b += a[i];
	}
	return b;
}
