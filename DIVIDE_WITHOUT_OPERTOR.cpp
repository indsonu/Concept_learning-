1.FIRST CHECKING FOR ZERO CONDTION 
2.NEGATIVE VALUES OF THE NUMBER 
3. -4 2  =  6 FROM SUBTRACTION BUT IF WE WILL CHANGE THE SIGN THEN IT WILL BE SORTED
  4 2 =2 THEN CHANGE THE SIGN 
4. MAIN CONCEPT IS SUBTRACTING AND INCREAMENTING THE QUO++ 
    A6 B2     QU=0
        A4 B2       QU=1
           A2 B2          QU=2
              A0 B2 ANS        QU=3

WHILE A>B NOT A>0  BECAUSE LET SAY 4 3
          FIRST ITR 1 3
                SECOND -2 3 SO QUO WILL BE 2 WHICH IS WRONG SO RUN LOOP TILL A>=B

#include<iostream>
#include<climits>
using namespace std;
int divide(int a, int b) {
	bool neg = false;
	if (a ==  0) {
		return 0;
	}
	if (b == 0) {
		return INT_MAX;
	}
	if (a < 0) {
		a = -a;
		if (b < 0) {
			b = -a;
		}
		else {
			neg = true;
		}
	}
	else if (b < 0) {
		b = -b;
		neg = true;
	}
	int quo = 0;
	while (a >= b) {
		a = a - b;
		quo++;
	}
	if (neg == true)quo = -quo;
	return quo;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout<<divide(a, b);
}
