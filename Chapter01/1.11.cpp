#include <iostream>

using namespace std;

int main() {

    int start{}, end{};
    cout << "Please enter two integers, the first one being smaller: ";
    cin >> start >> end;

    int current = start;
    cout << "Printing all the numbers between " << start << " and " << end << ": \n";
    while (current <= end) {
        cout << current << endl;
        current++;
    }

    cout << "End" << endl;

    return 0;
}