#include <iostream>
using namespace std;

inline int factorial(int n); // функція для обчислення факторіала числа
inline void spring_month(int month); // функція для виведення назви місяця весни за номером місяця

int main() {
    cout << "Factorial of 5 is: " << factorial(5) << endl;
    cout << "Month of spring: ";
    spring_month(2);
    return 0;
}

inline int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Факторіал 0 та 1 дорівнює 1
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i; // Обчислення факторіала
    }
    return result;
}

inline void spring_month(int month) {
    switch (month) {
        case 1:
            cout << "March" << endl;
            break;
        case 2:
            cout << "April" << endl;
            break;
        case 3:
            cout << "May" << endl;
            break;
        default:
            cout << "Invalid month" << endl;
            break;
    }
}
