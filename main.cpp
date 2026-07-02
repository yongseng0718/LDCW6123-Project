#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "============================================" << endl;
    cout << " Shopee Product Recommendation Assistant" << endl;
    cout << "============================================" << endl;

    cout << "Welcome to the Shopee interactive program!" << endl;
    cout << "This program will help users get product suggestions and checkout information." << endl << endl;

    cout << "Main Menu" << endl;
    cout << "1. Get product recommendation" << endl;
    cout << "2. Calculate checkout summary" << endl;
    cout << "3. View Shopee innovation summary" << endl;
    cout << "4. Exit" << endl << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Product recommendation feature selected." << endl;
    } else if (choice == 2) {
        cout << "Checkout summary feature selected." << endl;
    } else if (choice == 3) {
        cout << "Shopee innovation summary selected." << endl;
    } else if (choice == 4) {
        cout << "Thank you for using the program. Goodbye!" << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
