#include <iostream> 
#include "Functions.h"
#include "Stars.h"
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main () {
    //variables
    // string monthInput;
    // int monthDay = 0;
    // int yearInput = 0;
    // int hourInput = 0;
    // int minuteInput = 0;
    //vector <pair<double,double>> constellationCoordinates;
    vector <pair<double,double>> window;
    vector <pair<double,double>> coordinates;
    coordinates = constellationCoordinates();
    cout << "Size " << coordinates.size() << endl;
    pair<double, double> pair17a;
    pair17a = make_pair(15.0, 70.0);
    window.push_back(pair17a);
    pair<double, double> pair17b;
    pair17b = make_pair(5.0, 70.0);
    window.push_back(pair17b);
    pair<double, double> pair17c;
    pair17c = make_pair(15.0, 30.0);
    window.push_back(pair17c);
    pair<double, double> pair17d;
    pair17d = make_pair(5.0, 30.0);
    window.push_back(pair17d);
    
    
    cout <<  "==============Welcome to the Star-Gazer v 1.0==============" << endl;
    do {
        //Stars a;
        // yearInput = yearPrompt();
        
        // monthInput = monthPrompt();
        
        // monthDay = dayPrompt(monthInput, yearInput);
        
        // hourInput = hourPrompt();
        
        // minuteInput = minutePrompt();
        
        // testPair = altAndAziPair ();
        printConstellation (coordinates, window);

        // for (unsigned int i = 0; i < coordinates.size(); i++) {
        //     cout << coordinates.at(i).first  << " , ";
        //     cout << coordinates.at(i).second << endl;
        // }
    } while (false);
    
    //cout << dateToHour(yearInput, monthInput, monthDay, hourInput, minuteInput) << endl;
    return 0; 
}