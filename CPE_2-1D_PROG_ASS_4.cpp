//Created By: Senon Jayson S. Macatangay Jr.
// Studen number: 2017-00433-MN-0
#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	double d;
	double c;
	double a;
	
	cout<<"A car starts from the rest and accelerates uniformly over a time of 5.21seconds" << endl ;
	
	cout<<"For the Distance of (Input Value for distance)" << endl; 
	cin>> d;
	
	cout<<"\n You have input " << d << " For Distance "<<endl;
	
	// d = vi*t + .05*a*t^2
	// Distance (user) = 0m/s * 5.21sec + 0.5*a*5.21s^2
	
	c = (5.21*5.21)*0.5;
	a = d/c ;
	
	cout<<" \n \n The accelaration  of the car is = " << a <<" m/s^2" <<endl;

	 return 0;
	
}
