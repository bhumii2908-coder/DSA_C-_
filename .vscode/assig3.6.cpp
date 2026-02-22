#include <iostream>
using namespace std;

int main() {
    int choice, qty;
    int total = 0;
    char again;

    do {
        cout << "\n====== WELCOME TO MINI SHOP ======\n";
        cout << "1. Pen      - Rs 10\n";
        cout << "2. Notebook - Rs 50\n";
        cout << "3. Bag      - Rs 500\n";
        cout << "4. Bottle   - Rs 100\n";
        cout << "5. Exit\n";
        cout << "=================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 5) break;

        cout << "Enter quantity: ";
        cin >> qty;

        switch(choice) {
            case 1:
                total += 10 * qty;
                break;
            case 2:
                total += 50 * qty;
                break;
            case 3:
                total += 500 * qty;
                break;
            case 4:
                total += 100 * qty;
                break;
            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to buy more items? (y/n): ";
        cin >> again;

    } while(again == 'y' || again == 'Y');

    cout << "\n===== BILL =====\n";
    cout << "Total Amount = Rs " << total << endl;
    cout << "Thank you for shopping! 😊\n";

    return 0;
}