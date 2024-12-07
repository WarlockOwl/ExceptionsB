//Aaron Richardson
//CIS 1202 501
//December 8th, 2024
#include "iostream"
#include <string>
#include <cstdlib>

using namespace std;

template <typename V>
V half(V number) {
	V test = (number / 2);
	return test;
}
//Accepts any number variable and divides them by 2
int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}
//prints the divided numbers done by the half function
