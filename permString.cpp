//Takes 2 strings and checks if one string is a rearrangement of the other, lower and upper are considered the same
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool stringCheck(string a, string b);

int main() {
	string a,b;
	cout << "Enter string 1: ";
	getline(cin, a);
	cout << "\nEnter string 2: ";
	getline(cin, b);
	if(stringCheck(a,b)) cout << endl << a << " is a permutation of " << b << endl;
	else cout << endl << a << " is not a permutation of " << b << endl;
	return 0;
}


bool stringCheck(string a, string b){
	transform(a.begin(), a.end(), a.begin(), ptr_fun <int,int>(tolower));
	transform(b.begin(), b.end(), b.begin(), ptr_fun <int,int>(tolower));
	char check = 'a';//letter to check
	int count1 = 0;//keeps track of times letter is found
	int count2 = 0;

	for(int i = 0; i < 26; i++){//cycles through alphabet
		for(int j = 0; j < a.length(); j++){
			if(a[j] == check) count1++;
		}
		for(int k = 0; k < b.length(); k++){
			if(b[k] == check) count2++;
		}

		if(count1 != count2) return 0; //count of current alphabet letter are not the same, not a permutation

		else{//reset counters and check next alphabetical letter
			count1 = 0;
			count2 = 0;
			check++;
		}
	}
	return 1;
}
