#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct strtype {
    strtype(char const *ptr); // конструктор з параметром
    ~strtype(); // деструктор
    void show(); // метод для виводу рядка
    friend char* get_string(strtype *s); // дружня функція для отримання вказівника на рядок

private:
    char *p;
    int len;
};

strtype::strtype(char const *ptr) { // конструктор з параметром, який приймає вказівник на рядок
    len = strlen(ptr);
    p = (char *) malloc(len + 1);// виділяємо пам'ять для рядка
    if (!p) {
        cout << "Allocation error.\n";
        exit(1);
    }
    strcpy(p, ptr); // копіюємо вміст рядка, на який вказує ptr, до рядка, на який вказує p
}

strtype::~strtype() { // деструктор виводить повідомлення про звільнення пам'яті та викликає функцію р
    cout << "Freeing p\n";
    free(p);
}

void strtype::show() {
    cout << p << " length: " << len << "\n";
}

char* get_string(strtype *s) { // дружня функція для отримання вказівника на рядок
    return s->p;
}

int main() {
    strtype s1("This is a test"), s2("I like C++");
    s1.show();
    s2.show();
    cout << "\nString from s2: " << get_string(&s2) << endl;
    return 0;
}
