#include <iostream>

using namespace std;

int main() {
    int x{42};
    int y{-1};

    int *ptr = &x;
    cout << "ptr: " << ptr << endl; // prints the address of x
    cout << "*ptr: " << *ptr << endl; // expected: 42;

    /* changing the value of the pointer */
    ptr = &y; // now ptr points to y
    cout << "\n" << "ptr: " << ptr << endl; // prints the address of y
    cout << "*ptr: " << *ptr << endl; // expected: -1

    /* changing the value of the variable the pointer points to */
    *ptr = 100;
    cout << "\n" << "ptr: " << ptr << endl; // expected: the same memory address as previously
    cout << "*ptr: " << *ptr << endl; // expected: 100
}