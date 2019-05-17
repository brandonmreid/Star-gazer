#include <iostream> 
#include "Functions.h"
#include "countries.h"
#include "Algorithm.h"
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main () {
    do{
        //variables
        string monthInput;
        int monthDay = 0;
        int yearInput = 0;
        int hourInput = 0;
        int minuteInput = 0;
        double hoursSinceYear = 0;
        pair <double,double> AltAndAziPair;
        pair <double, double> longAndLatPair;
        pair<double,double> returnValue;
        vector <pair<double,double>> window;
        vector <pair<double,double>> coordinates;
        
        cout <<  "==============Welcome to the Star-Gazer v 1.0==============" << endl;
        
            yearInput = yearPrompt();
            
            monthInput = monthPrompt();
            
            monthDay = dayPrompt(monthInput, yearInput);
            
            hourInput = hourPrompt();
            
            minuteInput = minutePrompt();
            
            AltAndAziPair = altAndAziPair ();
            
            printCities();
            
            longAndLatPair = longAndLat();
           
            hoursSinceYear = dateToHour(monthInput, yearInput, monthDay, hourInput, minuteInput);
            
            returnValue = algorithm(hoursSinceYear, longAndLatPair, AltAndAziPair, yearInput);

            window = viewFinder(returnValue);
            
            coordinates = constellationCoordinates();
            
            printConstellation(coordinates, window);
                
    } while(restart());
    
    return 0; 
}