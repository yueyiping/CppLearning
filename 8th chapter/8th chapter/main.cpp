/*
// 1. inline.cpp -- using an inline function
#include <iostream>
// an inline function definition
inline double square(double x) { return x * x; }
int main()
{
	using namespace std;
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5 + 7.5);		// can pass expressions
	cout << "a = " << a << ",b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c square = " << square(c++) << "\n";
	cout << "Now c = " << c << endl;
	system("pause");
	return 0;
}
*/

/*
// 2. firstref.cpp -- defining and using a reference
#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;		// rodents is a reference
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
// some implementations require type casting the following
// address to type unsigend
	cout << "rate address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	system("pause");
	return 0;
}
*/

/*
// 3. sceref.cpp -- defining and using a reference
#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;		// rodents is a reference
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "rate address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;			
	rodents = bunnies;			// can we change the reference?
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;

	system("pause");
	return 0;
}
*/

/*
// 4. swaps.cpp -- swapping with references and with pointers
#include <iostream>
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);
int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);	// pass variables
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap contents again:\n";
	swapp(&wallet1, &wallet2);	// pass addresses of variable
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);	// pass values of variable
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	system("pause");
	return 0;
}
void swapr(int & a, int & b)	// use references
{
	int temp;
	temp = a;			// use a, b for value of variables
	a = b;
	b = temp;
}
void swapp(int * p, int * q)	// use pointers
{
	int temp;
	temp = *p;			// use *p, *q for values of variables
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)		// try using value
{
	int temp;
	temp = a;			// use a, b for values of variables
	a = b;
	b = temp;
}
*/

/*
// 5. cubes.cpp -- regular and reference arguments
#include <iostream>
double cube(double a);
double refcube(double &ra);
int main()
{
	using namespace std;
	double x = 3.0;
	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);
	cout << " = cube of " << x <<endl;
	system("pause");
	return 0;
}
double cube(double a)
{
	a *= a * a;
	return a;
}
double refcube(double &ra)
{
	ra *= ra * ra;
	return ra;
}
*/

/*
// 6. strc_ref.cpp -- using structure references
#include <iostream>
#include <string>
struct free_throws
{
	std::string name;
	int made;
	int attempts;
	float percent;
};
void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);
int main()
{
// partial initializayions - remaining members set to 0
	free_throws one = {"Ifelsa Branch",13, 14};
	free_throws two = { "Andor Knott",10, 16 };
	free_throws three = { "Minnie Max",7, 9 };
	free_throws four = { "Whily Looper",5, 9 };
	free_throws five = { "Long Long",6, 14 };
	free_throws team = { "Throwgoods",0 ,0 };
// no initialization
	free_throws dup;

	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
// use return values as argument
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
// use return value in assignment
	dup = accumulate(team, five);
	std::cout << "Displaying team:\n";
	display(team);
	std::cout << "Displaying dup after assignment:\n";
	display(dup);
	set_pc(four);
// ill-advised assignment
	accumulate(dup, five) = four;
	std::cout << "Displaying dup after ill-advised assignment:\n";
	display(dup);
	system("pause");
	return 0;
}
void display(const free_throws & ft)
{
	using std::cout;
	cout << "Name: " << ft.name << '\n';
	cout << " Made: " << ft.made << '\t';
	cout << "Attempts: " << ft.attempts << '\t';
	cout << "Percent: " << ft.percent << '\n';
}
void set_pc(free_throws & ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.attempts = 0;
}
free_throws & accumulate(free_throws & target, const free_throws & source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}
*/

/*
// 7. strquote.cpp -- different design
#include <iostream>
#include <string>
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);
int main()
{
	string input;
	string copy;
	string result;

	cout << "Enter a string: ";
	getline(cin, input);
	copy = input;
	cout << "Your string has as enterd: " << input << endl;
	result = version1(input, "***");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	cout << "Resetting original string.\n";
	input = copy;
	cin >> input;
	result = version3(input, "@@@");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	system("pause");
	return 0;
}
string version1(const string & s1, const string & s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}
const string & version2(string & s1, const string & s2)		// has side effect
{
	s1 = s2 + s1 + s2;
// safe to return reference passed to function
	return s1;
}
const string & version3(string & s1, const string & s2)		// bad design
{
	string temp;
	temp = s2 + s1 + s2;
// unsafe to return reference to local variable
	return temp;
}
*/

