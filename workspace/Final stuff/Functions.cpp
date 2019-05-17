/***************
 * Made by Brandon Reid and Moses Montanez
 * ***************/


#include "Functions.h"
#include "Stars.h"
#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <utility>

using namespace std;

// Input checking functions
int yearPrompt () { // empty argument
    int year = 0;
    do {
        cout << "Enter year: ";
        if (!(cin >> year)) { // validates that numbers were entered and checks input
            cerr << "Error! Please enter a valid integar." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue; 
        }
        if (isLeap(year)) { // Tells user if it is a leap year of not
            cout << "This is a leap year." << endl;
        } else if (!isLeap(year)) {
            cout << "This is not a leap year." << endl;
        }
        if (year > 0 && year < 9099) {
            return year;
        } else {
            cerr << "Error! Invalid year. Please enter a year between 1 and 9099" << endl;
        }
    } while (true);
}

string monthPrompt () {
    string month;
    do {
        cout << "Enter month (ex.April, May): ";
        cin >> month;
        if (month == "January" || month == "February" || month == "March" || month == "April" || month == "May" || month == "June" || month == "July" || month == "August" || month == "September" || month == "October" || month == "November" || month == "December") {
            return month;
        } else {
            cerr << "Error! Please enter a valid month." << endl;
        }
    } while (true);
}

int dayPrompt (string month, int year) {
    int day = 0;
    do {
        cout << "Enter day: ";
        if (!(cin >> day)) { // validates that numbers were entered and checks input
            cerr << "Error! Please enter a valid integar." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue; 
        }
        if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December") {
            if (day > 0 && day <= 31) {
                return day;
            }
        }
        if (month == "April" || month == "June" || month == "September" || month == "November") {
            if (day > 0 && day <= 30) {
                return day;
            }
        }
        if (month == "February") {
            if (isLeap(year)) {
                if (day > 0 && day <= 29) {
                    return day;
                } 
            } else if (!isLeap(year)) {
                if (day > 0 && day <= 28) {
                    return day;
                }
            }
        }
        cerr << "Error! Please enter a valid date." << endl;
    } while (true);
}

int hourPrompt () {
    int hour = 0;
    do {
        cout << "Enter hour (0 - 23): ";
        if (!(cin >> hour)) { // validates that numbers were entered and checks input
            cerr << "Error! Please enter a valid integar." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue; 
        }
        if (hour >= 0 && hour < 24) {
            return hour;
        } else {
            cerr << "Error! Please enter a valid hour." << endl;
        }
    } while (true);
}

int minutePrompt () {
    int minute = 0;
    do {
        cout <<  "Enter minute: ";
        if (!(cin >> minute)) { // validates that numbers were entered and checks input 
            cerr << "Error! Please enter a valid integar." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue; 
        }
        if (minute >= 0 && minute < 60) {
            return minute;
        } else {
            cerr << "Error! Please enter a valid minute." << endl;
        }
    } while (true);
}

pair<double,double> altAndAziPair () {
    double altitude = 0;
    double Azi;
    string direction;
    pair<double,double> aziPair;
    do {
        cout <<  "Enter the altitude at which you are looking (0-90): ";
        if (!(cin >> altitude)) { // validates that numbers were entered and checks input
            cerr << "Error! Please enter a valid integer." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue; 
        } 
        if (altitude >= 0 && altitude <= 90) {
            break;
        } else {
            cerr << "Please put in a valid value." << endl;
        }
    } while (true);
    
    do { // Prompt and check for cardinal direction
        cout <<  "Enter a cardinal direction (North, South, East, West, Northeast, Southeast, Southwest, or Northwest): ";
        cin >> direction;

        if (direction == "North") {
            Azi = 0;
            break;
        } else if (direction == "South") {
            Azi = 180;
            break;
        } else if (direction == "East") {
            Azi = 90;
            break;
        } else if (direction == "West") {
            Azi = 270;
            break;
        } else if (direction == "Northeast") {
            Azi = 45;
            break;
        } else if (direction == "Southeast") {
            Azi = 135;
            break;
        } else if (direction == "Southwest") {
            Azi = 225;
            break;
        } else if (direction == "Northwest") {
            Azi = 315;
            break;
        } else {
            cerr << "Error! Please input a valid direction" << endl;
        }
    } while (true);
    
    aziPair = make_pair(altitude,Azi);
    
    return aziPair;
}

