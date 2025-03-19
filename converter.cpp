#include <iostream>
using namespace std;

int main() {
    double distance;
    int choice;

    cout << "Distance Converter\n";
    cout << "Select the unit of distance to convert from:\n";
    cout << "1. Miles\n";
    cout << "2. Kilometers\n";
    cout << "3. Meters\n";
    cout << "4. Feet\n";
    cout << "Enter your choice (1/2/3/4): ";
    cin >> choice;
    cout << "Enter the distance: ";
    cin >> distance;

    if (choice == 1) {
        cout << distance << " miles is " << distance * 1.60934 << " kilometers.\n";
        cout << distance << " miles is " << distance * 1609.34 << " meters.\n";
        cout << distance << " miles is " << distance * 5280 << " feet.\n";
    }
    else if (choice == 2) {
        cout << distance << " kilometers is " << distance / 1.60934 << " miles.\n";
        cout << distance << " kilometers is " << distance * 1000 << " meters.\n";
        cout << distance << " kilometers is " << distance * 3280.84 << " feet.\n";
    }
    else if (choice == 3) {
        cout << distance << " meters is " << distance / 1609.34 << " miles.\n";
        cout << distance << " meters is " << distance / 1000 << " kilometers.\n";
        cout << distance << " meters is " << distance * 3.28084 << " feet.\n";
    }
    else if (choice == 4) {
        cout << distance << " feet is " << distance / 5280 << " miles.\n";
        cout << distance << " feet is " << distance / 3280.84 << " kilometers.\n";
        cout << distance << " feet is " << distance / 3.28084 << " meters.\n";
    }
    else {
        cout << "Invalid choice!\n";
    }

    return 0;
}
