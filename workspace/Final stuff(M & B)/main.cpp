#include <iostream> 
#include "Functions.h"
#include "countries.h"
#include "Algorithm.h"
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main () {
    //variables
    string monthInput;
    int monthDay = 0;
    int yearInput = 0;
    int hourInput = 0;
    int minuteInput = 0;
    double hoursSinceYear = 0;
    pair <double,double> AltAndAziPair;
    pair <double, double> longAndLatPair;
    vector <pair<double,double>> window;
    vector <pair<double,double>> coordinates;
    
    
    cout <<  "==============Welcome to the Star-Gazer v 1.0==============" << endl;
    do {
        yearInput = yearPrompt();
        
        monthInput = monthPrompt();
        
        monthDay = dayPrompt(monthInput, yearInput);
        
        hourInput = hourPrompt();
        
        minuteInput = minutePrompt();
        
        AltAndAziPair = altAndAziPair ();
        
        printCities();
        
        longAndLatPair = longAndLat();
        
        hoursSinceYear = dateToHour(monthInput, yearInput, monthDay, hourInput, minuteInput);
        
        pair<double,double> returnValue;
        returnValue = algorithm(hoursSinceYear, longAndLatPair, AltAndAziPair, yearInput);
        // cout << "The algorithm function, when its January 27, 2017, at 5:45:54 pm, at a lat and long of -46,89 and when looking at the sky at 20, 270 (in horizontal coordinates), gives: " << endl
        //      << "Right ascention of: " << returnValue.first << " and a declination of: " << returnValue.second << endl;
             
        window = viewFinder(returnValue);
        
        coordinates = constellationCoordinates();
        
        printConstellation(coordinates, window);
        
        
            
    } while (!restart());
        
        
    //cout << dateToHour(yearInput, monthInput, monthDay, hourInput, minuteInput) << endl;
    return 0; 
}