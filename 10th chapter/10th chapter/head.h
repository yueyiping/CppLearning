/*
// 1. stock0.h -- Stock class interface
// vesion 00
#ifndef STOCK00_H_
#define STOCKOO_H_
#include <string>
class Stock		// class declaration
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};		// note semicolon at the end
#endif
*/

/*
// 4. stock10.h -- Stock class declaration with constructors, destructor added
#ifndef STOCK10_H_
#define STOCK1O_H_
#include <string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
// two constructors
	Stock();			// default constructor
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();			// noisy destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
#endif
*/

/*
// 7. stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK2O_H_
#include <string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();			// default constructor
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();			// do-nothing destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & a) const;
};
#endif
*/

/*
// 10. stock.h -- class definition for the stack ADT
#ifndef STOCK_H_
#define STOCK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };		// constant specific to class
	Item items[MAX];		// holds stack items
	int top;				// index for top stack item
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push() returns false if stack already is full, true otherwise
	bool push(const Item & item);		// add item to stack
	// pop() returns false if stack already is empty, ture otherwise
	bool pop(Item & item);	// pop top into item
};
#endif
*/


/*--------------------practise-----------------------*/
/*
#ifndef PRACTISE1_H_	// 1.
#define PRACTISE1_H_
#include <iostream>
#include <string>
class BankAccount
{
private:
	std::string name;
	std::string acctnum;
	double balance;
public:
	BankAccount(const std::string & client, const std::string & num, double bal = 0.0);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
};
#endif // !PRACTISE1_H_
*/

/*
#ifndef PRACTISE2_H_		//2.
#define PRACTISE2_H_
#include <iostream>
#include <string>
class Person
{
private:
	static const int LIMIT = 25;
	std::string lname;		// Person's last name
	char fname[LIMIT];	// Persion's first name
public:
	Person() { lname = ""; fname[0] = '\0'; }	// #1
	Person(const std::string & ln, const char * fn = "Heyyou");	// #2
// the following methods display lname and fname
	void Show() const;			// firstname lastname format
	void FormalShow() const;	// lastname, firstname format
};
#endif // !PRACTISE2_H_
*/

/*
#ifndef __PRACTISE_3_	// 3.
#define __PRACTISE_3_

class golf
{
private:
    static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	golf(const char * name, int hc);
	int setgolf(const char * name, int hc);
	void sethandicap(const int hc);
	void showgolf() const;
};
#endif
*/

/*
#ifndef __PRACTISE_4_	// 4. 
#define __PRACTISE_4_
namespace SALES
{
	class Sales
	{
	private:
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales(double ar[], int n);
		Sales();
		void showSales() const;
	};
}
#endif
*/

/*
#ifndef __PRACTISE_5_	//5.
#define __PRACTISE_5_

struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
private:
	enum { MAX = 10 };		// constant specific to class
	Item items[MAX];		// holds stack items
	int top;				// index for top stack item
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push() returns false if stack already is full, true otherwise
	bool push(const Item & item);		// add item to stack
	// pop() returns false if stack already is empty, ture otherwise
	bool pop(Item & item);	// pop top into item
};
#endif
*/

/*
#ifndef __PRACTISE_6_	//6. 
#define __PRACTISE_6_

class Move
{
private:
	double x;
	double y;
public:
	Move(double a, double b = 0);	// sets x, y to a, b
	void showmove() const;				// shows current x, y values
	Move add(const Move & m) const;
	void reset(double a = 0, double b = 0);	// resets x, y ro a, b
};

#endif
*/

/*
#ifndef __PRACTISE_7_	//7. 
#define __PRACTISE_7_
class Plorg
{
private:
	char fullname[20];
	int CI;
public:
	Plorg(const char * a = "Plorga", int tem = 50);
	void chgCI(int tem);
	void showplorg() const;
};
#endif
*/

#ifndef __PRACTISE_8_	//8.
#define __PRACTISE_8_
typedef int Item;
class List
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	List() { top = 0; }
	bool isempty() const;
	bool isfull() const;
	bool add(const Item item);
	void visit(void(*pf)(Item & item));
};
#endif

