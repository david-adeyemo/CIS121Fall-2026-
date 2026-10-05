#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
int main() {

    // Define Variables 
    char locationCode;
    int numberOfTickets;
    double pricePerTicket, total;

    // Input Phase 

    cout << " Enter Number of Ticket purchased :";
    cin >> numberOfTickets;

    cout << " Enter Location Code (H,L) :";
    cin >> locationCode;
    locationCode = toupper(locationCode); // Convert to uppercase

    // Processing Phase

    if (numberOfTickets > 25 || locationCode == 'H') {
        pricePerTicket = 30.00;
    }
    else if (numberOfTickets > 10 || locationCode == 'L') {
        pricePerTicket = 40.00;
    }
    else {
        pricePerTicket = 50.00;
    }
    total = numberOfTickets * pricePerTicket;
   
   
    cout << fixed << setprecision(2);
    cout << "Number of Tickets: " << numberOfTickets << endl;
    cout << " Price Per Ticket:$ " << pricePerTicket << endl;
    cout << " Total Cost: $" << total << endl;

    return 0;
   
}