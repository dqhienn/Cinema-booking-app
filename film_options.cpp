#include <iostream>
#include <string>
using namespace std;

// Film information
class FilmInfo {
    public:
        string filmTitle;
        string filmDes;
        string filmGenre;
        string filmClass;
        string filmDuration;
        string showtime;
};

// Show film to customer
void showFilm(FilmInfo film[], int filmSize) {
    cout << "Popular Films:" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < filmSize; ++i) {
        cout << film[i].filmTitle << endl;
        cout << "Description: " << film[i].filmDes << endl;
        cout << "Genre: " << film[i].filmGenre << endl;
        cout << "Classification: " << film[i].filmClass << endl;
        cout << "Duration: " << film[i].filmDuration << endl;
        cout << "Showtime: " << film[i].showtime << endl;

        // Check if it's the last character of an array
        if (i != filmSize - 1) {
            cout << "--------------------" << endl;
        }
    }
    cout << "----------------------------------" << endl;
}

void filmShowing() {
    FilmInfo film[] = {
        // Avenger: Endgame
        {   {"Avenger: Endgame"},
            {"ABC"},
            {"Superhero, Action, Fantasy, Science Fiction, Adventure"},
            {"T13"},
            {"181 minutes"},
            {"09:10 | 13:10 | 15:00 | 19:00 | 20:10 | 21:00 | 22:00"}},
        
        // Deadpool
        {   {"Deadpool"},
            {"DEF"},
            {"Action, Comedy, Superhero, Science Fiction"},
            {"T18"},
            {"108 minutes"},
            {"09:20 | 10:00 | 11:45 | 18:10 | 19:15 | 20:45"}},
        
        // Home Alone
        {   {"Home Alone"},
            {"JHI"},
            {"Comedy, Action, Family, Children, Adventure"},
            {"P"},
            {"103 minutes"},
            {"19:00 | 20:00"}},

        // Kingsman
        {   {"Kingsman: The Secret Service"},
            {"JKL"},
            {"Action, Spy, Comedy, Adventure, Science Fiction"},
            {"T18"},
            {"129 minutes"},
            {"09:40 | 12:00 | 18:00 | 20:10"}},

        // Titanic
        {   {"Titanic"},
            {"MNO"},   
            {"Romantic, Disaster, Historical, Drama"},
            {"P"},
            {"195 minutes"}, 
            {"12:00 | 19:30 | 21:00 | 22:00"}}
    };
    // Calculate size of array
    int filmSize = sizeof(film) / sizeof(film[0]);      
    showFilm(film, filmSize);
}
