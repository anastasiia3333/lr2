#include <iostream>
#include <cstdlib> // Для використання функції rand()

using namespace std;

class Dice {
private:
    int value; // Закрита змінна для збереження значення кидка кубика

public:
    // Конструктор класу Dice
    Dice() {
        value = 0; // Початкове значення 0
    }

    // Функція для кидання кубика
    void roll() {
        value = rand() % 6 + 1; // Генеруємо випадкове число від 1 до 6
    }

    // Функція для отримання значення останнього кидка кубика
    int getValue() {
        return value;
    }
};

int main() {
    srand(time(0)); // Ініціалізуємо генератор випадкових чисел за поточним часом

    const int NUM_DICE = 4; // Кількість кубиків
    const int NUM_ROLLS = 5; // Кількість кидків

    Dice dices[NUM_DICE]; // Масив об'єктів класу Dice

    // Кидання кожного кубика NUM_ROLLS разів і виведення результату
    for (int i = 0; i < NUM_ROLLS; ++i) {
        cout << "Roll " << i + 1 << ":" << endl;
        for (int j = 0; j < NUM_DICE; ++j) {
            dices[j].roll(); // Кидаємо кубик
            cout << "Dice " << j + 1 << " rolled: " << dices[j].getValue() << endl; // Виводимо результат
        }
        cout << endl;
    }

    return 0;
}
