#include "std_lib_facilities.h"
using namespace std;

int main() {
	double a;
	string unit;
	vector <double> units;

	while (unit != "|") {
		cout << "\n\nWrite a unit (cm, m, ft, in or | to terminate): ";
		cin >> unit;		
		if ( unit == "|") {
			return 0;
		}
		
		cout << "Write a number in " << unit << " you want to convert into meter: ";
		cin >> a;

		if ( unit == "cm" ) {  
    			a = a/100;
			units.push_back(a);			   	
    		}
		
		else if ( unit == "m" ) {
			units.push_back(a);		
		}	
		else if ( unit == "ft" ) {
			a = a/3.28;
			units.push_back(a);		
		}	
		else if ( unit == "in" ) {
			a = a/39.37;
			units.push_back(a);		
		} 
		
		else {
			cout << "Invalid unit.\n\n"; 
			return 0;		
		}

		sort(units); //Rendezés
			cout << string(50, '\n'); 
			cout << "Your number after exchange: " << a << endl; 
			cout << "Smallest number so far: " << units.front() << endl; 
			cout << "Largest number so far: " << units.back() << endl;
			cout << "Total numbers: " << units.size() << endl;
			cout << "Numbers in increasing order: ";
		
		for (int i = 0; i < units.size(); i++) {
			cout << units[i] << ", "; 
		}

	}
}