#include <iostream>
using namespace std;

class Example {
public:
    Example() {
        cout << "Constructing Example object\n";
    }
    ~Example() {
        cout << "Destroying Example object\n";
    }
};

Example* createObject() {
    Example obj; // Створюємо об'єкт локально
    return &obj; // Повертаємо адресу об'єкта, який знищиться після завершення функції
}

int main() {
    Example* objPtr = createObject(); // Отримуємо вказівник на об'єкт
    // Робимо щось з objPtr, але obj вже знищений
    return 0;
}
