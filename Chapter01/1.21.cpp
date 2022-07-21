#include <iostream>
#include "Sales_item.h";

using namespace std;

int main() {
    Sales_item firstItem, secondItem, itemSum;
    cin >> firstItem;
    cin >> secondItem;
    itemSum = firstItem + secondItem;
    cout << itemSum << endl;
    return 0;
}