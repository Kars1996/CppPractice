#include <iostream>
using namespace std;

int main() {
	cout << "Suld repeat 10 times\n";
	int counter = 0;
	while (counter != 10) {
		cout << "Repeat no " << counter << endl;
		counter = counter + 1;
	}
	return 0;
}