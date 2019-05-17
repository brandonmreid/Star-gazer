#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <deque>
#include <string>
#include <vector>
#include <utility>


using namespace std;


//converts horizontal coordinates to cartesian coordinates in xyz
void horizontalToCart(double alt, double azi, double &x, double &y, double &z);

//converts the latitude to theta 
double latToTheta(double lat);

//converts the time to phi
double timeToPhi(int year, double hours, double longitude);

//converts the hours and year to GMST
double GMST(int year, double hours);

//convert the date to a julian date;
double julian(double year, double hours);

//converts geographic coordinates to celestial coooriantes
pair<double,double> algorithm(double hours, pair<double, double> latAndLongPair, pair<double, double> altAndAziPair, int year);




#endif