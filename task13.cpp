#include <iostream>
using namespace std;
#define SIZE 26


class stack{
    char stck[SIZE];
    int tos;
public:
    void init();
    void push(char c);
    char pop();
};
void stack::init() {
    tos = 0;
}
void stack::push(char c) {
    if (tos == SIZE) {
        cout << "\nStack if full";
        return;
    }
    stck[tos] = c;
    tos++;
}
char stack::pop(){
    if (tos==0){
        cout << "\nStack is empty";
        return 0;
    }
    tos--;
    return stck[tos]; 

}


stack loadstack(int upper) {
    stack s; 
    s.init(); 
    if (upper == 1) { 
        for (char c = 'Z'; c >= 'A'; c--) { 
            s.push(c); 
        }
    }
    else { 
        for (char c = 'z'; c >= 'a'; c--) { 
            s.push(c); 
        }
    }
    return s; 
}

int main () {
    stack s1{}, s2{};
    s1.init();
    s2.init();
    char letter;
    s1 = loadstack(0);
    s2 = loadstack(1);

    cout << "S1 contains: " << endl; 
    while ((letter =s1.pop()) != 0) { // поки стек не порожній
        cout << letter << " "; 
    }
    cout << endl; 

    cout << "\nS2 contains: " << endl; 
    while ((letter = s2.pop()) != 0) { // поки стек не порожній
        cout << letter << " " ; 
    }
    cout << endl;
}