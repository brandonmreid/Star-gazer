/***************
 * Made by Eric Walsh
 * ***************/
#include "Algorithm.h"
#include <deque>
#include <utility>
#include <cmath>
#include <iostream>
#include <iomanip>
const bool DEBUG = false;

//the main algorithm function converts 
using namespace std;
//const int COl_MAX = 24;
//const int ROW_MAX = 180;

//converts horizontal coordinates to cartesian coordinates in xyz where alt is the altitude angle and azi is Azimuth angle
void horizontalToCart(double alt, double azi, double &x, double &y, double &z){
    //convertion of Horizontal coordinates to cartesian coordinates
    alt = alt * (M_PI / 180);
    azi = azi * (M_PI / 180);
    z = sin(alt);
    x = cos(alt) * cos(azi);
    y = -1 * cos(alt) * sin(azi);
}


//convert the date to a julian date;
double julian(double year, double hours){
    double leap = 0;
    double notLeap, dayFract, dayWhole;
    double years, days, hoursLeft;
    years = year + 4712;//years is current year (AD or CE) 4713 is the start of the julian calender 1 is 0 AD/CE
    if(DEBUG){
        clog << "DEBUG: years has a value of: " << years << endl;
    }
    for(int i = -4713; i <= year; i++){ //counts number of leap years
        if(i < 1582){//before the switch to gregorian calenders, leap years were every 4 years
            if(i % 4 == 0){
                leap++;
               /* if(DEBUG){
                    clog <<"DEBUG: " << i << " is a leap year." << endl;
                } */
            }
        }else{ //after the switch the gregorian calenders, leap years weren't counted on centries unless it was divisible by 0
            if(i % 4 == 0){
                if(i % 100 == 0){
                    if(DEBUG){
                        clog << "DEBUG: The year is " << i;
                    }
                    if(i % 400 == 0){
                        leap++;
                        if(DEBUG){
                            clog << ", and its a leap year." << endl;
                        }
                    } else {
                        if(DEBUG){
                            clog << endl;
                        }
                    }
                } else {
                    leap++;
                    /* if(DEBUG){
                        clog << "DEBUG: " << i << " is a leap year." << endl;
                    } */
                }
                
            }
        }
    }
    notLeap = years - leap;
    if(DEBUG){
        clog << "DEBUG: There are " << leap << " leap years and " << notLeap << " non leap years totalling " << leap + notLeap << " years." << endl;
    }
    days = (leap * 366) + (notLeap * 365) - 10;
    if(DEBUG){
        clog << "DEBUG: days of leap years is: " << leap * 366 << ". Days of non leap years is: " << notLeap * 365 <<"." << endl
             << "DEBUG: The current value of Days is: " << days << endl;
    }
    dayFract = modf((hours / 24), &dayWhole);
    if(DEBUG){
        clog << "DEBUG: The value of dayFract is: " << dayFract << " and the value of dayWhole is: " << dayWhole << endl;
    }
    days += dayWhole;
    hoursLeft = dayFract * 24;//counts the left over hours that aren't days
    
    if(DEBUG){
        clog <<fixed << setprecision(6) << "DEBUG: Days has a value of " << days << " hoursLeft has a value of " << hoursLeft  << endl;
    }
    //days += (seconds / 86400);
    days += hoursLeft/24;
    days -= 1;
    days += 0.5;
    if(DEBUG){
        clog << "DEBUG: the julian date is: " << days << endl;
    }
    return days;
}

//converts the hours and year to GMST (Greenwich Mean Sidereal Time)
double GMST(int year, double hours){
    //JD is the julian date (days since jan 1st, 4713 BC) and D is days since Jan 1st 2000
    double D, GMST, temp, JD0;
    double hoursLeft;
    double JD = julian(year, hours);
    JD0 = floor(JD) + 0.5;
    D = (JD - 2451545.0);
    double D0 = JD0 - 2451545.0; // days since Jan 1st 2000 at midnight
    double T = D/36525; // centuries since Jan 1st 2000 AD
    hoursLeft = (JD - JD0) *24;
    if(DEBUG){
        clog << fixed << setprecision(10) << "DEBUG: The GMST in days is: " << D << endl
             << "DEBUG: The value of JD is: " << JD << endl
             << "DEBUG: The value of JD0 is: " << JD0 << " and the value of D0 " << D0 << endl;
    } //debugs
    temp =  6.697374558 + (0.06570982441908*D0) + (1.00273790935*hoursLeft) + (0.000026 * pow(T, 2));
    if(DEBUG){
        clog << fixed << "DEBUG: D has a value of: " << D << endl
             << "DEBUG: temp has a value of: "  << temp << endl
             << "DEBUG: hours left has a value of: " << hoursLeft << endl;
    } //debugs
    GMST = fmod(temp, 24);
    if(DEBUG){
        clog << "DEBUG: GMST has a value of: " << GMST << endl;
    }
    return GMST;
}



//converts geographic coordinates to celestial coooriantes (right ascention and deckination) and retruns a deque with the names of all the constellations
//latAndLongpair has lat as the first and long as the second
//alt and azi pair has altitude as the first and azimuth as the second
pair<double,double> algorithm(double hours, pair<double, double> latAndLongPair, pair<double, double> altAndAziPair, int year){
    //declaraton of variables
    pair<double,double> raAndDecPair;
    double phi = latAndLongPair.first * (M_PI / 180); // latitude
    double hourAngle; //hour angle of the celestial object (used ro find alpha)
    double alpha, sigma, temp;
    double a = altAndAziPair.first  * (M_PI / 180); // altitude
    double A = altAndAziPair.second * (M_PI / 180); // azimuth
    double Long = latAndLongPair.second * (M_PI / 180); // longitude
    double Time = (GMST(year, hours) * 15) * (M_PI / 180); // time is in local sidereal time
   
    
    
    temp = ((sin(a)*sin(phi)) + (cos(a) * cos(phi) * cos(A))); //converts the altitude, azimuth, and latitude to sigma
    sigma = asin(temp);
    hourAngle = -1 * (sin(A) * cos(a)) / cos(sigma); // converts altiutde, azimuth, and sigma to the hourangle
    
    
    alpha = (Time - Long) - asin(hourAngle); // converts the time, longitude and the hour angle to alpha from the equation a = t - H where t = GST - longitude west
    if(DEBUG){
        clog << fixed << setprecision(10) << "DEBUG: hourAngle has a value of: " << hourAngle  << endl
             << "DEBUG: temp has a value of: " << temp  << " and the arcsine of temp is: " << asin(temp)  << endl
             << "DEBUG: sigma then has a value of: " << sigma * (180 / M_PI) << endl
             << "DEBUG: alpha has a value of: " << alpha << " which means that the LST is: " << (Time - Long) * (180 / M_PI) << " and the hour angle is " << hourAngle << " and the arccos of the hour angle is: " << asin(hourAngle) * (180 / M_PI) << endl;
        //clog << "DEBUG: alpha has a value of: " << alpha << " and sigma has a value of: " << sigma  * (180 / M_PI)<< endl;
    } // debugs
   
    raAndDecPair.first = (alpha * (180 / M_PI)) / 15; //converts alpha into hours from 0 - 24
    raAndDecPair.second = sigma * (180 / M_PI); // converts sigma to degrees
    if(DEBUG){
        clog << "DEBUG: The final point is: (" << raAndDecPair.first << "," << raAndDecPair.second << ")." << endl;
    } // debugs
    
    return raAndDecPair;
    
}


