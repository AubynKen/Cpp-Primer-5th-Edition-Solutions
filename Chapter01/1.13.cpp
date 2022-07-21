#include <iostream>

using namespace std;

int main() {
    // 1.9
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
    cout << "The sum of 50 to 100 is " << sum << std::endl;

    // 1.10
    for (int i = 10; i >= 0; i++) {
        cout << i << endl;
    }

    return 0;
}