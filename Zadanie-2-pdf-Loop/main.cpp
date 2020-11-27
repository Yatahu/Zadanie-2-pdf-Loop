//
//  main.cpp
//  Zadanie-2-pdf-Loop
//
//  Created by Wojciech Szyjka on 26/11/2020.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


int main() {
    double x ;
    double y ;
    double z ;
    
    int s = 10 ;
    int d = 100 ;
    
    x = s*(s+1)*(s*2+1) / 6  ;
    y = d *(d+1)*(d*2+1) / 6  ;

    z = y - x ;
    
    cout << "Suma kwadratów liczb równa się " << z << endl ;
    return 0 ;
    
}

