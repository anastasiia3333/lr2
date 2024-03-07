#include <iostream>
using namespace std;

class who {
private:
    char id; // ідентифікатор об'єкта

public:
    who(char ch) : id(ch) { // конструктор з одним символьним аргументом
        cout << "\nConstructing who #" << id << endl; // вивід повідомлення при створенні об'єкта
    }

    ~who() { // деструктор
        cout << "\nDestroying who #" << id << endl; // вивід повідомлення при видаленні об'єкта
    }
};

who make_who() { // функція, яка повертає об'єкт who
    static char id = 'X'; // унікальний ідентифікатор для кожного об'єкта
    return who(id++); // повертаємо об'єкт з ідентифікатором та збільшуємо id на 1
}

int main() {
    who obj1 = make_who(); // створення першого об'єкта
    who obj2 = make_who(); // створення другого об'єкта

    return 0;
}
