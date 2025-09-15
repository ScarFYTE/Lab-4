#include <iostream>
using namespace std;

bool sleepIn(bool weekday, bool vacation) {
    return !weekday || vacation;
}

int main() {
    cout << "sleepIn(false, false): " << sleepIn(false, false) << endl;
    cout << "sleepIn(true, false): " << sleepIn(true, false) << endl;
    cout << "sleepIn(false, true): " << sleepIn(false, true) << endl;

    return 0;
}
