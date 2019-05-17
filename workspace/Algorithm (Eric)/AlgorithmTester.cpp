#include "Algorithm.h"
#include <deque>
#include <utility>
#include <cmath>
#include <cassert>
#include <iostream>

using namespace std;

int main(){
    //declaration of variables
    double x, y, z;
    //testing horizontal to cart conversion function
   /* horizontalToCart(24, 46, x, y, z);
    cout << "When the altitude is 24 and the azimuth is 46 (in degrees):" << endl
         << "X = " << x << endl
         << "Y = " << y << endl
         << "Z = " << z << endl;
    
    cout << "The values should be: " << endl
         << "X = 0.634601998946" << endl
         << "Y = -0.657149607101" << endl
         << "Z = 0.406736643076" << endl;*/
         
    //converting latitude to theta
   /* cout << "if th latitude is -46, then the latToTheta function should return 136." << endl
         << "It actually returns: " << latToTheta(-46) << endl;*/
         
         
    //calculating the julian date
    cout << "if the date is January 27, 2017 at 5:45:54.6 pm, the julian date function should return 2457781.240208." << endl
         << "It actually returns: " << julian(2017, 641.9) << endl;
         
         
    cout << "if the date is January 1, 2000 at 08:00:00, the GMST date function should return: 6.79519916667." << endl
         << "It actually returns: " << GMST(2019, 8) << endl;
    //converting time and longitude to phi
    /*cout << "if its January 27, 2034, 5:45 pm at a longitude of 49 the, phi should equal 4.65147698949." << endl
         << "Phi actually equals: " << timeToPhi(2034, 641.765166667, 49) << endl;*/
         
    //test the algorithm as a whole
    pair<double, double> test;
    test.first = -46;
    test.second = 89;
    pair<double,double> horizontal;
    horizontal.first = 20;
    horizontal.second = 270;
    pair<double,double> returnValue;
    returnValue = algorithm(8, test, horizontal, 2019);
    cout << "The algorithm function, when its January 27, 2017, at 5:45:54 pm, at a lat and long of -46,89 and when looking at the sky at 20, 270 (in horizontal coordinates), gives: " << endl
         << "Right ascention of: " << returnValue.first << " and a declination of: " << returnValue.second << endl;
         
    
}
