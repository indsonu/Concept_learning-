#include<iostream>
using namespace std;
int russianP(int a, int b) {
	int res = 0;
	// idea of double the first number and half the second no.
	// till the second no to 0
	while (b > 0) {
		if (b & 1) {
			res = res + a;
		}
		a = a << 1;
		b = b >> 1;
	}
	return res;
}
int main() {
	// Russian Peasant 
	// multiply the number without using X operator
	cout << russianP(104,2)<<endl;
	cout << russianP(21,5);
}