double dateToHour (string month, int year, int day, int hour, int minute) { // Converts the date into hours 
    //variables
    double totHours = 0;
    int monthNum = 0;
    
    if (month == "January") { // For the number of months before each month in order
        monthNum = 0;
    } else if (month == "February") {
        monthNum = 1;
    } else if (month == "March") {
        monthNum = 2;
    } else if (month == "April") {
        monthNum = 3;
    } else if (month == "May") {
        monthNum = 4;
    } else if (month == "June") {
        monthNum = 5;
    } else if (month == "July") {
        monthNum = 6;
    } else if (month == "August") {
        monthNum = 7;
    } else if (month == "September") {
        monthNum = 8;
    } else if (month == "October") {
        monthNum = 9;
    } else if (month == "November") {
        monthNum = 10;
    } else {
        monthNum = 11;
    }
    if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December") { //Calculates the amount of hours for the months with 31 days
        totHours = (monthNum * 744) + ((day - 1) * 24) + (hour - 1) + (minute / 60);
        }
    else if (month == "April" || month == "June" || month == "September" || month == "November") { // Calculates the hours for the months with 30 days
        totHours = (monthNum * 720) + ((day - 1) * 24) + (hour - 1) + (minute / 60);
    }
    else if (month == "February") {
        if (isLeap(year)) { // Takes leap year into consideration and calculates the days in February with 29 days
            totHours = (monthNum * 696) + ((day - 1) * 24) + (hour - 1) + (minute / 60);
        } else if (!isLeap(year)) { // Calculates when February has 28 days
            totHours = (monthNum * 672) + ((day - 1) * 24) + (hour - 1) + (minute / 60);
        }
    }
    return totHours;
}

bool isLeap (int year) { // bool check for leap years
    if ((year % 4) == 0) {
        return true;
    } else {
        return false;
    }
}

