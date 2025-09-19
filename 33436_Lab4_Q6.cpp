#include <iostream>
using namespace std;

void showWelcome() {
    cout << "Coffee Machine Controller" << endl;
    cout << endl;
}

double getCoffeeTime(char type, bool isDouble) {
    double total = 0;
    double extra = isDouble ? 1.5 : 1.0;
    
    if (type == 'W' || type == 'w') {
        cout << "Adding water (15 min)" << endl;
        total += 15;
        
        cout << "Adding sugar (15 min)" << endl;
        total += 15;
        
        cout << "Mixing well (20 min)" << endl;
        total += 20;
        
        cout << "Adding coffee (" << 2 * extra << " min)" << endl;
        total += 2 * extra;
        
        cout << "Adding milk (4 min)" << endl;
        total += 4;
        
        cout << "Final mixing (20 min)" << endl;
        total += 20;
        
    } else {
        cout << "Adding water (20 min)" << endl;
        total += 20;
        
        cout << "Adding sugar (20 min)" << endl;
        total += 20;
        
        cout << "Mixing well (25 min)" << endl;
        total += 25;
        
        cout << "Adding coffee (" << 15 * extra << " min)" << endl;
        total += 15 * extra;
        
        cout << "Skipping milk (black coffee)" << endl;
        
        cout << "Final mixing (25 min)" << endl;
        total += 25;
    }
    
    return total;
}

int main() {
    showWelcome();
    
    char coffeeType;
    cout << "Enter coffee type (B for Black, W for White): ";
    cin >> coffeeType;
    
    char sizeChoice;
    cout << "Double size? (Y/N): ";
    cin >> sizeChoice;
    bool isDouble = (sizeChoice == 'Y' || sizeChoice == 'y');
    
    char manualChoice;
    cout << "Manual coffee? (Y/N): ";
    cin >> manualChoice;
    bool isManual = (manualChoice == 'Y' || manualChoice == 'y');
    
    cout << endl << "Starting coffee preparation" << endl;
    cout <<endl;
    
    double totalTime = getCoffeeTime(coffeeType, isDouble);
    
    if (isManual) {
        cout << "Manual preparation selected" << endl;
    }
    
    cout <<endl;
    cout << "Total time: " << totalTime << " minutes" << endl;
    cout << "Your coffee is ready! Enjoy!" << endl;
    
    return 0;
}
