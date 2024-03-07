#include <iostream>
using namespace std;

class base {
    int a;

public:
    void load_a(int n) {
        a = n;
    }
    int get_a() {
        return a;
    }
};

class derived : public base {
    int b;

public:
    void load_b(int n) {
        b = n;
    }
    int get_b() {
        return b;
    }
};

int main() {
    derived obj1; // створення об'єкту похідного класу
    derived obj2; // створення ще одного об'єкту похідного класу
    obj1.load_a(10); // завантаження значення для а у першого об'єкту
    obj1.load_b(20); // завантаження значення для b у першого об'єкту
    cout << "objcect 1: a = " << obj1.get_a() << ", b = " << obj1.get_b() << endl; // Виведення значень a та b першого об'єкту
    obj2 = obj1; // Присвоєння значень з першого об'єкту другому
    cout << "object 2: a = " << obj2.get_a() << ", b = " << obj2.get_b() << endl; // Виведення значень a та b другого об'єкту
    return 0;
}