/*
// 8. filefunc.cpp -- function with ostream & parameter
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main()
{
	ofstream fout;
	const char * fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		cout << "Can't open " << fn << ". Bye.\n";
		exit(EXIT_FAILURE);
	}
	double objective;
	cout << "Enter the focal length of your "
		"telescope objective in mm: ";
	cin >> objective;
	double eps[LIMIT];
	cout << "Enter the focal lengths, in mm, of " << LIMIT
		<< " eyepieces;\n";
	for (int i = 0; i < LIMIT; i++)
	{
		cout << "Eyepiece #" << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Dnoe\n";
	system("pause");
	return 0;
}
void file_it(ostream & os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);		// save initial formatting state
	os.precision(0);
	os << "Focal length of objective: " << fo << " mm\n";
	os.setf(ios_base::showpoint);
	os.precision(1);
	os.width(12);
	os << "f.l. eyepiece";
	os.width(15);
	os << "magnification" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}
	os.setf(initial);	// restore initial formatting state
}
*/

/*
// 9. left.cpp -- string function with a default argument
#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);
int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	char *ps = left(sample, 4);
	cout << ps << endl;
	delete[]ps;		// free old string
	ps = left(sample);
	cout << ps << endl;
	delete[]ps;		// free new string
	system("pause");
	return 0;
}
// This function returns a pointer to a new string
// consisting of the first n characters in the str string
char * left(const char * str, int n)
{
	if (n < 0)
		n = 0;
	char * p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];		// copy characters
	while (i <= n)
		p[i++] = '\0';		// set reat of string to '\0'
	return p;
}
*/

/*
// 10. leftover.cpp -- overloading the left() function
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);
int main()
{
	using namespace std;
	const char * trip = "Hawaii!!";	 // test value
	unsigned long n = 12345678;		 // test value
	int i;
	char * temp;
	for (i = 1; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete[]temp;		// point to temporary storage
	}
	system("pause");
	return 0;
}
// This function returns the first ct digits of the number num.
unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;
	if(ct == 0 || num == 0)
		return 0;		// return 0 if no digits
	while (n /= 10)
		digits++;
	if (digits > ct)
	{
		ct = digits - ct;
		while (ct--)
			num /= 10;	// return left ct digits
		return num;
	}
	else				// if ct >=number of digits
		return num;		// return the whole number
}

// This function returns a pointer to a new string
// consisting of the first n characters in the str string
char * left(const char * str, int n)
{
	if (n < 0)
		n = 0;
	char * p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];		// copy characters
	while (i <= n)
		p[i++] = '\0';		// set reat of string to '\0'
	return p;
}
*/

/*
// 11. funtemp.cpp -- using a function template
#include <iostream>
// function template prototype
template <typename T>		// or class T
void Swap(T &a, T &b);
int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);		// generates void Swap(int &, int &)
	cout << "Now i, j = " << i << ", " << j << ".\n";

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "Using compiler-generated double swapper:\n";
	Swap(x, y);		// generates void Swap(double &, double &)
	cout << "Now x, y = " << x << ", " << y << ".\n";

	system("pause");
	return 0;
}
// function template definition
template <typename T>		// or class T
void Swap(T &a, T &b)
{
	T temp;		// temp a variable of type T
	temp = a;
	a = b;
	b = temp;
}
*/

/*
// 12. twotemps.cpp -- using overloaded template functions
#include <iostream>
template <typename T>		// original template
void Swap(T &a, T &b);
template <typename T>		// new template
void Swap(T a[], T b[], int n);
void Show(int a[]);
const int Lim = 8;
int main()
{
	using namespace std;
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);		// matches original template
	cout << "Now i, j = " << i << ", " << j << ".\n";

	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
	int d2[Lim] = { 0,7,2,0,1,9,6,9 };
	cout << "Original arrays:\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);		// matchws new template
	cout << "Swapped arrays;\n";
	Show(d1);
	Show(d2);
	system("pause");
	return 0;
}
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
void Show(int a[])
{
	using namespace std;
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < Lim; i++)
		cout << a[i];
	cout << endl;
}
*/

