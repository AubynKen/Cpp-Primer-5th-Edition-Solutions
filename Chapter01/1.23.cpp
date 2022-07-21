#include <iostream>
#include "Sales_item.h"

using namespace std; /* with this, std::cout is simply cout, same for endl, string etc. */

int main() {

    Sales_item item; // curr stands for current

    /* raise error if there is no input. the '!' operator is the 'not' operator */
    if (!(cin >> item)) {
        cerr << "Empty input ! The input data must contain at least one item." << endl;
        return -1; // early return to exit the program with error code. The rest of the code is not executed.
    };

    int currCount = 1; // number of books with the same ISBN
    string currISBN = item.isbn();

    while (cin >> item) {

        if (item.isbn() == currISBN) { /* case 1: the new item has the same ISBN as the previous item */
            currCount++;
        } else { /* case 2: the new item has a new ISBN */
            cout << "ISBN: " << currISBN << "; count: " << currCount << endl;
            currCount = 1; // count of the new ISBN reset to 1
            currISBN = item.isbn(); // update current ISBN
        }
    }
    cout << "ISBN: " << currISBN << "; count: " << currCount << endl;

    return 0;
}