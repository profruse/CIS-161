#include <iostream>
using namespace std;

int square(int x) {
	return (x*x);
}

int cube(int x) {
	return (x*x)*x;
}

int main(void) {
	int s, c;
    cout << "Enter a number to be squared: ";
	cin >> s;
	cout << "The square of " << s << " is " << square(s) << endl;
	cout << "Enter a number to be cubed: ";
	cin >> c;
	cout << "The cube of " << c << " is " << cube(c) << endl;
    return 0;
	cout << "Hello World!";
}

