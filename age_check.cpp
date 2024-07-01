#include <iostream>
#include <string>
#include <vector>
using namespace std;

class AgeInfo {
    public:
        vector<string> filmClasses;
};

// Constant based on film classification criteria in Vietnam
const int AGE_LIMIT[] = {18, 16, 13};                           // age limit
const string FILM_CLASSES[] = {"T18", "T16", "T13", "K", "P"};  // film classification

// Age classification
AgeInfo ageClass (int age) {
    AgeInfo info;
        if (age >= 18) {
            info.filmClasses = {FILM_CLASSES[0], FILM_CLASSES[1], FILM_CLASSES[2], 
                                FILM_CLASSES[3], FILM_CLASSES[4]};
        } else if (age < 18 && age >= 16) {
            info.filmClasses = {FILM_CLASSES[1], FILM_CLASSES[2], FILM_CLASSES[3],
                               FILM_CLASSES[4]};
        } else if (age < 16 && age >= 13) {
            info.filmClasses = {FILM_CLASSES[2], FILM_CLASSES[3], FILM_CLASSES[4]};
        } else {
            info.filmClasses = {FILM_CLASSES[3], FILM_CLASSES[4]};
        }
    return info;
}

void checkAge(int age) {
    cout << "How old are you?: ";
    cin >> age;
    cout << "Thanks! You are " << age << " years old!" << endl;
    AgeInfo info = ageClass(age);
    cout << "Film classification you can watch: ";
    // Loop show the film classification that can be viewed
    for (size_t i = 0; i < info.filmClasses.size(); ++i) {
        cout << info.filmClasses[i];
        // Check if it's the last character of an array
        if (i != info.filmClasses.size() -1) {
            cout << ", ";
        } else {
            cout << ".";
        }
    }
    cout << endl;
}
