#include <iostream>

using namespace std;
class Date
{
public:
	Date();
	Date(int a, int b, int c);
	~Date();
	int Hour;
	int Min;
	int Sek;
};

Date::Date() {
	Hour = 0;
	Min = 0;
	Sek = 0;
}

Date::Date(int a, int b, int c)
{
	if ((a < 0 || a>24) || (b < 0 || b > 60) || (c < 0 || c>60))
	{
		cout << "Time Disebled!!!\nAND NEW TIME ZERO!!!" << endl;
		a = b = c = 0;
	}
	Hour = a;
	Min = b;
	Sek = c;
}
Date::~Date()
{

}
ostream& operator <<(ostream& out, Date& a) {
	out << "{" << a.Hour << "." << a.Min << "." << a.Sek << "}";
	return out;
}