vector <pair<double, double>> viewFinder (pair <double, double> centerPt) { // function that finds the coordinates the corner points of a viewing window
    // variables
    vector <pair<double, double>> corners;
    pair<double, double> pair1;
    pair<double, double> pair2;
    pair<double, double> pair3;
    pair<double, double> pair4;

    if (centerPt.second > 0) {
        if (centerPt.first > 20.125 && centerPt.second < 51) { 
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair((centerPt.first + 3.875) - 24,  centerPt.second + 39); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair((centerPt.first - 3.875),  centerPt.second + 39);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair((centerPt.first + 3.875) - 24,  centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair((centerPt.first - 3.875),  centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        } else if (centerPt.first < 3.875 && centerPt.second < 51) { 
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair((centerPt.first + 3.875),  centerPt.second + 39); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(24 - (3.875 - centerPt.first),  centerPt.second + 39);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair(centerPt.first + 3.875,  centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(24 - (3.875 - centerPt.first),  centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        } else if (centerPt.first > 20.125 && centerPt.second > 51) { 
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair((centerPt.first + 3.875) - 24,  -90 + (centerPt.second - 51)); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(centerPt.first - 3.875,  -90 + (centerPt.second - 51));
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair((centerPt.first + 3.875) - 24,  centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(centerPt.first - 3.875,  centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        } else if (centerPt.first < 3.875 && centerPt.second > 51) { 
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair(centerPt.first + 3.875,  -90 + (centerPt.second - 51)); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(24 - (3.875 - centerPt.first),  -90 + (centerPt.second - 51));
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair(centerPt.first + 3.875,  centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(24 - (3.875 - centerPt.first),  centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        } else if ((centerPt.first < 20.125 && centerPt.first > 3.875) && centerPt.second > 51) { 
           for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair(centerPt.first + 3.875,  -90 + (centerPt.second - 51)); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(centerPt.first - 3.875,  -90 + (centerPt.second - 51));
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair(centerPt.first + 3.875,  centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(centerPt.first - 3.875,  centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        } else if ((centerPt.first < 20.125 && centerPt.first > 3.875) && centerPt.second < 51) { 
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair(centerPt.first + 3.875,  centerPt.second + 39); 
                    corners.push_back(pair2);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(centerPt.first - 3.875,  centerPt.second + 51);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair(centerPt.first + 3.875,  centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(centerPt.first - 3.875,  centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        }
    } else if (centerPt.second < 0) {
        if (centerPt.first > 20.125 && centerPt.second > -51) { 
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair((centerPt.first + 3.875) - 24,  centerPt.second + 39); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair((centerPt.first - 3.875),  centerPt.second + 39);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair((centerPt.first + 3.875) - 24,  centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair((centerPt.first - 3.875),  centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        } else if (centerPt.first < 3.875 && centerPt.second > -51) { 
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair((centerPt.first + 3.875),  centerPt.second + 39); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(24 - (3.875 - centerPt.first),  centerPt.second + 39);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair(centerPt.first + 3.875,  centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(24 - (3.875 - centerPt.first),  centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        } else if (centerPt.first > 20.125 && centerPt.second < -51) { 
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair((centerPt.first + 3.875) - 24,  centerPt.second + 39); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(centerPt.first - 3.875,  centerPt.second + 39);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair((centerPt.first + 3.875) - 24,  90 + (centerPt.second + 51)); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(centerPt.first - 3.875,  90 + (centerPt.second + 51));
                    corners.push_back(pair4);   
                }
            }
        } else if (centerPt.first < 3.875 && centerPt.second < -51) {
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair(centerPt.first + 3.875,  centerPt.second + 39); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(24 - (3.875 - centerPt.first), centerPt.second + 39);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair(centerPt.first + 3.875, 90 + (centerPt.second + 51)); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(24 - (3.875 - centerPt.first), 90 + (centerPt.second + 51));
                    corners.push_back(pair4);   
                }
            }
        } else if ((centerPt.first < 20.125 && centerPt.first > 3.875) && centerPt.second < -51) {
            for(int i = 0; i < 4; i++) {
                if (i == 0) { // top left point
                    pair1 = make_pair(centerPt.first + 3.875, centerPt.second + 39); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(centerPt.first - 3.875, centerPt.second + 39);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair(centerPt.first + 3.875, 90 + (centerPt.second + 51)); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(centerPt.first - 3.875, 90 + (centerPt.second + 51));
                    corners.push_back(pair4);   
                }
            }
        } else if ((centerPt.first < 20.125 && centerPt.first > 3.875) && centerPt.second > -51) {
            for(int i = 0; i < 4; i++) {
                pair<double, double> pair;
                if (i == 0) { // top left point
                    pair1 = make_pair(centerPt.first + 3.875, centerPt.second + 39); 
                    corners.push_back(pair1);   
                } else if (i == 1) { // top right point
                    pair2 = make_pair(centerPt.first - 3.875, centerPt.second + 39);
                    corners.push_back(pair2);   
                } else if (i == 2) { // bottom left point
                    pair3 = make_pair(centerPt.first + 3.875, centerPt.second - 39); 
                    corners.push_back(pair3);   
                } else if (i == 3) { // bottom right point
                    pair4 = make_pair(centerPt.first - 3.875, centerPt.second - 39);
                    corners.push_back(pair4);   
                }
            }
        }
    }
    return corners;
}

vector <pair<double, double>> constellationCoordinates () { // Function to store the coordinates of the constellations
    vector <pair<double, double>> coordinates;
    // Canis Major
    coordinates.push_back(make_pair(7.45, -9.0));
    coordinates.push_back(make_pair(6.1, -9.0));
    coordinates.push_back(make_pair(7.45, -33.0));
    coordinates.push_back(make_pair(6.1, -33.0));
    
    //Eridanius
    coordinates.push_back(make_pair(5.1, -0.3));
    coordinates.push_back(make_pair(1.6, -0.3));
    coordinates.push_back(make_pair(5.1, -59.0));
    coordinates.push_back(make_pair(1.6, -59.0));
    
    // Gemini
    coordinates.push_back(make_pair(8.1, 35.0));
    coordinates.push_back(make_pair(6.1, 35.0));
    coordinates.push_back(make_pair(8.1, 10.1));
    coordinates.push_back(make_pair(6.1, 10.1));
    
    // Orion
    coordinates.push_back(make_pair(6.3, 25.0));
    coordinates.push_back(make_pair(4.7, 25.0));
    coordinates.push_back(make_pair(6.3, -10.0));
    coordinates.push_back(make_pair(4.7, -10.0));
    
    // Tarus
    coordinates.push_back(make_pair(6.7, 30.0));
    coordinates.push_back(make_pair(3.5, 30.0));
    coordinates.push_back(make_pair(6.7, 0));
    coordinates.push_back(make_pair(3.5, 0));
    
    // Bootes

    coordinates.push_back(make_pair(16.4, 53.0));
    coordinates.push_back(make_pair(13.8, 53.0));
    coordinates.push_back(make_pair(16.4, 7.0));
    coordinates.push_back(make_pair(13.8, 7.0));
    
    // Cancer
    coordinates.push_back(make_pair(9.5, 35.0));
    coordinates.push_back(make_pair(7.9, 35.0));
    coordinates.push_back(make_pair(9.5, 5.0));
    coordinates.push_back(make_pair(7.9, 5.0));
    
    // Leo
    coordinates.push_back(make_pair(12.1, 32.0));
    coordinates.push_back(make_pair(9.5, 32.0));
    coordinates.push_back(make_pair(12.1, 7.0));
    coordinates.push_back(make_pair(9.5, 7.0));
    
    // Virgo
    coordinates.push_back(make_pair(15.0, 9.0));
    coordinates.push_back(make_pair(12.0, 9.0));
    coordinates.push_back(make_pair(15.0, -12.0));
    coordinates.push_back(make_pair(12.0, -12.0));
    
    // Aquila
    coordinates.push_back(make_pair(20.3, 13.0));
    coordinates.push_back(make_pair(19.0, 13.0));
    coordinates.push_back(make_pair(20.3, -5.0));
    coordinates.push_back(make_pair(19.0, -5.0));
    
    // Sagitarius
    coordinates.push_back(make_pair(20.0, -20.0));
    coordinates.push_back(make_pair(18.0, -20.0));
    coordinates.push_back(make_pair(20.0, -44.4));
    coordinates.push_back(make_pair(18.0, -44.4));
    
    // Scorpius
    coordinates.push_back(make_pair(18.0, -21.1));
    coordinates.push_back(make_pair(16.0, -21.0));
    coordinates.push_back(make_pair(18.0, -42.0));
    coordinates.push_back(make_pair(16.0, -42.0));
    
    // Capricornus
    coordinates.push_back(make_pair(21.8, -12.0));
    coordinates.push_back(make_pair(20.3, -12.0));
    coordinates.push_back(make_pair(21.8, -28.0));
    coordinates.push_back(make_pair(20.3, -28.0));
    
    // Pegasus
    coordinates.push_back(make_pair(0.2, 30.0));
    coordinates.push_back(make_pair(21.2, 30.0));
    coordinates.push_back(make_pair(0.2, 6.0));
    coordinates.push_back(make_pair(21.2, 6.0));
    
    // Pisces
    coordinates.push_back(make_pair(2.0, 31.0));
    coordinates.push_back(make_pair(23.1, 31.0));
    coordinates.push_back(make_pair(2.0, 2.0));
    coordinates.push_back(make_pair(23.1, 2.0));
    
    // Ursa Minor
    coordinates.push_back(make_pair(2.5, 89.0));
    coordinates.push_back(make_pair(15.0, 89.0));
    coordinates.push_back(make_pair(2.5, 70.0));
    coordinates.push_back(make_pair(15.0, 70.0));
    
    // Ursa Major
    coordinates.push_back(make_pair(13.7, 61.0));
    coordinates.push_back(make_pair(8.6, 61.0));
    coordinates.push_back(make_pair(13.7, 32.0));
    coordinates.push_back(make_pair(8.6, 32.0));
    
    //Hercules
    coordinates.push_back(make_pair(18.1, 57.0));
    coordinates.push_back(make_pair(16.0, 57.0));
    coordinates.push_back(make_pair(18.1, 12.0));
    coordinates.push_back(make_pair(16.0, 12.0));
    
    //Cygnus
    coordinates.push_back(make_pair(21.1, 53.0));
    coordinates.push_back(make_pair(19.1, 53.0));
    coordinates.push_back(make_pair(21.1, 29.0));
    coordinates.push_back(make_pair(19.1, 29.0));
    
    //Pavo
    coordinates.push_back(make_pair(21.5, -58.0));
    coordinates.push_back(make_pair(17.9, -58.0));
    coordinates.push_back(make_pair(21.5, -74.0));
    coordinates.push_back(make_pair(17.9, -74.0));
    
    //Centaurus
    coordinates.push_back(make_pair(14.6, -38.0));
    coordinates.push_back(make_pair(11.3, -38.0));
    coordinates.push_back(make_pair(14.6, -64.0));
    coordinates.push_back(make_pair(11.3, -64.0));
    
    //Canes Venatici
    coordinates.push_back(make_pair(13.0, 42.0));
    coordinates.push_back(make_pair(12.5, 42.0));
    coordinates.push_back(make_pair(13.0, 38.0));
    coordinates.push_back(make_pair(12.5, 38.0));
    
    //Lynx
    coordinates.push_back(make_pair(9.4, 60.0));
    coordinates.push_back(make_pair(6.4, 60.0));
    coordinates.push_back(make_pair(9.4, 37.0));
    coordinates.push_back(make_pair(6.4, 37.0));
    
    //Auriga
    coordinates.push_back(make_pair(6, 46.0));
    coordinates.push_back(make_pair(5, 46.0));
    coordinates.push_back(make_pair(6, 30.0));
    coordinates.push_back(make_pair(5, 30.0));
    
    //Hydra
    coordinates.push_back(make_pair(14.2, 8.0));
    coordinates.push_back(make_pair(8.6, 8.0));
    coordinates.push_back(make_pair(14.2, -35.0));
    coordinates.push_back(make_pair(8.6, -35.0));
    
    //Vela
    coordinates.push_back(make_pair(10.8, -42.0));
    coordinates.push_back(make_pair(8.3, -42.0));
    coordinates.push_back(make_pair(10.8, -55.0));
    coordinates.push_back(make_pair(8.3, -55.0));
    
    //Lupus
    coordinates.push_back(make_pair(16.2, -30.0));
    coordinates.push_back(make_pair(14.5, -30.0));
    coordinates.push_back(make_pair(16.2, -50.4));
    coordinates.push_back(make_pair(14.5, -50.4));
    
    return coordinates;
}


void printConstellation (vector <pair<double,double>> constellationCoordinates, vector <pair<double,double>> window) { // Function that checks if constellation is within viewing window they prints they to console
    // variables
    double windowLeft = window.at(0).first;
    double windowRight = window.at(1).first;
    double windowTop = window.at(0).second;
    double windowBottom = window.at(3).second;
    int inrangeCount = 0;
    int coordinateCount = 0;
    
    for(unsigned int j = 0; j < (constellationCoordinates.size() / 4) - 1; j++) {
        inrangeCount = 0;
        for (int i = 0; i < 4; i++) {
            coordinateCount++;
            if((windowLeft > constellationCoordinates.at(coordinateCount).first) && (constellationCoordinates.at(coordinateCount).first < windowRight) // checks if specific constellation point falls within window boundaries
            && (windowTop > constellationCoordinates.at(coordinateCount).second) && (constellationCoordinates.at(coordinateCount).second > windowBottom)) {
                inrangeCount++;
            }
        }
        if (inrangeCount == 4) {
            cout << "Constellation" << constellationNamer(coordinateCount - 1) << "is fully in view." << endl
                 << "Here is an image." << endl << "============================================" << endl;
                 
            constellationOutputter(coordinateCount - 1);
        } else if (inrangeCount < 4 && inrangeCount > 0) {
            cout << "Constellation" << constellationNamer(coordinateCount - 1) << "is partially in view." << endl
                 << "Here is an image." << endl << "============================================" << endl;
            constellationOutputter(coordinateCount - 1);
        } else {
            cout << endl;
        }
        
    }
    
}

string constellationNamer (int index) { // Function to assign names to constellations
    switch (index) {
        case 3:
            return " Canis Major ";
        case 7:
            return " Eridanius ";
        case 11:
            return " Gemini ";
        case 15:
            return " Orion ";
        case 19:
            return  " Tarus ";
        case 23:
            return " Bootes ";
        case 27:
            return " Cancer";
        case 31:
            return " Leo ";
        case 35:
            return  " Virgo ";
        case 39:
            return " Aquila ";
        case 43:
            return " Sagitarius ";
        case 47:
            return " Scorpius ";
        case 51:
            return " Capricornus ";
        case 55:
            return  " Pegasus ";
        case 59:
            return " Pisces ";
        case 63:
            return " Ursa Minor ";
        case 67:
            return " Ursa Major ";
        case 71:
            return " Hercules ";
        case 75:
            return " Cygnus ";
        case 79:
            return " Pavo ";
        case 83:
            return " Centaurus ";
        case 87:
            return " Canes Venatici ";
        case 91:
            return " Lynx ";
        case 95:
            return " Auriga ";
        case 99:
            return " Hydra ";
        case 103:
            return " Vela ";
        case 107:
            return " Lupus ";
        default:
            return " Unknown constellation ";
    }
}

void constellationOutputter (int index) { // Constellation to call and print constellations
    Stars a;
    switch (index) {
        case 3:
            a.CanisMajor0();
            cout << endl;
            break;
        case 7:
            a.Eridanius1();
            cout << endl;
            break;
        case 11:
            a.Gemini2();
            cout << endl;
            break;
        case 15:
            a.Orion3();
            cout << endl;
            break;
        case 19:
            a.Tarus4();
            cout << endl;
            break;
        case 23:
            a.Bootes5();
            cout << endl;
            break;
        case 27:
            a.Cancer6();
            cout << endl;
            break;
        case 31:
            a.Leo7();
            cout << endl;
            break;
        case 35:
            a.Virgo8();
            cout << endl;
            break;
        case 39:
            a.Aquila9();
            cout << endl;
            break;
        case 43:
            a.Sagistarius10();
            cout << endl;
            break;
        case 47:
            a.Scorpius11();
            cout << endl;
            break;
        case 51:
            a.Capricornus12();
            cout << endl;
            break;
        case 55:
            a.Pegasus13();
            cout << endl;
            break;
        case 59:
            a.Pisces14();
            cout << endl;
            break;
        case 63:
            a.UrsaMinor15();
            cout << endl;
            break;
        case 67:
            a.UrsaMajor16();
            cout << endl;
            break;
        case 71:
            a.Hercules17();
            cout << endl;
            break;
        case 75:
            a.Cygnus18();
            cout << endl;
            break;
        case 79:
            a.Pavo19();
            cout << endl;
            break;
        case 83:
            a.Centaurus20();
            cout << endl;
            break;
        case 87:
            a.CanesVenatici21();
            cout << endl;
            break;
        case 91:
            a.Lynx22();
            cout << endl;
            break;
        case 95:
            a.Auriga23();
            cout << endl;
            break;
        case 99:
            a.Hydra24();
            cout << endl;
            break;
        case 103:
            a.Vela25();
            cout << endl;
            break;
        case 107:
            a.Lupus26();
            cout << endl;
            break;
        default:
            cout << endl;
    }
}


bool restart(){ // Function to prompt and ask for restart
    bool goodInput;
    char input;
    cout << "Would you like to quit? (y/n): " << endl;
    do{
        cin >> input;
        if(input != 'y' && input != 'n'){
            goodInput = false;
            cerr << "Error: Invalid input. Try again." << endl;
            cin.clear();
        } else {
            goodInput = true;
        }
    } while(!goodInput);
    
    if (input == 'y'){
        return false;
    } else {
        return true;
    }
}