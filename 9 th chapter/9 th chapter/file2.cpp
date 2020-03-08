/*
// 1-3. file2.cpp - contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "head.h"		// structure template, function prototypes
// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance =
		sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;		// returns a polar structurn
}
// show polar coordinates, converting angle to degrees
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degree\n";
}
*/

/*
// 5-6. support.cpp -- use external varibale
// compile with external.cpp
#include <iostream>
extern double warming;		// use warming from another file
// function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt)		// modifies global variable
{
	extern double warming;	// optional redeclaration
	warming += dt;			// uses global warming
	cout << "Updating global warming to " << warming;
	cout << " degree.\n";
}
void local()	// uses local vatiable
{
	double warming = 0.8;	// new vatiable hides external one
	cout << "Local warming = " << warming << " degrees.\n";
	// Access global variable with the
	// scope resulution operator
	cout << "But global warming = " << ::warming;
	cout << " degrees.\n";
}
*/

/*
// 7-8. twofile2.cpp -- variables with external and internal linkage
#include <iostream>
extern int tom;		// tom defined elsewhere
static int dick = 10;	// overrides external dick
int harry = 200;		// external variable definition,
						// no conflict with twofile1 harry
void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the following addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}
*/

/*
// 11-13. namesp.cpp -- namespaces
#include <iostream>
#include "head.h"
namespace pers
{
	using std::cout;
	using std::cin;
	void getPerson(Person & rp)
	{
		cout << "Enter first name: ";
		cin >> rp.fname;
		cout << "Enter last name: ";
		cin >> rp.lname;
	}
	void showPerson(const Person & rp)
	{
		std::cout << rp.lname << ", " << rp.fname;
	}
}

namespace debts
{
	void getDebt(Debt & rd)
	{
		getPerson(rd.name);
		std::cout << "Enter debt: ";
		std::cin >> rd.amount;
	}
	void showDebt(const Debt & rd)
	{
		showPerson(rd.name);
		std::cout << ": $" << rd.amount << std::endl;
	}
	double sumDebts(const Debt ar[], int n)
	{
		double total = 0;
		for (int i = 0; i < n; i++)
			total += ar[i].amount;
		return total;
	}
}
*/

/*------------practise--------------*/
/*
#include <iostream>	// 1. golf.cpp
#include "head.h"
#include <cstring>
void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf & g)
{
	char name[Len];
	int hc;
	std::cout << "Enter name (empty line to quit):";
	std::cin.get(name, Len);
	while (!std::cin)     // if(strcmp(g.fullname, "")==0)
		return 0;
	std::cout << "Enter hc: ";
	(std::cin >> hc).get();
	setgolf(g, name, hc);
	return 1; ///////
}
void handicap(golf & g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf & g)
{
	std::cout << "Name: " << g.fullname << ", handicap: " << g.handicap << std::endl;
}
*/


#include <iostream> //4.
#include "head.h"

namespace SALES
{
	using std::cout;
	using std::cin;
	using std::endl;
	void setSales(Sales & a, const double ar[], int n)
	{
		double sum = 0;
		a.max = ar[0];
		a.min = ar[0];
		for (int i = 0; i < n; i++)
		{
			a.sales[i] = ar[i];
			sum += a.sales[i];
			if (ar[i] > a.max)
				a.max = ar[i];
			if (ar[i] < a.min)
				a.min = ar[i];
		}
		a.average = sum / n;
		for (int i = n; i < 4; i++)
			a.sales[i] = 0;	
	}
	void setSales(Sales & s)
	{
		double ar[QUARTERS];
		int i;
		cout << "Enter four double numbers: ";
		for (i = 0; i < QUARTERS; i++)
		{
			if (!(cin >> ar[i]))
				break;
		}
		if (i == 0)
		{ 
			cout << "None!\n";
			s.sales[0] = s.sales[1] = s.sales[2] = s.sales[3] = s.average = s.max = s.min = 0;
		}
		else
			setSales(s, ar, i);
	}
	void showSales(const Sales &s)
	{
		cout << "Sales: ";
		for (int i = 0; i < QUARTERS; i++)
			cout << s.sales[i] << " ";
		cout << "\nMax: " << s.max << endl;
		cout << "Min: " << s.min << endl;
		cout << "Average: " << s.average << endl;
	}
}
