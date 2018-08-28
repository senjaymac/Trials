// Created By: Senon Jayson S.Macatangay Jr. Student number: 00433-MN-0
#include <iostream>
using namespace std;
int main()
{
	char a[50];
	char b[50];
	char c[1];
	int weight;
	int height;
	int bmi;
	float feet;
	float inches;
	
	cout<<("What's Your Name?")<<endl;
	cout<<("Enter First Name:")<<endl;
	cin >> a;
	cout<<("Enter Last Name:")<<endl;
	cin>> b;
	cout<<("Enter Midlle Initial:")<<endl;
	cin>> c;
	
	cout<<"Feet:"<<endl;
    cin>> feet;
    
    cout<<"Inches:"<<endl;
    cin>> inches;
    
    cout<<("Enter Your Weight in pounds:")<<endl;
    cin>> weight;
    
    cout<<"\n\n"<< a <<" "<< b << "." << c <<
    ".\n\n";
    
    height = (feet * 12) + inches;
	bmi= (weight*703) / (height * height);
	
	cout<<"Your BMI: "<<bmi<<endl; 

	
	if (bmi<=18)
	{
		cout<<"You're Underweight "<<a;
	}
	else if (bmi<=24) 
	{
		cout <<"You're In healthy Weight " << a;
    }
		else if (bmi<=25)
	{
		cout <<"You're Overweight " << a;
    }
		else if (bmi<=29)
	{
		cout << "Watch out! You're Obese! " << a;
    }

	return 0;
}
