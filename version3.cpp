#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> // ?? system("cls")

using namespace std;

// ?????????
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    // --- ???? ---
    int destChoice, seatChoice;
    string passengerName, phoneNumber, email;
    string destination;
    double price = 0.0;
    
    // ???40??? (false????,true?????)
    // ?????41,????????????? 1-40
    bool seats[41] = {false}; 
    
    // "??"???????Book????
    seats[5] = true;
    seats[12] = true;
    seats[23] = true;
    seats[38] = true;

    // ==========================================
    // ?? 1:?????
    // ==========================================
    clearScreen();
    cout << "=======================================\n";
    cout << "      REDBUS EXPRESS - TICKET BOOKING  \n";
    cout << "=======================================\n";
    cout << "Available Destinations from Kuala Lumpur:\n";
    cout << "1. Cameron Highlands (RM 35.00)\n";
    cout << "2. Penang Island (RM 40.00)\n";
    cout << "3. Johor Bahru (RM 30.00)\n";
    cout << "Select destination (1-3): ";
    cin >> destChoice;

    switch(destChoice) {
        case 1: destination = "Cameron Highlands"; price = 35.00; break;
        case 2: destination = "Penang Island"; price = 40.00; break;
        case 3: destination = "Johor Bahru"; price = 30.00; break;
        default: destination = "Unknown"; price = 0.00;
    }

    // ==========================================
    // ?? 2:????
    // ==========================================
    clearScreen();
    cout << "=======================================\n";
    cout << "  SEAT SELECTION: " << destination << "\n";
    cout << "=======================================\n";
    cout << "Economy (2+2) Layout\n\n";

    // ?????
    for (int i = 1; i <= 40; i++) {
        if (seats[i]) {
            // ????????,?? XX ????/???
            cout << "[ XX ] "; 
        } else {
            // ?? setfill ? setw ???????0,????,?? [ 01 ]
            cout << "[ " << setfill('0') << setw(2) << i << " ] ";
        }
        
        // ????:???????????,???????
        if (i % 2 == 0 && i % 4 != 0) cout << "   "; // ??
        if (i % 4 == 0) cout << "\n\n";              // ??
    }
    
    cout << "---------------------------------------\n";
    cout << "[ 01 ] = Available   [ XX ] = Booked\n";
    cout << "---------------------------------------\n";
    cout << "Enter seat number to book (1-40): ";
    cin >> seatChoice;
    
    // (????:?????? 'XX' ?????????)

    // ==========================================
    // ?? 3:??????
    // ==========================================
    clearScreen();
    cout << "=======================================\n";
    cout << "          PASSENGER DETAILS            \n";
    cout << "=======================================\n";
    
    // ????:??? cin >> ?,?????????????
    // ???? cin.ignore() ???,????? getline ?????
    cin.ignore(); 

    cout << "Full Name     : ";
    getline(cin, passengerName);
    
    cout << "Phone Number  : ";
    getline(cin, phoneNumber);
    
    cout << "Email Address : ";
    getline(cin, email);

    // ==========================================
    // ?? 4:???????
    // ==========================================
    clearScreen();
    cout << "=======================================\n";
    cout << "       E-TICKET CONFIRMATION           \n";
    cout << "=======================================\n";
    cout << "Passenger Name : " << passengerName << "\n";
    cout << "Contact Info   : " << phoneNumber << " | " << email << "\n";
    cout << "---------------------------------------\n";
    cout << "Route          : Kuala Lumpur -> " << destination << "\n";
    cout << "Seat Number    : " << seatChoice << "\n";
    cout << "Total Paid     : RM " << fixed << setprecision(2) << price << "\n";
    cout << "=======================================\n";
    cout << "Thank you for choosing RedBus!\n";

    return 0;
}
