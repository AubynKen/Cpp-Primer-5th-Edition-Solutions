#include <iostream>

using namespace std;

int main() {
    int current {10};
    while (current >= 0) {
        cout << current << endl;
        --current;
    }
    return 0;
}