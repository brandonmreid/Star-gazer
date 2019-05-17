/****************************************************
 * File: Constellation.cpp
 * Description: functions to output a certain constellation depending 
 *              on the funcation name. 
 * Made by Elizabeth Ventura
 * *****************/
#include "Stars.1.h"
#include <iostream>
#include <utility>
#include <string>

// const int ROW = 24;
// const int COL = 40;
using namespace std;

void Stars::CanisMajor0() {      //// done: just try to find a way to do the lines
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[2][20] = '*';
    stars[4][16] = '*';
    stars[6][20] = '*';
    stars[5][24] = '*';
    stars[7][34] = '*';
    stars[11][20] = '*';
    stars[14][13] = '*';
    stars[13][25] = '*';
    stars[14][35] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Eridanius1() {               //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            
            stars[row][col] = ' ';
        }
    }
    
    stars[2][9] = '*';
    stars[2][11] = '*';
    stars[3][5] = '*';
    stars[3][17] = '*';
    stars[5][19] = '*';
    stars[4][21] = '*';
    stars[3][22] = '*';
    stars[3][24] = '*';
    stars[3][28] = '*';
    stars[3][32] = '*';
    stars[5][35] = '*';
    stars[7][34] = '*';
    stars[8][33] = '*';
    stars[7][30] = '*';
    stars[7][27] = '*';
    stars[8][24] = '*';
    stars[8][21] = '*';
    stars[9][20] = '*'; //middle point
    stars[9][19] = '*';
    stars[11][15] = '*';
    stars[12][17] = '*';
    stars[12][18] = '*';
    stars[13][22] = '*';
    stars[14][24] = '*';
    stars[15][27] = '*';
    stars[14][30] = '*';
    stars[14][32] = '*';
    stars[15][33] = '*';
    stars[17][35] = '*';
    stars[19][38] = '*';
    stars[22][39] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Gemini2() {  //done 

    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            
            stars[row][col] = ' ';
        }
    }
    
    stars[6][5] = '*';
    stars[6][7] = '*';
    stars[7][12] = '*';
    stars[2][16] = '*';
    stars[9][27] = '*';
    stars[12][34] = '*';
    stars[10][35] = '*';
    stars[9][37] = '*';
    stars[8][39] = '*';
    stars[9][9] = '*';
    stars[10][6] = '*';
    stars[9][2] = '*';
    stars[12][4] = '*';
    stars[13][13] = '*';
    stars[17][15] = '*';
    stars[20][27] = '*';
    stars[16][30] = '*';
    stars[13][21] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }    
}

