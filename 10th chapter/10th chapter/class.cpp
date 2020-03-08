/*
// 2. stock00.cpp -- implementing the Stock class
// version 00
#include <iostream>
#include "head.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative."
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative."
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	using std::cout;
	using std::ios_base;
	// set format to #.##
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	std::cout << "Company: " << company
		<< " Shares: " << shares << '\n'
		<< " Share Price: $" << share_val;
	// set format to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_val << '\n';

	// restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
*/

/*
// 5. stock10.cpp -- Stock class with constructions, destructor added
#include <iostream>
#include "head.h"

// constructors (verbose versions)
Stock::Stock()		// default constructor
{
	std::cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative;"
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
// class destructor
Stock::~Stock()		// verbose class destructor
{
	std::cout << "Bye, " << company << "!\n";
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative."
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative."
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
void Stock::show()
{
	using std::cout;
	using std::ios_base;
	// set format to #.##
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	std::cout << "Company: " << company
		<< " Shares: " << shares << '\n'
		<< " Share Price: $" << share_val;
	// set format to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_val << '\n';

	// restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
*/

/*
// 8. stock20.cpp -- augmented verison
#include <iostream>
#include "head.h"
// constructors 
Stock::Stock()		// default constructor
{
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative;"
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
// class destructor
Stock::~Stock()		// quiet class destructor
{
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative."
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative."
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
void Stock::show() const
{
	using std::cout;
	using std::ios_base;
	// set format to #.##
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	std::cout << "Company: " << company
		<< " Shares: " << shares << '\n'
		<< " Share Price: $" << share_val;
	// set format to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_val << '\n';

	// restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
const Stock & Stock::topval(const Stock &s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
*/

/*
// 11. stack.coo -- Stack member functions
#include "head.h"
Stack::Stack()		// create an empty stack
{
	top = 0;
}
bool Stack::isempty() const
{
	return top == 0;
}
bool Stack::isfull() const
{
	return top == MAX;
}
bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else 
		return false;
}
*/


/*--------------------practise-----------------------*/
/*
#include "head.h"   // 1.
BankAccount::BankAccount(const std::string & client, const std::string & num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}
void BankAccount::show() const
{
	using std::cout;
	cout << "Name: " << name << std::endl;
	cout << "acctnum: " << acctnum << std::endl;
	cout << "balance: " << balance << std::endl;
}
void BankAccount::deposit(double cash)
{
	if (cash >= 0)
		balance += cash;
	else
		std::cout << "Error!\n";
}
void BankAccount::withdraw(double cash)
{
	if (cash < 0 || balance < cash)
		std::cout << "Error!\n";
	else 
		balance -= cash;
}
*/

/*
#include "head.h"	//2.
Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname, fn);
}
void Person::Show() const 
{
	std::cout << fname << ", " << lname << std::endl;
}
void Person::FormalShow() const
{
	std::cout << lname << ", " << fname << std::endl;
}
*/

/*
#include <iostream>	// 3.
#include "head.h"
#include <cstring>
golf::golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}
int golf::setgolf(const char * name, int hc)
{
	golf g = golf(name, hc);
	*this = g;
	if (fullname[0] == '\0')
		return 0;
	return 1;
}
void golf::sethandicap(const int hc) 
{
	handicap = hc;
}
void golf::showgolf() const
{
	std::cout << "Name: " << fullname << ", handicap: " << handicap << std::endl;
}
*/

/*
#include <iostream> //4.
#include "head.h"

namespace SALES
{
	using std::cout;
	using std::cin;
	using std::endl;
	Sales::Sales(double ar[], int n)
	{
		double sum = 0;
		max = ar[0];
		min = ar[0];
		for (int j = 0; j < n; j++)
		{
			sales[j] = ar[j];
			sum += ar[j];
			if (ar[j] > max)
				max = ar[j];
			if (ar[j] < min)
				min = ar[j];
		}
		average = sum / n;
		for (int j = n; j < QUARTERS; j++)
			sales[j] = 0;
	}
	Sales::Sales()
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
			sales[0] = sales[1] = sales[2] = sales[3] = average = max = min = 0;
		}
		else
			*this = Sales(ar, i);	 // there
	}
	void Sales::showSales() const
	{
		cout << "Sales: ";
		for (int i = 0; i < QUARTERS; i++)
			cout << sales[i] << " ";
		cout << "\nMax: " << max << endl;
		cout << "Min: " << min << endl;
		cout << "Average: " << average << endl;
	}
}
*/

/*
#include "head.h"	//5.
Stack::Stack()		
{
	top = 0;
}
bool Stack::isempty() const
{
	return top == 0;
}
bool Stack::isfull() const
{
	return top == MAX;
}
bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
*/

/*
#include <iostream>	// 6.
#include "head.h"
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showmove() const
{
	std::cout << "x: " << x << "     " << "y: " << y << std::endl;
}
Move Move::add(const Move & m) const
{
	return Move(x + m.x, y + m.y);
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
*/

/*
#include <iostream>
#include "head.h"
#include <cstring>
Plorg::Plorg(const char * a, int tem)
{
	strcpy(fullname, a);
	CI = tem;
}
void Plorg::chgCI(int tem)
{
	CI = tem;
}
void Plorg::showplorg() const
{
	std::cout << fullname << ": " << CI << "(CI)" << std::endl;
}
*/

#include <iostream>	//8.
#include "head.h"
bool List::isempty() const
{
	return top == 0;
}
bool List::isfull() const
{
	return top == MAX;
}
bool List::add(const Item item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
void List::visit(void(*pf)(Item & item))
{
	std::cout << "\nDisplay the item:\n";
	for (int i = 0; i < top; i++)
		(*pf)(items[i]);
}

