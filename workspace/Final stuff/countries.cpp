/***************
 * Made by Elon Bontemps
 * ***************/


#include "countries.h"
#include <iostream> //make a function
#include <utility>
#include <string>
#include <map>
#include <fstream>
#include <vector>
using namespace std;

//function returns map of pairs
pair<double,double> longAndLat () {
    ifstream fin;
    fin.open("coordinates.txt");
    
    //variables
    vector <pair<double,double>> coordinateVector;
    int cityNum;
    
    if(!fin.is_open()) {
        cerr << "Error couldn't open file." << endl;
        exit(1);
    }
    
    while(!fin.eof()) {
        string temp1;
        string temp2;
        pair<double,double> tempPair;
        //getline(fin, placeName, '.');
        getline(fin, temp1, ',');
        getline(fin, temp2, '\n');
        tempPair.first = stod(temp1);
        tempPair.second = stod(temp2);
        coordinateVector.push_back(tempPair); //ads latitudes and longitutes to coordinate vector 
    }

    do {
        cout << endl << "In the list about, which city do you live in/live near? (enter number): ";
        if (!(cin >> cityNum)) { // validates that numbers were entered and checks input
            cerr << "Error! Please enter a valid integar." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue; 
        }
        if (cityNum > 0 && cityNum < 40) {
            break;
        } else {
            cerr << "Error! Invalid year. Please enter a year between 1 and 9099" << endl;
        }
    } while (true);
    
    fin.close();
    return coordinateVector.at(cityNum - 1);
}

void printCities () {
    cout << endl << endl << "City list" << endl << "========" << endl;
    char contents;
    ifstream fin;
    fin.open("countries.txt");
    fin.get(contents);
    
    while(!fin.eof()) {
        cout << contents;
        fin.get(contents);
    }

    fin.close();
}