// Lucas Weakland
//  main.cpp
//  Program Assignment 1
//
//  Created by Lucas Weakland on 3/8/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    double t;
    double rh1;
    double rh2;
    
    cout << "what is the temperature and relative humidity";
    cin >> t;
    cin >> rh1;
    rh2 = rh1/100;
    double hi = 0.5 * (t + 61 + ((t-61) * 1.2)) + (rh2 * .094);
    cout.setf(ios::fixed);
    cout.precision(3);
    
    if (hi >= 80){
        double result = -42.379 + 2.04901523 * t + 10.14333127 * rh2 - .22475541 * t * rh2 - .00683783 * t * t - .05481717 * rh2 *rh2 + .00122874 * t * t * rh2 + .00085282 * t * rh2 * rh2 - .00000199 * t * t * rh2 * rh2;
        
        cout << "Heat index was over 80, different equation used.\n";
        cout << result << endl;
    }
    else {
        cout << "\n" << hi;
    }
    double wc = 35.74 + 0.6215 * t - 35.75 + 0.16 + 0.4275 * t + 0.16;
    cout << "what is the windchill today? We will tell you what are the frostbite times.";
    cin >> wc;
    
    if (wc >= -19){
        cout << "Frostbite time is 30 minutes or less";
        
    }
    else if(wc >= -48){
        cout << "Frostbite time is 5 minutes or less";
        cout << "\n" << wc;
        
    }
    return 0;
}
