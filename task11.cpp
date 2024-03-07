#include <iostream>
using namespace std;

class pr2; 
class pr1 {
private:
    static bool printing; // статична змінна для вказання на статус зайнятості принтера

public:
    pr1() {
        printing = false; // при створенні об'єкту зайнятість принтера встановлюється в false
    }

    static bool inuse(); // оголошення дружньої функції для класу pr2
    void set_print(int status) {
        printing = status; 
    }

    friend bool inuse(const pr1& printer1); // дружня функція для перевірки зайнятості принтера об'єктами класу pr1
};

bool pr1::printing = false; // ініціалізація статичної змінної
class pr2 {
private:
    static bool printing;

public:
    pr2() {
        printing = false; 
    }

    static bool inuse() { // статичний метод для перевірки зайнятості принтера об'єктами класу pr2
        return printing;
    }

    void set_print(int status) {
        printing = status; // метод для встановлення статусу зайнятості принтера
    }

    friend bool inuse(const pr1& printer1); // дружня функція для перевірки зайнятості принтера об'єктами класу pr1
};

bool pr2::printing = false; // Ініціалізація статичної змінної
// Визначення дружньої функції для класу pr1
bool pr1::inuse() {
    return printing;
}
// Функція для перевірки зайнятості принтера об'єктами класу pr2
bool inuse(const pr1& printer1) {
    return printer1.printing;
}

int main() {
    pr1 printer1;
    pr2 printer2;
    printer1.set_print(false); 
    printer2.set_print(true); 
    cout << "Printer 1 is " << (printer1.inuse() ? "busy" : "free") << endl;
    cout << "Printer 2 is " << (pr2::inuse() ? "busy" : "free") << endl; 
    return 0;
}

