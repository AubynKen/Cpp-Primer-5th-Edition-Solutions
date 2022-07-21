#include <iostream>

using namespace std;

int main() {

    cout << "Enter two integers, separated by space:";
    int start{}, end{}; // '{}' initializes the numbers to avoid weired bugs
    cin >> start >> end;

    /* make sure start is smaller or equal to end. If not, swap the two numbers. */
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    cout << "Printing all integers from " << start << " to " << end << endl;
    for (int i = start; i <= end; i++) {
        cout << i << endl;
    }

    cout << "END" << endl;
}