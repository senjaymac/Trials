// Created By: Senon Jayson Silvestre, Macatangay Jr. BS CoE- 2-1D

#include <iostream>

using namespace std;
int main() 
{	
	char FirstName[50];
	char LastName[50];
	int Year;
	int Month;
	int Day;
	
	// C = Current Y year M month D day
	int CY;
	int CM;
	int CD;
	
	// unknowns and computers
	int PY;
	int PM;
	int PD;
	int total;
	int totalS;
	char answer;
	int reducer;
	int totalR;
	int total1;
	
	//introduction
	cout<<("Welcome to Lifetime Counter")<<endl;
	
	//Input Name
	cout<<("Please Enter Your First Name")<<endl;
	cin>> FirstName;
	cout<<("Please Enter Your Last Name")<<endl;
	cin>> LastName;
	
	//input Birth Year, Month and Date
	cout<<("Enter Your Birth Year")<<endl;
	cin>> Year;
	cout<<("Enter Your Birth Month (01 = January, 02 = February. 03 = March .... 1 ~ 12)")<<endl;
	cin>> Month;
	cout<<("Enter Your Birth Day")<<endl;
	cin>> Day;
	
	// Input Currrent Month and Date
	cout<<("Enter Current Year")<<endl;
	cin>> CY;
	cout<<("Enter Current Month (01 = January, 02 = February. 03 = March .... 1 ~ 12)")<<endl;
	cin>> CM;
	cout<<("Enter Current Day")<<endl;
	cin>> CD;
	cout<<("Is your Birthday Over? ( Y = yes N = No )")<<endl;
	cin>> answer;
	
	//1 year = 365 days, 1 month = 30 days 
	
	PY = CY - Year;
	PM = CM - Month;
	PD = CD - Day;
	total = (PY * 365) + (PM * 30) + Day;
	totalS = total * 86400;
	reducer = PY - 1;
    totalR =  (reducer * 365) + (PM * 30) + Day;
    total1 = totalR * 86400;
	//output
	if (answer=='y')
	{
	cout<<"Hello " <<FirstName <<" "  <<LastName <<endl;
	cout<<"Your Birthday: " <<Day <<" "  <<Month <<" " <<Year <<endl;
	cout<<("The Current Date: ") <<CM <<" " <<CD <<" " <<CY <<endl;
	cout<<"Approximately You Exist " <<total <<" Days Since You're Born."<<endl; 
	cout<<"And You somehow exist around: " << totalS <<" Seconds"<<endl;
    }
    else if (answer=='n'){
    	cout<<"Hello " <<FirstName <<" "  <<LastName <<endl;
    	cout<<"Your Birthday: " <<Day <<" "  <<Month <<" " <<Year <<endl;
	    cout<<("The Current Date: ") <<CM <<" " <<CD <<" " <<CY <<endl;
	    cout<<"Approximately You Exist " <<totalR <<" Days Since You're Born."<<endl; 
	    cout<<"And You somehow exist around: " << total1 <<" Seconds"<<endl;
	}
	return 0;
}

	
