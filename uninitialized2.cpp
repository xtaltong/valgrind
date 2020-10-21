#include <iostream>
using namespace std;

int main() {
    int x = 10;
    bool z = true;
    int y = x + 5;
    if (x) {
        cout << "X is non-zero" << endl;
    }
    if (z == true) {
        cout << "Z is truthy" << endl;
    }
    cout << y << endl;
    return 0;
}