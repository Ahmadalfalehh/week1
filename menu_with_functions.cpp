#include <iostream>
using namespace std;

void showMenu() {
    cout << "1. Add Item\n2. View Items\n3. Exit\n";
}

int main() {
    int option;

    do {
        showMenu();
        cout << "Choose an option: ";
        cin >> option;

        if (option == 1) {
            cout << "Item added!\n";
        } else if (option == 2) {
            cout << "Displaying items...\n";
        } else if (option != 3) {
            cout << "Invalid option. Try again.\n";
        }

    } while (option != 3);

    cout << "Exiting program.\n";
    return 0;
}
