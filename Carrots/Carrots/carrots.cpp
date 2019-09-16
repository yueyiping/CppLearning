/*//1.carrots.cpp --food processing program
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
}																*/

/*//2.getinfo.cpp --input and output
#include <iostream>

int main()
{
	using namespace std;

	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;						//C++ input
	cout << "Here are two more. ";
	carrots = carrots + 2;
	// the next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;
	cin.get();
	cin.get();
	return 0;
}																*/

/*//3.sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		 << " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	cin.get();
	cin.get();
	return 0;
}																*/


/*//4.outfunc.cpp --defining your own function
#include<iostream>
void simon(int);  //function prototype for a simon()

int main()
{
	using namespace std;

	simon(3);		//call the simon() function
	cout << "Pick an integar: ";
	int count;
	cin >> count;
	simon(count);	//call it again
	cout << "Done!" << endl;
	cin.get();
	cin.get();
	return 0;
}

void simon(int n)  //define the simon() function
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
					// void function don't need return statements
}																*/


/*//5.convert.cpp -- converts stone to pounds
#include  <iostream>
int stonetolb(int);		//function prototype

int main(void)
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	cin.get();
	cin.get();
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}																*/


//Practise 1-7.
/*//1
#include <iostream>
int main()
{
	std::cout << "Yiping Yue, address: China." << std::endl;
	std::cin.get();
	return 0;
}																*/

/*//2
#include <iostream>

int main()
{
	using namespace std;
	int _long;
	cout << "Please input long: ";
	cin >> _long;
	int yards;
	yards = _long * 220;
	cout << _long << " longs = " << yards << " yards." << endl;
	cin.get();
	cin.get();
	return 0;
}																*/

/*//3
#include <iostream>
using namespace std;
void func1(void);
void func2(void);

int main()
{
	func1();
	func1();
	func2();
	func2();
	cin.get();
	return 0;
}

void func1(void)
{
	cout << "Three blind mice" << endl;
}

void func2(void)
{
	cout << "See how they run" << endl;
}																*/

/*//4
#include <iostream>
int main()
{
	using namespace std;
	int age;
	cout << "Please input your age: ";
	cin >> age;
	int month;
	month = 12 * age;
	cout << "Month: " << month << "." << endl;
	cin.get();
	cin.get();
	return 0;
}																*/

//7
#include <iostream>
using namespace std;
void func(int,int);

int main()
{
	int hour;
	cout << "Enter the number of hours: ";
	cin >> hour;
	int minute;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	func(hour,minute);
	cin.get();
	cin.get();
	return 0;
}

void func(int hour, int minute)
{
	cout << "Time: " << hour << ":" << minute << endl;
}