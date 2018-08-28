//Created By: Senon Jayson S. Macatangay Jr.
// Studen number: 2017-00433-MN-0
#include <iostream>
using namespace std;
int main ()
{
	string a;
	string b;
	string c;
	string d;
	string e;
	int score = 0;
	
	cout <<"\t Fill in the Blanks Game \n\n"<<endl;
	
	{
		//problem 1
		cout << " Problem 1: \n\n\n";
		cout << " Input The Correct Mathematical Symbol  \n\n\n";
		cout << " 10 _ 10 = 100 \n";
		
		cout << " Your answer:";
		cin  >> a;
			
		if (a=="*")
		{
			cout << " Well Done! \n\n\n";
			score+=5;
		}
		else
		{
			cout << " Wrong! \n\n\n";
		}
		
		
		//problem 2
				cout << " Problem 2: \n\n\n";
		cout << " Input The Correct Mathematical Symbol  \n\n\n";
		cout << " 10 _ 50 = 60  \n";
		
		cout << " Your answer:";
		cin  >> b;
			
		if (b=="+")
		{
			cout << " Well Done! \n\n\n";
			score+=5;
		}
		else
		{
			cout << " Wrong! \n\n\n";
		}
		
		
		//problem 3
				cout << " Problem 3: \n\n\n";
		cout << " Input The Correct Mathematical Symbol \n\n\n";
		cout << " 500 _ 5 = 100  \n";
		
		cout << " Your answer:";
		cin  >> c;
			
		if (c=="/")
		{
			cout << " Well Done! \n\n\n";
			score+=5;
		}
		else
		{
			cout << " Wrong! \n\n\n";
		}
		
		
        //problem 4
				cout << " Problem 4: \n\n\n";
		cout << " Input The Correct Mathematical Symbol  \n\n\n";
		cout << " 26 _ 6 = 20  \n";
		
		cout << " Your answer:";
		cin  >> d;
			
		if (d=="-")
		{
			cout << " Well Done! \n\n\n";
			score+=5;
		}
		else
		{
			cout << " Wrong! \n\n\n";
		}
		
		//problem 5
				cout << " Problem 4: \n\n\n";
		cout << " Input The Correct Mathematical Symbol  \n\n\n";
		cout << " 26 _ 6 = 26  \n";
		
		cout << " Your answer:";
		cin  >> e;
			
		if (e=="+")
		{
			cout << " Well Done! \n\n\n";
			score+=5;
		}
		else
		{
			cout << " Wrong!  \n\n\n";
		}
		//Raw Score of the user
		cout << " Your score is:" << score <<endl ;	
		cout << " \n\n";
			}
	
	return 0;
}
		
