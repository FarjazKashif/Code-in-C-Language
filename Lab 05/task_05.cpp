#include <iostream>
#include <cstdlib> // rand()
using namespace std;

/*
A transportation company wants a ticket booking system where each ticket is assigned a passenger
with a unique ticket number. The system should also track the total number of tickets sold. To
implement this, create a Ticket class with private attributes for ticket number, passenger name, and
seat number. Provide setters and getters to ensure seat numbers remain within a valid range. Use a
static data member to maintain the total count of tickets sold. The program should demonstrate
multiple passengers booking tickets and tracking total sales.
*/

class Ticket
{
private:
    int ticketNumber;
    string passengerName;
    int seatNumber;
    static int soldTickets;

public:
    Ticket(string pN, int sN)
    {
        ticketNumber = rand() % 1000 + 1;
        passengerName = pN;
        seatNumber = sN;
        soldTickets++;
    }

    void display() {
        cout << "Ticket No: " << ticketNumber << ", Passenger: " << passengerName << ", Seat: " << seatNumber << endl;
    }

    static int getSoldTickets() {
        return soldTickets;
    }
};

int Ticket::soldTickets = 0;

int main() {

    Ticket t1("Alice", 12);
    Ticket t2("Bob", 15);

    t1.display();
    t2.display();

    cout << "Total Tickets Sold: " << Ticket::getSoldTickets() << endl;

    return 0;
}