#include <iostream>
#include "Date.h"

using namespace std;

template <class T> class queue {
private:
	int size;
	int N = 0;
	T* data;
public:
	queue(int n) {
		data = new T[n];
		size = n;
	}
	~queue() {
		delete[] data;
	}
	queue& operator=(const queue& ochered) {

	}
	void Show() {
		cout << "—одержание очереди -> ";
		for (int i = 0; i < N; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
	void operator +(T a) {
		if (N < size) {
			if (N > 0)
				for (int i = N; i > 0; i--) {
					data[i] = data[i - 1];
				}
			data[0] = a;
			N++;
			cout << "\nЁлемент " << a << " добавлен в очередь" << endl;
		}
		else {
			cout << "\nЁлемент " << a << " не добавлен, т.к. очередь переполнен." << endl;
		}
		Show();
	}
	void operator -() {
		if (N != 0) {
			N--;
			cout << "\nЁлемент удален из очереди" << endl;
		}
		else {
			cout << "\nЁлемент не удален, т.к. очередь пуста." << endl;
		}
		Show();
	}
	void operator --() {
		if (N == 0) {
			cout << "\nќчередь пуста€" << endl;
			Show();
		}
		else {
			cout << "\nќчередь не пуста€" << endl;
		}
	}
};