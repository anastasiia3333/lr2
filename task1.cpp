#include <iostream>
#include <cstring>
using namespace std;

enum color { red, yellow, green, orange }; //перерахування кольорів для фруктів

void out(bool x) { //// Функція для виведення булевого значення у вигляді "yes" або "no"
    cout << ((x == false) ? "no" : "yes") << "\n";
}

char const *c[] = { "red", "yellow", "green", "orange" };

class Fruit {
public:
    bool annual; //однорічний
    bool perennial; //багаторічний
    bool tree; //деревовидний
    bool tropical; //тропічний
    enum color clr; //колір
    char name[40]; //назва
};

class Apple : public Fruit {
    bool cooking; // Підходить для приготування
    bool crunchy; // Хрумке
    bool eating; // Підходить для споживання

public:
    void seta(char const *n, enum color c, const char* ck, const char* crchy, const char* e);
    void show();
};

class Orange : public Fruit {
    bool juice; // Підходить для виготовлення соку
    bool sour; // Кислий
    bool eating; // Підходить для споживання

public:
    void seto(char const *n, enum color c, const char* j, const char* sr, const char* e);
    void show();
};

void Apple::seta(char const *n, enum color c, const char* ck, const char* crchy, const char* e) {
    strcpy(name, n);
    annual = false;
    perennial = true;
    tree = true;
    tropical = false;
    clr = c;
    cooking = (strcmp(ck, "yes") == 0);
    crunchy = (strcmp(crchy, "yes") == 0);
    eating = (strcmp(e, "yes") == 0);
}

void Orange::seto(char const *n, enum color c, const char* j, const char* sr, const char* e) {
    strcpy(name, n);
    annual = false;
    perennial = true;
    tree = true;
    tropical = true;
    clr = c;
    juice = (strcmp(j, "yes") == 0);
    sour = (strcmp(sr, "yes") == 0);
    eating = (strcmp(e, "yes") == 0);
}

void Apple::show() {
    cout << name << " apple is: " << "\n";
    cout << "Annual: "; out(annual);
    cout << "Perennial: "; out(perennial);
    cout << "Tree: "; out(tree);
    cout << "Tropical: "; out(tree);
    cout << "Color: " << c[clr] << "\n";
    cout << "Good for cooking: "; out(cooking);
    cout << "Crunchy: "; out(crunchy);
    cout << "Good for eating: "; out(eating);
}

void Orange::show() {
	cout << endl;
    cout << name << " orange is: " << "\n";
    cout << "Annual: "; out(annual);
    cout << "Perennial: "; out(perennial);
    cout << "Tree: "; out(tree);
    cout << "Tropical: "; out(tree);
    cout << "Color: " << c[clr] << "\n";
    cout << "Good for juice: "; out(juice);
    cout << "Sour: "; out(juice);
    cout << "Good for eating: "; out(eating);
}

int main() {
    Apple a2;
    Orange o2;
    a2.seta("Jonathan", red, "yes", "no", "yes");
    o2.seto("Valencia", orange, "yes", "yes", "no");
    a2.show();
    o2.show();
    return 0;
}
