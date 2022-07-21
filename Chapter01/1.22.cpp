#include <iostream>
#include "Sales_item.h";

using namespace std;

int main() {
    Sales_item sum, item;

    /* early return if empty input */
    if (!(cin >> sum)) return 0;

    while (cin >> item) {
        sum += item;
        cout << sum << endl;
    }

    return 0;
}