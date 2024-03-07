#include <iostream> 
#include <cmath> //ліба для використання модуля
using namespace std;

inline int my_abs (int n);
inline long my_abs (long n);
inline double my_abs (double n);

int main () {
	cout << "Absolute value of -10: " << my_abs(-10) << endl;
	cout << "Absolute value of -10L: " << my_abs(-10L) << endl;
	cout << "Absolute value of -10.01: " << my_abs(-10.01) << endl;
}

inline int my_abs(int n) {
	cout << "In integer my_abs() ";
	return n < 0 ? -n : n;
}

inline long my_abs(long n) {
	cout << "In long my_abs() ";
	return n < 0 ? -n : n;
}

inline double my_abs(double n) {
	cout << "In double my_abs() ";
	return n < 0 ? -n : n;
}