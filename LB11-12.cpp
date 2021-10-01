#include <iostream>
#include "MyQueue.h"

using namespace std;

int main() {
	setlocale(LC_ALL, ".1251");
	queue<double> a(10);
	a + 1.2;
	a + 10.2;
	a + 12.2;
	a.operator-();
	a.operator--();
	a.operator-();
	a.operator-();
	a.operator--();

	queue<char> b(3);
	b + 'a';
	b + 'w';
	b.operator-();
	b.operator--();
	system("PAUSE");

	queue <Date> C(3);
	C.operator--();
	C + Date(1, 2, 3);
	C + Date (25, 20, 30);
	C.operator-();
}