/****************************************************
 * File: Constellation.h
 * Description: Array to output constalltions (try an array and as an image)
 * *****************/

#ifndef STARS_H
#define STARS_H
//#include <iostream>
using namespace std;

const int ROW = 24;
const int COL = 40;

class Stars {
    public:
        void CanisMajor0();
        void Eridanius1();
        void Gemini2();
        void Orion3();
        void Tarus4();
        void Bootes5();
        void Cancer6();
        void Leo7();
        void Virgo8();
        void Aquila9();
        void Sagistarius10();
        void Scorpius11();
        void Capricornus12();
        void Pegasus13();
        void Pisces14();
        void UrsaMinor15();
        void UrsaMajor16();
        void Hercules17();
        void Cygnus18();
        void Pavo19();
        void Centaurus20();
        void CanesVenatici21();
        void Lynx22();
        void Auriga23();
        void Hydra24();
        void Vela25();
        void Lupus26();
        
    private:
        char stars[ROW][COL];
        
};

#endif