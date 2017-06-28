//compresses a string if compressable
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

string compressString(string);

int main() {
	string line = "aaaabbbcccbbbaa"; //compresses to a4b3c3b3a2
	string result;
	result = compressString(line);
	cout << "Input: " << line << "\nThe Result is " << result << "\nExpected: a4b3c3b3a2\n"<< endl;
	line = "ab";
	result = compressString(line);
	cout << "Input: " << line << "\nThe Result is " << result << "\nExpected: ab\n"<< endl;
	return 0;
}


string compressString (string a){
	string b;
	char currentChar = a[0];
	char buf[16];
	int count = 1;
	for(int i = 1; i < a.length(); i++){
		if(a[i] == currentChar) count++;
		else{
			b += currentChar;
			b += itoa(count, buf, 10);
			currentChar = a[i];
			count = 1;
		}
		if(i == a.length()-1){//final character case
			b += currentChar;
			b += itoa(count, buf, 10);
		}
	}
	if(a.length() < b.length()) return a;
	else return b;
}
