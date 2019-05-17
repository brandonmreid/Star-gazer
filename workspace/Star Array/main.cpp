/**********************************
 * File: main.cpp
 * Description: testing file
 * **************************/

#include <iostream>
// #include "Stars.h"
using namespace std;

int main() {
    
    
    int ROW = 24;
    int COL = 40;
    
    char stars[ROW][COL];
    
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
    
    
    
  
    return 0;
}