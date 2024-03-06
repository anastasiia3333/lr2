#include <iostream>
#include <iomanip>
using namespace std;

union ByteSwap {
    uint64_t num;
    uint8_t bytes[8];
};

int main() {
    // Створення об'єкту об'єднання
    ByteSwap swap;
    // Ініціалізація числа
    swap.num = 2468135790;
    // Виведення початкового числа та його представлення у вигляді байтів
    cout << "Original Number: " << swap.num << endl;
    cout << "Original Bytes: ";
    cout << hex << setfill('0');
    for (int i = 0; i < 8; i++) {
        cout << setw(2) << static_cast<unsigned int>(swap.bytes[i]) << " ";
    }
    cout << endl;
    // Обмін молодшого та старшого байтів
    uint8_t temp = swap.bytes[0];
    swap.bytes[0] = swap.bytes[7];
    swap.bytes[7] = temp;
    // Виведення зміненого числа та його представлення у вигляді байтів
    cout << "Swapped Number: " << swap.num << endl;
    cout << "Swapped Bytes: ";
    for (int i = 0; i < 8; i++) {
        cout << setw(2) << static_cast<unsigned int>(swap.bytes[i]) << " ";
    }
    cout << endl;
    return 0;
}
