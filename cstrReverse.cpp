//takes a cstring and reverses it (without having a length)
#include <iostream>
#include <algorithm>
using namespace std;

void reverseCheck(char* a);

int main() {
	char line[100];
	int h = 0;

	cout << "Enter a line to be reversed: ";
	cin.getline(line, 100);
	reverseCheck(line);
	cout << "\n\nThe Reversed line is ";
	while(line[h] != '\0'){
		cout << line[h];
		h++;
	}
	return 0;
}

void reverseCheck(char* a){
	int i = 0;//start
	int j = 0;//end
	while(a[j] != '\0') j++;
	j--;
	while(i < j){
		swap(a[i], a[j]);
		i++;
		j--;
	}
}
