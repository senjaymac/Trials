#include <iostream>
using namespace std;
int main(){
	int a = 5;
	int b = 7;
	int c = 11 ;
	int d = 12;
	int p = (a+b) > (b-c);
	int i = !(a*c > c++);
	int u = (d+ c + b ) >= (b*c) || (a*b) <= (d+c+b);
	cout<< p <<endl;
	cout<< i <<endl;
	cout<< u <<endl;
	return 0;
 }
