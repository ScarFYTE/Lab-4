#include <iostream>
using namespace std;

int main() {
    float nts, fsc;
    cout << "Enter your NTS marks: ";
    cin >> nts;
    cout << "Enter your F.Sc marks: ";
    cin >> fsc;

    if (fsc > 70) {
        if (nts >= 70) {
            cout << "You are eligible for Oxford University IT department." << endl;
        } if (nts >= 60) {
            cout << "You are eligible for Oxford University Electronics department." << endl;
        } if (nts >= 50) {
            cout << "You are eligible for Oxford University Telecommunication department." << endl;
        } else {
            cout << "Sorry, you are not eligible for any department at Oxford University." << endl;
        }
    } else if (fsc >= 60 && fsc <= 70) {
        if (nts >= 50) {
            cout << "You are eligible for MIT IT department." << endl;
        } else {
            cout << "Sorry, you are not eligible for any department at MIT." << endl;
        }
    } else if (fsc >= 50 && fsc < 60) {
        if (nts >= 50) {
            cout << "You are eligible for MIT Chemical department." << endl;
        } else {
            cout << "Sorry, you are not eligible for any department at MIT." << endl;
        }
    } else if (fsc >= 40 && fsc < 50) {
        if (nts >= 50) {
            cout << "You are eligible for MIT Computer department." << endl;
        } else {
            cout << "Sorry, you are not eligible for any department at MIT." << endl;
        }
    } else {
        cout << "Sorry, you are not eligible for any department." << endl;
    }

    return 0;
}
