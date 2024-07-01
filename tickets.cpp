#include <iostream>
#include <string>
using namespace std;

class Tickets {
    public: 
        string film;
        string seat;
        string showtime;
        string room;
};

void tickets() {
    Tickets filmPick;
    string filmChoose;
    cout << "What film do you want to watch? ";
    cin >> filmChoose;
    cout << endl;
}