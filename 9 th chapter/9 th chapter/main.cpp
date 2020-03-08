/*
// 1-3. file1.cpp -- example of a three-file program
#include <iostream>
#include "head.h"		// structure templates, function prototypes
using namespace std;
int main()
{
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)	// slick use of cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next tow numbers (q to quit): ";
	}
	cout << "Bye!\n";
	system("pause");
	return 0;
}
*/

/*
// 4. autoscp.cpp -- illustrating scope of automatic variable
#include <iostream>
void oil(int x);
int main()
{
	using namespace std;
	int texas = 31;
	int year = 2011;
	cout << "In main(), texas = " << texas << ", &texs = ";
	cout << &texas << endl;
	cout << "In main(), year = " << year << ", &year = ";
	cout << &year << endl;
	oil(texas);
	cout << "In main(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "In main(), year = " << year << ", &year = ";
	cout << &year << endl;
	system("pause");
	return 0;
}
void oil(int x)
{
	using namespace std;
	int texas = 5;
	cout << "In oil(), texed = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "In oil(), x = " << x << ", &x = ";
	cout << &x << endl;
	{				// start a block
		int texas = 113;
		cout << "In block, texas = " << texas;
		cout << ", &texas = " << &texas << endl;
		cout << "In block, x = " << x << ", &x = ";
		cout << &x << endl;
	}				// end a block
	cout << "Post-block texas = " << texas;
	cout << ", &texas = " << &texas << endl;
}
*/

/*
// 5-6. external.cpp -- external variable
// compile with support.cpp
#include <iostream>
using namespace std;
// external variable
double warming = 0.3;		// warming defined
// function prototypes
void update(double dt);
void local();
int main()					// uses global variable
{
	cout << "Global warming is " << warming << " degrees.\n";
	update(0.1);		// call function to change warming
	cout << "Global warming is " << warming << " degrees.\n";
	local();			// call function with local warming
	cout << "Global warming is " << warming << " degrees.\n";
	system("pause");
	return 0;
}
*/

/*
// 7-8. twofile1.cpp -- variables with external and internal linkage
#include <iostream>		// to be compiled with two file2.cpp
int tom = 3;			// external variable definition
int dick = 30;			// external variable definition
static int harry = 300;	// static, internal linkage
// function prototype
void remote_access();
int main()
{
	using namespace std;
	cout << "main() reports the following addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();
	system("pause");
	return 0;
}
*/

/*
// 9. static.cpp -- using a static local variable
#include <iostream>		
// constants
const int ArSize = 10;
// function prototype
void strcount(const char *str);
int main()
{
	using namespace std;
	char input[ArSize];
	char next;
	cout << "Enter a line:\n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')		// string didn't fit!
			cin.get(next);			// dispose of remainder
		strcount(input);
		cout << "Enter next time line (empty line to quit):\n";
		cin.get(input, ArSize);
	}
	cout << "Bye\n";
	system("pause");
	return 0;
}
void strcount(const char *str)
{
	using namespace std;
	static int total = 0;		// static local variable
	int count = 0;				// automatic local variable
	cout << "\"" << str << "\" contains ";
	while (*str++)		// go to end of string
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
*/

/*
// 10. newplace.cpp -- using placement new
#include <iostream>		
#include <new>		// for placement new
const int BUF = 512;
const int N = 5;
char buffer[BUF];	// chunk of memory
int main()
{
	using namespace std;
	double *pd1, *pd2;
	int i;
	cout << "Calling new and placement new:\n";
	pd1 = new double[N];			// new heap
	pd2 = new (buffer) double[N];	// use buffer array
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 20.0*i;
	cout << "Memory addresses:\n" << " heap: " << pd1
		<< " static: " << (void *)buffer << endl;
	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	cout << "\nCalling new and placement new a second time:\n";
	double *pd3, *pd4;
	pd3 = new double[N];			// find new address
	pd4 = new(buffer) double[N];	// overwrite old data
	for (i = 0; i < N; i++)
		pd4[i] = pd3[i] = 1000 + 40.0*i;
	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd3[i] << " at " << &pd3[i] << "; ";
		cout << pd4[i] << " at " << &pd4[i] << endl;
	}

	cout << "\nCalling new and placement new a third time:\n";
	delete[]pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];
	for (i = 0; i < N; i++)
		pd2[i] = pd1[i] = 1000 + 60.0*i;
	cout << "Memory contents:\n";
	for (i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << "; ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}
	delete[]pd1;
	delete[]pd3;
	system("pause");
	return 0;
}
*/

/*
// 11-13. namessp.cpp -- using namespaces
#include <iostream>
#include "head.h"
void other(void);
void another(void);
int main(void)
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = { {"Benny", "Gpatsniff"}, 120.0 };
	showDebt(golf);
	other();
	another();
	system("pause");
	return 0;
}
void other(void)
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = { "Doodles","Glister" };
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++)
		getDebt(zippy[i]);
	for (i = 0; i < 3; i++)
		showDebt(zippy[i]);
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}
void another(void)
{
	using pers::Person;
	Person collector = { "Milo","Rightshift" };
	pers::showPerson(collector);
	std::cout << std::endl;
}
*/

/*------------practise--------------*/
/*
#include <iostream>  // 1.
#include "head.h"
const int Cnt = 3;
int main()
{
	using namespace std;
	golf andy[Cnt];
	int flag = 0;
	int i;
	for (i = 0; i < Cnt; i++)
	{
		flag = setgolf(andy[i]);
		if (flag == 0)
			break;
	}	
	if (i == 0)
		cout << "None!\n";
	for (int j = 0; j < i; j++)
	{
		handicap(andy[j], 250);
		showgolf(andy[j]);
	}
	system("pause");
	return 0;
}
*/

/*
#include <iostream>	// 2.
#include <string>
using namespace std;
void strcount(string str);
int main()
{
	string input;
	cout << "Enter a line: ";
	getline(cin, input);
	while (input != "")
	{
		strcount(input);
		cout << "Enter next time line (empty line to quit): ";
		getline(cin, input);
	}
	cout << "Bye\n";
	system("pause");
	return 0;
}
void strcount(string str)
{
	static int total = 0;		
	int count = 0;				
	cout << "\"" << str << "\" contains ";
	count = str.size();
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
*/

/*
#include <iostream>	// 3.
#include <cstring>
using namespace std;
struct chaff
{
	char dross[20];
	int slag;
};
int main()
{
	char pool[512];
	chaff * prtt = new(pool) chaff[2];
	char sttt[20];
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter dross: ";
		cin.getline(sttt, 20);
		strcpy((prtt + i)->dross, sttt);
		cout << "Enter slag: ";
		(cin >> (prtt+i)->slag).get();
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "dross: " << (prtt + i)->dross;
		cout << ", slag: " << (prtt + i)->slag << endl;
	}
	system("pause");
	return 0;
}
*/


#include <iostream>  //4.
#include "head.h"
int main()
{
	using namespace SALES;
	Sales test1, test2;
	const double arr[3] = { 4.1,1.2,6.5 };
	setSales(test1, arr, 3);
	showSales(test1);
	setSales(test2);
	showSales(test2);
	system("pause");
	return 0;
}



