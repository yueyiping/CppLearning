/*
// 1-3. coordin.h -- structure templates and function prototypes
#ifndef COORDIN_H_
#define COORDIN_H_
struct polar
{
	double distance;		// distance from origin
	double angle;			// direction from origin
};
struct rect
{
	double x;				// horizontal distance from origin
	double y;				// vertical distance from origin
};
// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif
*/


/*
// 11-13. namesp.h
#include <string>
// create the pers and debts namespaces
namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person &);
	void showPerson(const Person &);
}

namespace debts
{
	using namespace pers;
	struct Debt
	{
		Person name;				
		double amount;				
	};
	void getDebt(Debt &);
	void showDebt(const Debt &);
	double sumDebts(const Debt ar[], int n);
}
*/

/*------------practise--------------*/
/*
#ifndef __PRACTISE_1_	// 1. golf.h == for pe9-1.cpp
#define __PRACTISE_1_
const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};
void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);
#endif
*/


#ifndef __PRACTISE_4_	// 4. 
#define __PRACTISE_4_
namespace SALES
{ 
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	void setSales(Sales & a, const double ar[], int n);
	void setSales(Sales & s);
	void showSales(const Sales &s);
}
#endif

