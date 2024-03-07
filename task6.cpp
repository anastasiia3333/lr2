#include <iostream>
#include <array>
using namespace std;

class stack {
    array<char, 10> stck; // Використовуємо array замість статичного масиву char
    size_t tos; // Використовуємо тип size_t замість int для кількості елементів у стеку

public:
    void init() {
        tos = 0;
    }

    void push(char ch) {
        if (tos == stck.size()) { // Використовуємо функцію size() для отримання розміру масиву
            cout << "Stack is full";
            return;
        }
        stck[tos++] = ch; // Використовуємо преінкремент для збільшення tos
    }

    char pop() {
        if (tos == 0) {
            cout << "Stack is empty";
            return 0;
        }
        return stck[--tos]; // Використовуємо пре-декремент для зменшення tos
    }
};

int main() {
    stack s1, s2;
    size_t i; // Змінюємо тип змінної i на size_t для ітерації по стеку
    s1.init();
    s2.init();
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 3; i++) cout << "Pop s1: " << s1.pop() << endl;
    for (i = 0; i < 5; i++) cout << "Pop s2: " << s2.pop() << endl;
    return 0;
}
