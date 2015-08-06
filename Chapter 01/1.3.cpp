#include <iostream>
using namespace std;

//  can't understand the book
//  write by myself

void printDigit(unsigned int a) {
    if (a < 10) {
        cout << a;
    } else {
        printDigit(a / 10);
        cout << (a % 10);  //  expensive
    }
}

int main (void) {
    unsigned a;
    cin >> a;
    printDigit(a);
    cout << endl;
    return 0;
}
