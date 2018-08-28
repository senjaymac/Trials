//Created By: Senon Jayson S. Macatangay Jr.
// Studen number: 2017-00433-MN-0

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	float D;
	float M1;
	float M2;
	float k = 6.667*pow(10,-8);
	float F;
	
	cout<< "Distance : "<<endl;
	cin>> D;
	cout<< "input Mass 1: " <<endl;
	cin>> M1;
	cout<< "input Mass 2: " <<endl;
	cin>> M2;
	
	float d = D*D;  
	F = k*((M1*M2)/d);
	
	cout << "Force : " << F ;
	return 0;
}