void Stars::Orion3() {       //done 

    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[2][11] = '*';
    stars[2][16] = '*';
    stars[5][9] = '*';
    stars[5][11] = '*';
    stars[7][13] = '*';
    stars[9][16] = '*';
    stars[7][22] = '*';
    stars[9][26] = '*';
    stars[8][37] = '*';
    stars[7][36] = '*';
    stars[4][33] = '*';
    stars[3][35] = '*';
    stars[9][36] = '*';
    stars[11][34] = '*';
    stars[12][33] = '*';
    stars[14][25] = '*';
    stars[15][24] = '*';
    stars[16][21] = '*';
    stars[16][29] = '*';
    stars[19][33] = '*';
    stars[21][20] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Tarus4() {   //done :)
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[2][6] = '*';
    stars[6][2] = '*';
    stars[4][12] = '*';
    stars[6][16] = '*';
    stars[9][15] = '*';
    stars[8][20] = '*';
    stars[7][18] = '*';
    stars[9][17] = '*';
    stars[10][25] = '*';
    stars[9][35] = '*';
    stars[12][38] = '*';
    stars[13][39] = '*';
    stars[13][20] = '*';
    stars[15][26] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}
void Stars::Bootes5() {      //done :)
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[2][21] = '*';
    stars[2][24] = '*';
    stars[7][17] = '*';
    stars[8][23] = '*';
    stars[5][25] = '*';
    stars[11][13] = '*';
    stars[15][20] = '*';
    stars[14][24] = '*';
    stars[18][26] = '*';
    stars[22][14] = '*';
    stars[19][33] = '*';
    stars[20][36] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}
void Stars::Cancer6() {
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[2][20] = '*';
    stars[7][22] = '*';
    stars[11][21] = '*';
    stars[17][15] = '*';
    stars[17][29] = '*';
    stars[21][34] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Leo7() {     //done :) 
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[2][39] = '*';
    stars[3][29] = '*';
    stars[5][37] = '*';
    stars[5][31] = '*';
    stars[6][23] = '*';
    stars[11][30] = '*';
    stars[9][21] = '*';
    stars[16][39] = '*';
    stars[15][29] = '*';
    stars[9][8] = '*';
    stars[12][1] = '*';
    stars[12][8] = '*';
    stars[15][6] = '*';
    stars[18][7] = '*';
    stars[16][19] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Virgo8() {   //done :)
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[4][34] = '*';
    stars[5][39] = '*';
    stars[8][38] = '*';
    stars[9][31] = '*';
    stars[10][25] = '*';
    stars[7][21] = '*';
    stars[4][22] = '*';
    stars[12][20] = '*';
    stars[15][17] = '*';
    stars[10][14] = '*';
    stars[9][9] = '*';
    stars[9][1] = '*';
    stars[13][7] = '*';
    stars[13][2] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Aquila9() {      //done 
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[3][31] = '*';
    stars[4][29] = '*';
    stars[12][20] = '*';    //middle point
    stars[20][29] = '*';
    stars[18][17] = '*';
    stars[17][5] = '*';
    stars[15][10] = '*';
    stars[5][9] = '*';
    stars[6][8] = '*';
    stars[7][7] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Sagistarius10() {     //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[5][36] = '*';
    stars[9][30] = '*';
    stars[10][24] = '*';
    stars[12][34] = '*';
    stars[12][39] = '*';
    stars[15][33] = '*';
    stars[16][35] = '*';
    stars[12][19] = '*';
    stars[10][18] = '*';
    stars[9][21] = '*';
    stars[6][21] = '*';
    stars[5][16] = '*';
    stars[4][15] = '*';
    stars[2][12] = '*';
    stars[10][3] = '*';
    stars[15][4] = '*';
    stars[18][7] = '*';
    stars[17][13] = '*';
    stars[19][13] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Scorpius11() {    //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[3][35] = '*';
    stars[4][37] = '*';
    stars[6][38] = '*';
    stars[9][38] = '*';
    stars[12][39] = '*';
    stars[8][30] = '*';
    stars[9][27] = '*';
    stars[10][26] = '*';
    stars[14][22] = '*';
    stars[16][21] = '*';
    stars[19][20] = '*';
    stars[20][16] = '*';
    stars[20][9] = '*';
    stars[18][5] = '*';
    stars[17][6] = '*';
    stars[16][9] = '*';
    stars[16][10] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Capricornus12() {
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[4][37] = '*';
    stars[4][39] = '*';
    stars[7][37] = '*';
    stars[17][26] = '*';
    stars[19][23] = '*';
    stars[15][9] = '*';
    stars[9][1] = '*';
    stars[10][5] = '*';
    stars[10][10] = '*';
    stars[10][18] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}


void Stars::Pegasus13() {     //done: coordinates based on pic 11:02pm at 24 degrees
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[4][33] = '*';
    stars[6][26] = '*';
    stars[8][21] = '*';
    stars[9][25] = '*';
    stars[10][26] = '*';
    stars[9][33] = '*';
    stars[8][39] = '*';
    stars[14][21] = '*';
    stars[16][26] = '*';
    stars[18][33] = '*';
    stars[16][39] = '*';
    stars[13][5] = '*';
    stars[7][8] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Pisces14() {      //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[20][1] = '*';
    stars[19][5] = '*';
    stars[19][7] = '*';
    stars[18][14] = '*';
    stars[19][19] = '*';
    stars[19][29] = '*';
    stars[20][33] = '*';
    stars[22][33] = '*';
    stars[22][38] = '*';
    stars[20][39] = '*';
    stars[19][36] = '*';
    stars[16][4] = '*';
    stars[11][7] = '*';
    stars[5][12] = '*';
    stars[3][9] = '*';
    stars[1][12] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::UrsaMinor15() {       //done 
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
        }
    }
    
    stars[1][23] = '*';
    stars[4][20] = '*';
    stars[8][18] = '*';
    stars[13][19] = '*';
    stars[14][13] = '*';
    stars[19][19] ='*';
    stars[17][24] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::UrsaMajor16() {       //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[3][39] = '*';
    stars[3][31] = '*';
    stars[4][21] = '*';
    stars[6][30] = '*';
    stars[7][21] = '*';
    stars[8][14] = '*';
    stars[6][12] = '*';
    stars[5][9] = '*';
    stars[4][6] = '*';
    stars[5][1] = '*';
    stars[12][14] = '*';
    stars[18][17] = '*';
    stars[19][17] = '*';
    stars[14][20] = '*';
    stars[15][29] = '*';
    stars[14][30] = '*';
    stars[9][33] = '*';
    stars[10][38] = '*';
    stars[9][39] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Hercules17() {     //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[2][10] = '*';
    stars[7][6] = '*';
    stars[8][14] = '*';
    stars[9][16] = '*';
    stars[13][20] = '*';
    stars[12][26] = '*';
    stars[7][25] = '*';
    stars[5][26] = '*';
    stars[2][28] = '*';
    stars[3][31] = '*';
    stars[4][35] = '*';
    stars[17][16] = '*';
    stars[16][12] = '*';
    stars[15][8] = '*';
    stars[14][6] = '*';
    stars[15][3] = '*';
    stars[19][28] = '*';
    stars[20][30] = '*';
    stars[23][30] = '*';
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::Cygnus18() {   //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[2][29] = '*';
    stars[3][26] = '*';
    stars[8][26] = '*';
    stars[12][20] = '*';    //middle point
    stars[16][11] = '*';
    stars[17][2] = '*';
    stars[7][17] = '*';
    stars[8][11] = '*';
    stars[11][8] = '*';
    stars[16][29] = '*';
    stars[20][38] = '*';
    
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::Pavo19() { //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[11][3] = '*';
    stars[1][11] = '*';
    stars[10][12] = '*';
    stars[9][19] = '*';
    stars[5][28] = '*';
    stars[5][34] = '*';
    stars[8][37] = '*';
    stars[9][39] = '*';
    stars[10][27] = '*';
    stars[17][18] = '*';
    stars[16][27] = '*';
    
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::Centaurus20() {    //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[1][12] = '*';
    stars[3][9] = '*';
    stars[5][16] = '*';
    stars[6][8] = '*';
    stars[7][4] = '*';
    stars[8][19] = '*';
    stars[5][19] = '*';
    stars[4][19] = '*';
    stars[3][24] = '*';
    stars[1][26] = '*';
    stars[3][33] = '*';
    stars[10][30] = '*';
    stars[11][31] = '*';
    stars[13][33] = '*';
    stars[12][35] = '*';
    stars[19][37] = '*';
    stars[16][39] = '*';
    stars[12][22] = '*';
    stars[16][19] = '*';
    stars[17][12] = '*';
    
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::CanesVenatici21() {    //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[9][9] = '*';
    stars[10][11] = '*';
    stars[12][20] = '*';
    stars[8][30] = '*';
    
    
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::Lynx22() {     //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[3][37] = '*';
    stars[5][31] = '*';
    stars[11][27] = '*';
    stars[10][17] = '*';
    stars[14][13] = '*';
    stars[15][5] = '*';
    stars[19][2] = '*';
    stars[21][1] = '*';
    
    
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::Auriga23() {   //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[3][13] = '*';
    stars[8][25] = '*';
    stars[9][9] = '*';
    stars[15][7] = '*';
    stars[22][20] = '*';
    stars[16][30] = '*';
    stars[9][29] = '*';
    stars[11][29] = '*';
    
    
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::Hydra24() {    //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[2][38] = '*';
    stars[2][39] = '*';
    stars[3][38] = '*';
    stars[3][39] = '*';
    stars[2][37] = '*';
    stars[4][34] = '*';
    stars[5][29] = '*';
    stars[8][30] = '*';
    stars[10][25] = '*';
    stars[9][24] = '*';
    stars[8][22] = '*';
    stars[10][19] = '*';
    stars[9][15] = '*';
    stars[10][14] = '*';
    stars[12][12] = '*';
    stars[16][9] = '*';
    stars[17][6] = '*';
    stars[15][1] = '*';
    
    
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::Vela25() {     //done
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[5][20] = '*';
    stars[7][10] = '*';
    stars[13][4] = '*';
    stars[16][17] = '*';
    stars[17][25] = '*';
    stars[17][33] = '*';
    stars[11][39] = '*';
    stars[8][28] = '*';
    
    
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
    
}

void Stars::Lupus26() {
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    
    stars[2][20] = '*';
    stars[3][1] = '*';
    stars[4][4] = '*';
    stars[6][13] = '*';
    stars[6][17] = '*';
    stars[8][28] = '*';
    stars[9][18] = '*';
    stars[12][36] = '*';
    stars[13][20] = '*';
    stars[16][19] = '*';

    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}

void Stars::Ophiuchus27() {
    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
        
            stars[row][col] = ' ';
            
        }
    }
    stars[2][37] = '*';
    stars[3][35] = '*';
    stars[3][38] = '*';
    stars[5][15] = '*';
    stars[6][23] = '*';
    stars[6][39] = '*';
    stars[8][13] = '*';
    stars[8][1] = '*';
    stars[8][37] = '*';
    stars[10][6] = '*';
    stars[11][37] = '*';
    stars[11][32] = '*';
    stars[12][12] = '*';
    stars[13][28] = '*';
    stars[15][20] = '*';

    for(int row = 0; row < 24; row++) {
        for(int col = 0; col < 40; col++) {
            cout << stars[row][col];
        }
        cout << endl;
    }
}