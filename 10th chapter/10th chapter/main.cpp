/*
// 3. usestock0.cpp
// compile with class.cpp
#include <iostream>
#include "head.h"
int main()
{
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15, 18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400, 20.00);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(300000, 40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(300000, 0.125);
	fluffy_the_cat.show();
	system("pause");
	return 0;
}
*/

/*
// 6. usestock2.cpp	-- using the Stock class
// compile with class.cpp
#include <iostream>
#include "head.h"
int main()
{
	{
		using std::cout;
		cout << "Using constructors to create new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);		// syntax 1
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);	// syntax 2
		stock2.show();

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		stock1.show();
		stock2.show();

		cout << "Using a constructor to reset an object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);	// temp object
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done\n";
	}
	system("pause");
	return 0;
}
*/

/*
// 9. usestock2.cpp	-- using the Stock class
// compile with class.cpp
#include <iostream>
#include "head.h"
const int STKS = 4;
int main()
{
// create an array of initialized objects
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
		};
	std::cout << "Stock holding:\n";
	int st;
	for (st = 0; st < STKS; st++)
		stocks[st].show();
// set pointer to first element
	const Stock * top = &stocks[0];
	for (st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);
// now top points to the most valuable holding
	std::cout << "\nMost valuable holding:\n";
	top->show();
	system("pause");
	return 0;
}
*/

/*
// 12. stacker.cpp -- testing the Stack Class
#include <iostream>
#include <cctype>	// or ctype.h
#include "head.h"
int main()
{
	using namespace std;
	Stack st;		// create an empty stack
	char ch;
	unsigned long po;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
			case 'A':
			case 'a': cout << "Enter a PO number to add: ";
				cin >> po;
				if (st.isfull())
					cout << "stack already full\n";
				else
					st.push(po);
				break;
			case 'P':
			case 'p': 
				if (st.isempty())
					cout << "stack already empty\n";
				else
				{
					st.pop(po);
					cout << "PO #" << po << " popped\n";
				}
				break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, to Q to quit.\n";
	}
	cout << "Bye\n";
	system("pause");
	return 0;
}
*/

/*--------------------practise-----------------------*/
/*
#include <iostream>		//1.
#include "head.h"
int main()
{
	BankAccount myacc("yueyiping", "dearian");
	myacc.show();
	myacc.deposit(10);
	myacc.show();
	myacc.withdraw(50);
	myacc.show();
	myacc.withdraw(5);
	myacc.show();
	system("pause");
	return 0;
}
*/
/*
#include "head.h"	//2.
int main()
{
	using namespace std;
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	two.Show();
	three.Show();
	three.FormalShow();
	system("pause");
	return 0;
}
*/

/*
#include <iostream>  // 3.
#include "head.h"
const int Cnt = 3;
int main()
{
	using namespace std;
	golf andy[Cnt] = { golf("yue",1),golf("yi",2) ,golf("ping",3) };
	for (int j = 0; j < Cnt; j++)
	{
		andy[j].showgolf();
	}
	for (int j = 0; j < Cnt; j++)
	{
		andy[j].sethandicap(250);
		andy[j].showgolf();
	}
	system("pause");
	return 0;
}
*/

/*
#include <iostream> //4.
#include "head.h"
int main()
{
	using namespace SALES;
	Sales test1;
	test1.showSales();
	system("pause");
	return 0;
}
*/

/*
#include <iostream>		//5.
#include <cctype>	
#include "head.h"
int main()
{
	using namespace std;
	Stack st;		
	char ch;
	Item po;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a': 
			cout << "Enter a PO fullname: ";
			cin.getline(po.fullname, 35);
			cout << "Enter a PO number to add: ";
			(cin >> po.payment).get();
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isempty())
				cout << "stack already empty\n";
			else
			{
				st.pop(po);
				cout << "PO #" << po.fullname << ": " << po.payment << " popped\n";
			}
			break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, to Q to quit.\n";
	}
	cout << "Bye\n";
	system("pause");
	return 0;
}
*/

/*
#include <iostream> //6.
#include "head.h"
int main()
{
	Move test1(1, 1);
	Move test2(3, 3);
	test1.showmove();
	test1.add(test2).add(test2).showmove();
	test1.reset(0, 0);
	test1.showmove();
	system("pause");
	return 0;
}
*/

/*
#include <iostream> //7.
#include "head.h"
int main()
{
	Plorg test1("gugugu", 100);
	Plorg test2;
	test1.showplorg();
	test1.chgCI(1);
	test1.showplorg();
	test2.showplorg();
	system("pause");
	return 0;
}
*/

#include <iostream>	//8.
#include "head.h"
#include <cctype>
#include <string>
using namespace std;
void func(Item & item);
int main()
{
	List st;
	string str;
	cout << "At first: " << endl;
	if (st.isempty() == 1)
		str = "Yes!";
	if (st.isempty() == 0)
		str = "No!";
	cout << "isempty? " << str << endl;
	if (st.isfull() == 1)
		str = "Yes!";
	if (st.isfull() == 0)
		str = "No!";
	cout << "isfull? " << str << endl;
	st.add(1);
	st.add(2);
	st.add(3);
	st.add(4);
	cout << "\nNow: " << endl;

	if (st.isempty() == 1)
		str = "Yes!";
	if (st.isempty() == 0)
		str = "No!";
	cout << "isempty? " << str << endl;
	if (st.isfull() == 1)
		str = "Yes!";
	if (st.isfull() == 0)
		str = "No!";
	cout << "isfull? " << str << endl;

	void(*pf)(Item & item) = func;
	st.visit(pf);

	system("pause");
	return 0;
}
void func(Item & item)
{
	cout << item << endl;
}


