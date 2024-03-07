#include <iostream>
using namespace std;

class stack{
    char *stck; 
    int size;
    int tos;
public:
    stack(int n); 
    void push(char ch);
    char pop(); 
    void showstack();
};

stack::stack(int n) {
    cout << "Constructing a stack of size " << n << "\n";
    size = n; // зберігаємо розмір стеку
    tos = 0; // початкове значення індексу вершини стеку
    stck = new char[size]; // виділяємо пам’ять для масиву стеку
}

void stack::push(char ch) { 
    if (tos == size) { // перевіряємо, чи стек повний
        cout << "Stack is full\n"; // виводимо повідомлення про помилку
        return; // виходимо з методу
    }
    stck[tos] = ch; // присвоюємо stck[tos] значення ch
    tos++; // збільшуємо tos на одиницю
}

char stack::pop() {
    if (tos == 0) { // перевіряємо, чи стек порожній
        cout << "Stack is empty\n"; // виводимо повідомлення про помилку
        return 0; // повертаємо 0 як значення за замовчуванням
    }
    tos--; // зменшуємо tos на одиницю
    return stck[tos]; // повертаємо stck[tos] як значення
}

void stack::showstack() {
    if (tos == 0) { // перевіряємо, чи стек порожній
        cout << "Stack is empty\n"; // виводимо повідомлення про порожній стек
        return; // виходимо з методу
    }
    cout << "\nStack contains: ";
    for (int i = 0; i < tos; i++) {
        cout << stck[i] << " "; // виводимо кожен елемент стеку
    }
    cout << endl;
}

int main (){
    stack s1(10), s2(10); // ініціалізуємо два стеки
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2 = s1;
    cout << "\n\nStack s1";
    s1.showstack(); // виводимо вміст першого стеку
    cout << "\n\nStack s2";
    s2.showstack(); // виводимо вміст другого стеку

    return 0;
}
