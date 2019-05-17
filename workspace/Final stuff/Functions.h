#include <string>
#include <vector>
using namespace std;


int yearPrompt (); // Prompts and checks year input

string monthPrompt (); // Prompts and checks month input

int dayPrompt (string month, int year); // Prompts and checks day input

int hourPrompt (); // Prompts and checks hour input

int minutePrompt (); // Prompts and checks minute input

double dateToHour (string month, int year, int day, int hour, int minute); // Converts full date to hour

pair<double,double> altAndAziPair (); // Creates pair of alitutude and azimuth

bool isLeap (int year); // Bool check for leap year

vector <pair<double, double>> viewFinder (pair <double, double> centerPt); // function that returns the coordinates of the viewing window

vector <pair<double, double>> constellationCoordinates (); // function that stores the coordinates of all the constellations

void printConstellation (vector <pair<double,double>> constellationCoordinates, vector <pair<double,double>> window); // function to print the constellations

string constellationNamer (int index); // funciton to name all the constellations

void constellationOutputter (int index); // function to output the images of the constellations

bool restart(); // function to ask for restart options