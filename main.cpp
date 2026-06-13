#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Constant ticket prices for predefined routes
    const double PRICE_MELAKA_MUAR = 12.00;
    const double PRICE_MELAKA_KL = 18.00;

    // Variables for user input and processing
    int routeChoice = 0;
    int timeChoice = 0;
    int ticketQuantity = 0;
    double ticketPrice = 0.0;
    double totalAmount = 0.0;
    string destination = "";
    string departureTime = "";

    // STEP 1: Display Welcome Message (Simulating mobile app home screen)
    cout << "==================================================" << endl;
    cout << "     WELCOME TO REDBUS TICKETING SIMULATOR        " << endl;
    cout << "  Modernizing Your Journey - Powered by Winston Model" << endl;
    cout << "==================================================" << endl;
    cout << endl;

    // STEP 2: Route Selection
    cout << "Available Routes From Melaka Sentral:" << endl;
    cout << "1. Melaka Sentral to Muar (Mayang Sari Express)" << endl;
    cout << "2. Melaka Sentral to Kuala Lumpur (TBS)" << endl;
    cout << "Please select your route (1-2): ";
    cin >> routeChoice;

    // Processing route selection using switch-case statement (Requirement)
    switch (routeChoice) {
        case 1:
            destination = "Muar";
            ticketPrice = PRICE_MELAKA_MUAR;
            break;
        case 2:
            destination = "Kuala Lumpur (TBS)";
            ticketPrice = PRICE_MELAKA_KL;
            break;
        default:
            cout << "\nError: Invalid route selection! Exiting program." << endl;
            return 1; // Terminate program due to invalid input
    }

    // STEP 3: Departure Time Slot Selection
    cout << "\nAvailable Departure Schedules:" << endl;
    cout << "1. Morning Session (09:30 AM)" << endl;
    cout << "2. Afternoon Session (02:30 PM)" << endl;
    cout << "3. Evening Session (06:45 PM)" << endl;
    cout << "Please select departure time (1-3): ";
    cin >> timeChoice;

    // Processing schedule selection using if/else statements (Requirement)
    if (timeChoice == 1) {
        departureTime = "09:30 AM";
    } else if (timeChoice == 2) {
        departureTime = "02:30 PM";
    } else if (timeChoice == 3) {
        departureTime = "06:45 PM";
    } else {
        cout << "\nError: Invalid time selection! Exiting program." << endl;
        return 1; // Terminate program due to invalid input
    }

    // STEP 4: Ticket Quantity Input
    cout << "\nEnter number of tickets to purchase: ";
    cin >> ticketQuantity;

    // Validation to ensure quantity is positive
    if (ticketQuantity <= 0) {
        cout << "\nError: Invalid ticket quantity! Must be greater than 0." << endl;
        return 1;
    }

    // STEP 5: Calculate Total Price
    totalAmount = ticketPrice * ticketQuantity;

    // STEP 6: Output Digital Ticket Receipt (Simulating E-Ticket Generation)
    cout << "\n==================================================" << endl;
    cout << "           REDBUS DIGITAL E-TICKET CONFIRMATION   " << endl;
    cout << "==================================================" << endl;
    cout << " Status:        BOOKING CONFIRMED (PAID)" << endl;
    cout << " Origin:        Melaka Sentral" << endl;
    cout << " Destination:   " << destination << endl;
    cout << " Schedule:      " << departureTime << endl;
    cout << " Quantity:      " << ticketQuantity << " Passenger(s)" << endl;
    cout << " Price per Pax: RM " << fixed << setprecision(2) << ticketPrice << endl;
    cout << " Total Amount:  RM " << totalAmount << endl;
    cout << "--------------------------------------------------" << endl;
    cout << " [ DIGITAL QR CODE GENERATED FOR ELECTRONIC BOARDING ]" << endl;
    cout << " [*] SCAN-AND-BOARD ACTIVE AT PLATFORM GATE 3 [*]" << endl;
    cout << " Note: No paper printout required. Show this screen." << endl;
    cout << "==================================================" << endl;

    return 0;
}