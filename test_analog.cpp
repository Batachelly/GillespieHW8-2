/* File name: currencyApp.cpp
 *
 *
 *   Written by Josh Gillepie
 *
 *   An application to exercise the AnalogIn class.
 */


#include <iostream>
#include <string>
#include <iomanip>
#include "AnalogIn.h"

using namespace std;


int main(){
	AnalogIn AIN(0);
	cout << "Using AIN" << AIN.getNumber() << " to read analog value." << std::endl;
	cout << "ADC value is: " << AIN.readADCsample() << endl;
	cout << endl;
	cout << endl;
}

