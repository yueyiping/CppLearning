//carrots.cpp --food processing program
//uses and displays a variable

#include <iostream>

int main()
{
	using namespace std;
	int carrots;				//declare an integer 

	carrots = 25;				//assign a value to the variable
	cout << "I have ";
	cout << carrots;			//display the value of the variable
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;		//modify the value of the variable
	cout << "Cruch, cruch. Now I have " << carrots << " carrots." << endl;
	cin.get();
	return 0;
}