/*
// 13. twoswap.cpp -- specialization overrides a template
#include <iostream>
template <typename T>
void Swap(T &a, T &b);
struct job
{
	char name[40];
	double salary;
	int floor;
};
// explicit specialization
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j);
int main()
{
	using namespace std;
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);			// generates void Swap(int &, int &)
	cout << "Now i, j = " << i << ", " << j << ".\n";

	job sue = {"Susan Yaffee", 73000.60,7};
	job sidney = { "Sidney Taffee",78060.72,9 };
	cout << "Before job swapping:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);	// uses void Swap(job &, job &)
	cout << "After job swapping:\n";
	Show(sue);
	Show(sidney);

	system("pause");
	return 0;
}
template <typename T>
void Swap(T &a, T &b)		// general version
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
// swaps just the salary and floor fields of a job structure
template <> void Swap<job>(job &j1, job &j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
void Show(job &j)
{
	using namespace std;
	cout << j.name << ": $" << j.salary
		<< " on floor " << j.floor << endl;
}
*/

/*
// 14. temptempover.cpp -- template overloading
#include <iostream>
template <typename T>			// template A
void ShowArray(T arr[], int n);
template <typename T>			// template B
void ShowArray(T * arr[], int n);
struct debts
{
	char name[50];
	double amount;
};
int main()
{
	using namespace std;
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];
// set pointers to the amount members of the structures in mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Listing Mr. E's counts of things:\n";
// things is an array of int
	ShowArray(things, 6);		// use template A
	cout << "Listing Mr. E's debts:\n";
// pd is an array of pointers to double
	ShowArray(pd, 3);			// uses template B (more specialized)
	system("pause");
	return 0;
}
template <typename T>			
void ShowArray(T arr[], int n)
{
	using namespace std;
	cout << "template A\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}
template <typename T>			
void ShowArray(T * arr[], int n)
{
	using namespace std;
	cout << "template B\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << ' ';
	cout << endl;
}
*/

/*
// 15. choices.cpp -- choosing a template
#include <iostream>
template<class T>		// or template <typename T>
T lesser(T a, T b)			// #1
{
	return a < b ? a : b;
}
int lesser(int a, int b)		// #2
{
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return  a < b ? a : b;
}
int main()
{
	using namespace std;
	int m = 20;
	int n = -30;
	double x = 15.5;
	double y = 25.9;
	cout << lesser(m, n) << endl;		// use #2
	cout << lesser(x, y) << endl;		// use #1 with double
	cout << lesser<>(m, n) << endl;		// use #1 with int
	cout << lesser<int>(x, y) << endl;	// use #1 with int
	system("pause");
	return 0;
}
*/

/*---------------practise---------------*/
/*
#include <iostream>		// 1
using namespace std;
void display(const char * str);
void display(const char * str, int n);
int main()
{
	const char arr[10] = "yyp";
	display(arr);
	cout << "OK!\n";
	display(arr, 5);
	system("pause");
	return 0;
}
void display(const char * str)
{
	cout << str << endl;
}
void display(const char * str, int n)
{
	if (n)
	{
		for (int i = 0; i < n; i++)
			display(str);
	}
}
*/

/*
#include <iostream>		// 2
using namespace std;
struct CandyBar
{
	char bandname[20];
	double weight;
	int heat;
};
void temp(CandyBar &stu, const char * str = "Millennium", const double a = 2.85, const int b = 350);
void display(const CandyBar &stu);
int main()
{
	CandyBar data;
	char name[20] = "dera";
	double wgh = 12.55;
	int  hea = 30;
	temp(data);
	display(data);
	temp(data, name, wgh, hea);
	display(data);
	system("pause");
	return 0;
}
void temp(CandyBar &stu, const char * str, const double a, const int b)
{
	int i;
	for (i = 0; (*str) != '\0' && i < 19; str++, i++)
		stu.bandname[i] = *str;
	stu.bandname[i] = '\0';
	stu.weight = a;
	stu.heat = b;
}
void display(const CandyBar &stu)
{
	cout << "Name: " << stu.bandname << endl;
	cout << "Weight: " << stu.weight << endl;
	cout << "Heat: " << stu.heat << endl;
}
*/

