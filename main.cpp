//Bailee Johnstone
//1/30/2017

#include <iostream>

using namespace std;

int gcd (int a, int b);

int main(){

	 //Variables
	 int a = 0;
	 int b = 0;
	 int d = 0;

	 //Grab a and b from user
	 cout << "Please enter two whole numbers: " << endl;
	 cin >> a >> b;
	 cin.ignore(100, '\n');

	 d = gcd(a, b); 

	 cout << "The greatest common divisor of " << a << " and " << b << " is: " << d << endl;

	 return 0;
}

int gcd (int a, int b){

	 if(!b)
		  return a;

	 gcd(b, a%b); 

}
