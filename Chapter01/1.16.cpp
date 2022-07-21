#include <iostream>

using namespace std;

int main() {
    cout << "Enter some integers separated by a space : ";
    int sum = 0;
    int lastInput;
    while (cin >> lastInput) {
        sum += lastInput;
    }
    cout << "The sum of the inputs is : " << sum << endl;
    return 0;
}