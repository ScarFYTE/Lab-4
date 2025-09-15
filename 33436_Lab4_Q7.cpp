#include <iostream>
using namespace std;

int main() {
    double n;
    cout << "Enter Richter scale number: ";
    cin >> n;

    if (n < 5.0)
        cout << "Little or no Damage" << endl;
    else if (n >= 5.0 && n < 5.5)
        cout << "Some damage" << endl;
    else if (n >= 5.5 && n < 6.5)
        cout << "Serious damage: walls may crack or fall" << endl;
    else if (n >= 6.5 && n < 7.5)
        cout << "Disaster: Houses and Buildings may collapse" << endl;
    else
        cout << "Catastrophe: Most buildings destroyed" << endl;

    return 0;
}