/*
#include <iostream>		// 3
#include <string>	
#include <cctype>
using namespace std;
void convert(string & str);
int main()
{
	string temp;
	cout << "Enter a string (q to quit): ";
	getline(cin, temp);
	while (cin)
	{
		if (temp[0] == 'q')
			break;
		convert(temp);
		cout << temp << endl;
		cout << "Next string (q to quit): ";
		getline(cin, temp);
	}
	cout << "Bye!\n";
	system("pause");
	return 0;
}
void convert(string & str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' || str[i] <= 'z')
			str[i] = toupper(str[i]);
		i++;
	}
}
*/

/*
#include <iostream>		// 4
using namespace std;
#include <cstring>		// for strlen(), strcpy()
struct stringy {
	char * str;		// points to a string
	int ct;			// length of string (not counting '\0')
};
// prototypes 
void set(stringy & bea, const char *str);
void show(const stringy bea, int n = 1);
void show(const char * str, int n = 1);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);		// first argument is a reference
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);			// ptints testing string once
	show(testing, 3);		// ptints testing string thrice
	show("Done!");
	system("pause");
	return 0;
}
void set(stringy & bea, const char *str)
{
	bea.ct = strlen(str) + 1;
	bea.str = new char[bea.ct];
	strcpy(bea.str, str);
}
void show(const stringy bea, int n)
{
	for (int i = 0; i < n; i++)
		cout << bea.str << endl;
}
void show(const char * str, int n)
{
	for (int i = 0; i < n; i++)
		cout << str << endl;;
}
*/

/*
#include <iostream>		// 5
using namespace std;
template <typename T>
T max5(T arr[]);
int main()
{
	int inter[5] = { 17,5,8,9,12 };
	double haf[5] = { 11.2,9.8,7.5,5.9,6.4 };
	cout << max5(inter) << endl;
	cout << max5(haf) << endl;
	system("pause");
	return 0;
}
template <typename T>
T max5(T arr[])
{
	T max = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
*/

/*
#include <iostream>		// 6
#include <cstring>		// for strlen(), strcpy()
using namespace std;
template <typename T>
T maxn(T arr[], int n);
template<> const char * maxn(const char **arr, int n);
int main()
{
	int inter[6] = { 17,5,8,9,12,1 };
	double haf[4] = { 11.2,19.1,7.5,5.9 };
	cout << maxn(inter, 6) << endl;
	cout << maxn(haf, 4) << endl;
	const char * testing[5] = {
		"yueyiping",
		"qwerqwerqwerqqwer",
		"woai",
		"uioplk",
		"woyaozhuanghang"
	};
	cout << maxn(testing, 5) << endl;
	system("pause");
	return 0;
}
template <typename T>
T maxn(T arr[],int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
template<> const char * maxn(const char **arr, int n)
{
	int j = 0; cout << "111";
	for (int i = 1; i < n; i++)
	{
		if (strlen(*arr) < strlen(*(arr+i)))
		{ 
			j = i;
		}
	}
	return *(arr+j);
}
*/

#include <iostream>		// 8
template <typename T>			
T SumArray(T arr[], int n);
template <typename T>			
T SumArray(T * arr[], int n);
struct debts
{
	char name[50];
	double amount;
};
int main()
{
	using namespace std;
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << SumArray(things, 6) << endl;		// use template A
	cout << SumArray(pd, 3) << endl;			// uses template B 
	system("pause");
	return 0;
}
template <typename T>
T SumArray(T arr[], int n)
{
	using namespace std;
	T sum = 0;
	cout << "template A\n";
	for (int i = 0; i < n; i++)
		sum+= arr[i];
	return sum;
}
template <typename T>
T SumArray(T * arr[], int n)
{
	using namespace std;
	T sum = 0;
	cout << "template B\n";
	for (int i = 0; i < n; i++)
		sum += *arr[i];
	return sum;
}


